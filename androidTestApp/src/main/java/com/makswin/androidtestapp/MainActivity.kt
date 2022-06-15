package com.makswin.androidtestapp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.EditText
import android.widget.TextView
import androidx.lifecycle.lifecycleScope
import com.makswin.bifrost.modules.misc.MiscellaneousRepository
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {

    var asd: TextView? = null

    var edt: EditText? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        this.asd = findViewById(R.id.txt)
        this.edt = findViewById(R.id.edt)

        lifecycleScope.launch {
            val response = MiscellaneousRepository().test231()
        }

    }

}