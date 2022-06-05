package com.makswin.bifrost

import com.makswin.bifrost.core.isFailed
import com.makswin.bifrost.enums.AddFeedBackType
import com.makswin.bifrost.modules.help.HelpService
import com.makswin.bifrost.modules.help.requestModels.AddFeedBackModel
import kotlinx.coroutines.*
import kotlin.test.*

class HelpServiceTest {

    private lateinit var helpService: HelpService

    @BeforeTest
    fun onSetup() {
        helpService = HelpService()
    }

    @Test
    fun testAddFeedBack() = runBlocking {

        val model = AddFeedBackModel(AddFeedBackType.Feedback, "Test FeedBack")

        val response = helpService.addFeedback(model)

        if (response.isFailed()) fail("Adding Feedback Failed Response")

    }

    @Test
    fun testAddBug() = runBlocking {

        val model = AddFeedBackModel(AddFeedBackType.Bug, "Test Bug")

        val response = helpService.addFeedback(model)

        if (response.isFailed()) fail("Adding Bug Failed Response")

    }

}