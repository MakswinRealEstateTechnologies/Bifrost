package core

import io.kotest.core.config.AbstractProjectConfig
import io.kotest.core.spec.SpecExecutionOrder

class BifrostTestConfiguration: AbstractProjectConfig() {
    override val specExecutionOrder = SpecExecutionOrder.Annotated
}