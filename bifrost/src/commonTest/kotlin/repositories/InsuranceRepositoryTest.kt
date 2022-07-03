package repositories

import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.modules.insurance.InsuranceRepository
import core.TurkeyOnlyCondition
import io.kotest.core.annotation.EnabledIf
import io.kotest.core.spec.Order
import io.kotest.core.spec.style.FunSpec
import io.kotest.matchers.shouldBe
import io.kotest.matchers.shouldNotBe
import io.kotest.matchers.string.startWith
import kotlin.test.assertNotNull

@Order(2)
@EnabledIf(TurkeyOnlyCondition::class)
class InsuranceRepositoryTest : FunSpec({

    val insuranceRepository = InsuranceRepository()

    test("Checking User Who Has Insurance Account") {

        val response = insuranceRepository.checkInsurance()

        response.status shouldBe ResponseStatus.Success

        assertNotNull(response.data) {

            it.hasAccount shouldBe true

            it.insurance.urlDask shouldNotBe ""

            it.insurance.urlDask shouldBe startWith("http")

            it.insurance.urlResidencial shouldNotBe ""

            it.insurance.urlResidencial shouldBe startWith("http")

        }

    }

})