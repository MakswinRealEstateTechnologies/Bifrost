package com.makswin.bifrost.modules.help

import com.apollographql.apollo3.api.Optional
import com.makswin.bifrost.core.BaseService
import com.makswin.bifrost.enums.AddFeedBackType
import com.makswin.bifrost.enums.ResponseType
import com.makswin.bifrost.enums.TrainingsTimeType
import com.makswin.bifrost.modules.help.requestModels.AddFeedBackModel
import com.makswin.bifrost.modules.help.responseModels.TrainingModel
import com.makswin.fizbot.AddFeedbackMutation
import com.makswin.fizbot.TrainingsQuery
import com.makswin.fizbot.type.*
import kotlinx.coroutines.launch

class HelpService : BaseService() {

    /**
     * Adding feedback
     * @author alkincakiralar
     */
    fun addFeedback(model: AddFeedBackModel, completion: (ResponseType) -> Unit) {

        scope.launch {

            val feedBackType = if (model.type == AddFeedBackType.Bug) {
                FeedbackType.BUG
            } else {
                FeedbackType.FEEDBACK
            }

            val input = AddFeedbackInput(model.note, Optional.presentIfNotNull(feedBackType))

            val mutation = AddFeedbackMutation(input)

            val response = executeMutation(mutation)

            if (!checkMutationResponse(response)) {
                completion(ResponseType.Error)
                return@launch
            }

            completion(ResponseType.Success)

        }

    }

    /**
     *
     * @author alkincakiralar
     */
    fun getLastTraining(
        completion: (ResponseType, TrainingModel?) -> Unit
    ) {

        scope.launch {

            val orderBy = listOf(
                QueryTrainingsForUserOrderByOrderByClause(
                    column = TrainingColumn.ENDS_AT,
                    order = SortOrder.ASC
                )
            )

            val isPublished = QueryTrainingsForUserWhereWhereConditions(
                column = Optional.presentIfNotNull(TrainingColumn.IS_PUBLISHED),
                operator = Optional.presentIfNotNull(SQLOperator.EQ),
                value = Optional.presentIfNotNull("true")
            )

            val officeId = QueryTrainingsForUserWhereWhereConditions(
                column = Optional.presentIfNotNull(TrainingColumn.OFFICE_ID),
                operator = Optional.presentIfNotNull(SQLOperator.IS_NULL)
            )

            val dateQuery = QueryTrainingsForUserWhereWhereConditions(
                column = Optional.presentIfNotNull(TrainingColumn.STARTS_AT),
                operator = Optional.presentIfNotNull(SQLOperator.GT),
                value = Optional.presentIfNotNull("2022-05-02 00:15:00")
            )

            val whereQuery = QueryTrainingsForUserWhereWhereConditions(
                AND = Optional.presentIfNotNull(
                    listOf(
                        isPublished,
                        officeId,
                        dateQuery
                    )
                )
            )

            val query = TrainingsQuery(whereQuery, orderBy, 1, 1)

            val response = executeQuery(query)

            if (!checkQueryResponse(response)) {
                completion(ResponseType.Error, null)
                return@launch
            }

            val data = response.data?.trainings_for_user?.data

            if (data == null) {
                completion(ResponseType.Error, null)
                return@launch
            }

            if (data.count() > 0) {

                val training = TrainingModel(data.first().fragmentTraining)

                completion(ResponseType.Success, training)

            } else {

                completion(ResponseType.Error, null)

                return@launch

            }

        }

    }

    /**
     *
     * @author alkincakiralar
     */
    fun getTrainingList(
        type: TrainingsTimeType,
        completion: (ResponseType, List<TrainingModel>) -> Unit
    ) {

        scope.launch {

            val orderBy = listOf(
                QueryTrainingsForUserOrderByOrderByClause(
                    column = TrainingColumn.ENDS_AT,
                    order = SortOrder.DESC
                )
            )

            val officeId = QueryTrainingsForUserWhereWhereConditions(
                column = Optional.presentIfNotNull(TrainingColumn.OFFICE_ID),
                operator = Optional.presentIfNotNull(SQLOperator.IS_NULL)
            )

            val dateQuery = QueryTrainingsForUserWhereWhereConditions(
                column = Optional.presentIfNotNull(TrainingColumn.STARTS_AT),
                operator = if (type == TrainingsTimeType.Previous) Optional.presentIfNotNull(
                    SQLOperator.LT
                ) else Optional.presentIfNotNull(SQLOperator.GT),
                value = Optional.presentIfNotNull("2022-05-02 00:15:00")
            )

            val titleQuery = QueryTrainingsForUserWhereWhereConditions(
                column = Optional.presentIfNotNull(TrainingColumn.TITLE),
                operator = Optional.presentIfNotNull(SQLOperator.IS_NOT_NULL)
            )

            val whereQuery = QueryTrainingsForUserWhereWhereConditions(
                AND = Optional.presentIfNotNull(
                    listOf(
                        titleQuery,
                        officeId,
                        dateQuery
                    )
                )
            )

            val query = TrainingsQuery(whereQuery, orderBy, 10, 1)

            val response = executeQuery(query)

            if (!checkQueryResponse(response)) {
                completion(ResponseType.Error, arrayListOf())
                return@launch
            }

            val data = response.data?.trainings_for_user?.data

            if (data == null) {
                completion(ResponseType.Error, arrayListOf())
                return@launch
            }

            val trainings = arrayListOf<TrainingModel>()

            data.forEach {
                trainings.add(TrainingModel(it.fragmentTraining))
            }

            completion(ResponseType.Success, trainings)

        }

    }

}
