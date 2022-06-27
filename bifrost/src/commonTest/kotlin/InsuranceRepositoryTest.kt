import com.makswin.bifrost.core.graphql.GraphQLAuthorizationInterceptor
import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.modules.insurance.InsuranceRepository
import core.BaseRepositoryTest
import kotlinx.coroutines.runBlocking
import kotlin.test.*

class InsuranceRepositoryTest : BaseRepositoryTest() {

    private val insuranceRepository = InsuranceRepository()

    @Test
    fun `Checking User Who Has Insurance Account`() = runBlocking {

        GraphQLAuthorizationInterceptor.testUserId = "113563"

        val response = insuranceRepository.checkInsurance()

        assertEquals(response.status, ResponseStatus.Success)

        assertNotNull(response.data) {

            assertTrue(it.hasAccount)

            assertTrue(it.insurance.urlDask.isNotEmpty())

            assertTrue(it.insurance.urlDask.startsWith("http"))

            assertTrue(it.insurance.urlResidencial.isNotEmpty())

            assertTrue(it.insurance.urlResidencial.startsWith("http"))

        }

    }

}
