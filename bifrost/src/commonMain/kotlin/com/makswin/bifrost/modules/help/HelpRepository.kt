package com.makswin.bifrost.modules.help

import com.apollographql.apollo3.api.Optional
import com.makswin.bifrost.AddFeedbackMutation
import com.makswin.bifrost.TrainingsQuery
import com.makswin.bifrost.core.models.BaseResponseModel
import com.makswin.bifrost.modules.core.BaseRepository
import com.makswin.bifrost.modules.help.models.request.enums.AddFeedBackType
import com.makswin.bifrost.modules.help.models.request.enums.TrainingsTimeType
import com.makswin.bifrost.modules.help.models.data.Trainings
import com.makswin.bifrost.modules.help.models.request.AddFeedBackRequest
import com.makswin.bifrost.modules.help.models.response.TrainingListResponse
import com.makswin.bifrost.modules.help.models.response.TrainingResponse
import com.makswin.bifrost.modules.insurance.models.request.GetTrainingListRequest
import com.makswin.bifrost.type.*
import com.makswin.bifrost.utils.DateFormatType
import com.makswin.bifrost.utils.DateHelper

class HelpRepository : BaseRepository() {

    /**
     * Getting some feedback or bug from user about app
     * @author alkincakiralar
     */
    suspend fun addFeedback(request: AddFeedBackRequest): BaseResponseModel<Any> {

        val feedBackType = if (request.type == AddFeedBackType.Bug) {
            FeedbackType.BUG
        } else {
            FeedbackType.FEEDBACK
        }

        val input = AddFeedbackInput(request.note, Optional.presentIfNotNull(feedBackType))

        val mutation = AddFeedbackMutation(input)

        val response = executeMutation(mutation)

        if (response.isFailed()) return onError()

        return onSuccess()

    }

    /**
     * Getting closest training
     * @author alkincakiralar
     */
    suspend fun getLastTraining(): BaseResponseModel<TrainingResponse?> {

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
            value = Optional.presentIfNotNull(DateHelper.getCurrentDate(DateFormatType.yyyy__MM__dd_HH_mm_ss))
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

        if (response.isFailed()) return onError()

        val data = response.data?.trainings_for_user?.data ?: return onError()

        return if (data.isNotEmpty()) {

            val training = Trainings(data.first().fragmentTraining)

            onSuccess(TrainingResponse(training))

        } else {

            onSuccess(null)

        }

    }

    /**
     * Getting next or previous days training list
     * @author alkincakiralar
     */
    suspend fun getTrainingList(request: GetTrainingListRequest): BaseResponseModel<TrainingListResponse> {

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
            operator = if (request.type == TrainingsTimeType.Previous) Optional.presentIfNotNull(
                SQLOperator.LT
            ) else Optional.presentIfNotNull(SQLOperator.GT),
            value = Optional.presentIfNotNull(DateHelper.getCurrentDate(DateFormatType.api_format))
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

        if (response.isFailed()) return onError()

        val data = response.data?.trainings_for_user?.data ?: return onError()

        val trainingListResponse = TrainingListResponse(data.map { Trainings(it.fragmentTraining) })

        return onSuccess(trainingListResponse)

    }

}
