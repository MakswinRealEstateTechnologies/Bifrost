package com.makswin.bifrost.modules.help

class NewFeature {

    /*

    sealed interface BaseResponse<out T : Any> {
    object Loading : BaseResponse<Nothing>
    object Error : BaseResponse<Nothing>
    data class Success<out T: Any>(val data: T?) : BaseResponse<T>
}

    fun getTrainingList2(request: GetTrainingListRequest) = flow {

        emit(SyncState.Loading)

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

        if (response.isFailed()) {
            emit(SyncState.Error(""))
            return@flow
        }

        val data = response.data?.trainings_for_user?.data

        if (data == null) {
            emit(SyncState.Error(""))
            return@flow
        }

        val list = data.map { Trainings(it.fragmentTraining) }

        emit(SyncState.Error(""))

    }.wrap()
     */

}