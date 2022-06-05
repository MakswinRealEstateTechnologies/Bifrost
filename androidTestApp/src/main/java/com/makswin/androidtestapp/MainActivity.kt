package com.makswin.androidtestapp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Handler
import android.os.Looper
import android.widget.EditText
import android.widget.TextView
import androidx.lifecycle.*
import com.makswin.bifrost.enums.ResponseType
import com.makswin.bifrost.modules.misc.MiscService
import kotlinx.coroutines.*

class MainActivity : AppCompatActivity() {

    lateinit var miscService: MiscService

    var asd: TextView? = null

    var edt: EditText? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        this.asd = findViewById(R.id.txt)
        this.edt = findViewById(R.id.edt)

        miscService = MiscService()

        asd?.text = "loading 3"

        Handler(Looper.getMainLooper()).postDelayed({

            lifecycleScope.launch {

                this@MainActivity.getLanguages()

                this@MainActivity.getLanguages2()

            }

        }, 3000)

    }

    private suspend fun getLanguages() {

        val response = miscService.getLanguages()

        if (response.status == ResponseType.Error) {
            return
        }

        asd?.text = "${response.data?.languages?.first()?.value} ILK DATA"

    }

    private suspend fun getLanguages2() {

        val response = miscService.getLanguages()

        if (response.status == ResponseType.Error) {
            return
        }

        asd?.text = "${response.data?.languages?.first()?.value} IKINCI DATA"

    }

}