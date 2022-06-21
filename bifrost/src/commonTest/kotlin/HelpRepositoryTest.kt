import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.modules.help.models.request.enums.AddFeedBackType
import com.makswin.bifrost.modules.help.models.request.enums.TrainingsTimeType
import com.makswin.bifrost.modules.help.HelpRepository
import com.makswin.bifrost.modules.help.models.request.AddFeedBackRequest
import com.makswin.bifrost.modules.insurance.models.request.GetTrainingListRequest
import core.BaseRepositoryTest
import kotlinx.coroutines.runBlocking
import kotlin.test.*

class HelpRepositoryTest : BaseRepositoryTest() {

    private val helpRepository = HelpRepository()

    @Ignore
    fun `Bug Feedback By User`() = runBlocking {

        val response =
            helpRepository.addFeedback(AddFeedBackRequest(AddFeedBackType.Bug, "FeedBack Bug Test"))


        assertEquals(response.status, ResponseStatus.Success)

    }

    @Ignore
    fun `Suggestion Feedback By User`() = runBlocking {

        val response = helpRepository.addFeedback(
            AddFeedBackRequest(
                AddFeedBackType.Feedback,
                "FeedBack Suggestion Test"
            )
        )

        assertEquals(response.status, ResponseStatus.Success)

    }

    @Test
    fun `Getting Last Training`() = runBlocking {

        val response = helpRepository.getLastTraining()

        assertEquals(response.status, ResponseStatus.Success)

        assertNotNull(response.data) { }

    }

    @Test
    fun `Getting Previous 10 Trainings`() = runBlocking {

        val response = helpRepository.getTrainingList(GetTrainingListRequest(TrainingsTimeType.Previous))

        assertEquals(response.status, ResponseStatus.Success)

        assertNotNull(response.data) {

            assertFalse(it.trainings.isEmpty())

        }

    }

    @Test
    fun `Getting Next 10 Trainings`() = runBlocking {

        val response = helpRepository.getTrainingList(GetTrainingListRequest(TrainingsTimeType.Next))

        assertEquals(response.status, ResponseStatus.Success)

        assertNotNull(response.data) {

            assertFalse(it.trainings.isEmpty())

        }

    }

}