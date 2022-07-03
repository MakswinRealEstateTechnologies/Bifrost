package core

import io.kotest.core.annotation.EnabledCondition
import io.kotest.core.spec.Spec
import kotlin.reflect.KClass

class TurkeyOnlyCondition : EnabledCondition {
    override fun enabled(kclass: KClass<out Spec>): Boolean =
        TestEnvironment.getTestCountry() == TestCountry.Turkey
}

class PortugalOnlyCondition : EnabledCondition {
    override fun enabled(kclass: KClass<out Spec>): Boolean =
        TestEnvironment.getTestCountry() == TestCountry.Portugal
}