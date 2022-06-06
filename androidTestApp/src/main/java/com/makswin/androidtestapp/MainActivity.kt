package com.makswin.androidtestapp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.EditText
import android.widget.TextView

class MainActivity : AppCompatActivity() {


    var asd: TextView? = null

    var edt: EditText? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        this.asd = findViewById(R.id.txt)
        this.edt = findViewById(R.id.edt)

    }

}