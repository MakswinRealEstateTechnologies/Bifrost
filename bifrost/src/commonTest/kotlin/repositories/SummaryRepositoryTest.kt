package repositories

import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.modules.summary.SummaryRepository
import io.kotest.core.spec.Order
import io.kotest.core.spec.style.FunSpec
import io.kotest.matchers.comparables.shouldBeGreaterThan
import io.kotest.matchers.shouldBe
import kotlin.test.assertNotNull

@Order(3)
class SummaryRepositoryTest : FunSpec({

    val summaryRepository = SummaryRepository()

    test("Checking New Message Count Summary") {

        val response = summaryRepository.getNewMessageSummary()

        response.status shouldBe ResponseStatus.Success

        assertNotNull(response.data) {

            it.summary.messageCount shouldBeGreaterThan 0

        }

    }

    test("Checking Buyer Count Summary") {

        val response = summaryRepository.getBuyersCountSummary()

        response.status shouldBe ResponseStatus.Success

        assertNotNull(response.data) {

            it.summary.buyerCount shouldBeGreaterThan 0

        }

    }

})