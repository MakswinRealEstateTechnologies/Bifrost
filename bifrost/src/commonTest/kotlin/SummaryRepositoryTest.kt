import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.modules.summary.SummaryRepository
import core.BaseRepositoryTest
import kotlinx.coroutines.runBlocking
import kotlin.test.*

class SummaryRepositoryTest : BaseRepositoryTest() {

    private val summaryRepository = SummaryRepository()

    @Test
    fun `Checking New Message Count Summary`() = runBlocking {

        val response = summaryRepository.getNewMessageSummary()

        assertEquals(response.status, ResponseStatus.Success)

        assertNotNull(response.data) {

            println(it.summary.messageCount)

            assertTrue(it.summary.messageCount > 0)

        }

    }

    @Ignore
    fun `Checking Buyer Count Summary`() = runBlocking {

        val response = summaryRepository.getBuyersCountSummary()

        assertEquals(response.status, ResponseStatus.Success)

        assertNotNull(response.data) {

            assertTrue(it.summary.buyerCount > 0)

        }

    }

}
