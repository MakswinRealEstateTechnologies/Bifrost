package repositories

import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.modules.help.HelpRepository
import com.makswin.bifrost.modules.help.models.request.enums.TrainingsTimeType
import com.makswin.bifrost.modules.insurance.models.request.GetTrainingListRequest
import core.TestCountry
import core.TestEnvironment
import io.kotest.core.spec.Order
import io.kotest.core.spec.style.FunSpec
import io.kotest.matchers.shouldBe
import io.kotest.matchers.shouldNotBe
import kotlin.test.assertNotNull

@Order(1)
class HelpRepositoryTest : FunSpec({

    val helpRepository = HelpRepository()

//    test("Bug Feedback By User") {
//
//        val response =
//            helpRepository.addFeedback(AddFeedBackRequest(AddFeedBackType.Bug, "FeedBack Bug Test"))
//
//        response.status shouldBe ResponseStatus.Success
//
//    }
//
//    test("Suggestion Feedback By User") {
//
//        val response = helpRepository.addFeedback(
//            AddFeedBackRequest(
//                AddFeedBackType.Feedback,
//                "FeedBack Suggestion Test"
//            )
//        )
//
//        response.status shouldBe ResponseStatus.Success
//
//    }

    test("Getting Last Training") {

        val response = helpRepository.getLastTraining()

        response.status shouldBe ResponseStatus.Success

        when (TestEnvironment.getTestCountry()) {
            TestCountry.Turkey -> response.data shouldBe null
            TestCountry.Portugal -> response.data shouldBe null
        }

    }

    test("Getting Previous 10 Trainingsg") {

        val response =
            helpRepository.getTrainingList(GetTrainingListRequest(TrainingsTimeType.Previous))

        response.status shouldBe ResponseStatus.Success

        assertNotNull(response.data) {

            when (TestEnvironment.getTestCountry()) {
                TestCountry.Turkey -> it.trainings.size shouldNotBe 0
                TestCountry.Portugal -> it.trainings.size shouldBe 0
            }

        }

    }

    test("Getting Next 10 Trainingsg") {

        val response =
            helpRepository.getTrainingList(GetTrainingListRequest(TrainingsTimeType.Next))

        response.status shouldBe ResponseStatus.Success

        assertNotNull(response.data) {

            when (TestEnvironment.getTestCountry()) {
                TestCountry.Turkey -> it.trainings.size shouldNotBe 0
                TestCountry.Portugal -> it.trainings.size shouldBe 0
            }

        }

    }

})

