package com.makswin.bifrost

import com.makswin.bifrost.core.MainLoopDispatcher
import com.makswin.bifrost.services.MiscService
import kotlinx.coroutines.*
import kotlin.coroutines.CoroutineContext
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertTrue

class CoroutineTestCase : CoroutineScope {
    val job = Job()
    var value = 1
    override val coroutineContext: CoroutineContext
        get() = job + Dispatchers.Unconfined


    fun testFunction(): Deferred<Unit> {
        return async {
            delay(20000)
            value = 2
        }
    }
}

class MiscServiceTest {

    private val service = MiscService()

    @Test
    fun testCallingCodes() = runBlocking {

        val coroutineTestCase = CoroutineTestCase()
        coroutineTestCase.testFunction().await()
        assertEquals(2, coroutineTestCase.value)

    }
}

/*


        val scope = CoroutineScope(MainLoopDispatcher)

        scope.launch {

            service.getCallingCodes { responseType, list ->

                assertTrue("Hello".contains("Heasdsal"), "Check 'Hello' is mentioned")

            }

            delay(15000)

        }
 */