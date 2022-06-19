package com.makswin.androidtestapp

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.EditText
import android.widget.TextView
import androidx.lifecycle.lifecycleScope
import com.makswin.bifrost.core.models.ResponseStatus
import com.makswin.bifrost.modules.authentication.AuthenticationService
import com.makswin.bifrost.modules.authentication.requestModels.Login
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {

    var asd: TextView? = null

    var edt: EditText? = null

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        this.asd = findViewById(R.id.txt)
        this.edt = findViewById(R.id.edt)

        //AuthenticationService().setToken("eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJhdWQiOiI0IiwianRpIjoiNDJkZTAxYjkwMmNkYTQ4ZGY0ZDMyMTJhZGY4ZDZiNDAxOTI4NmYzMzUwZGQ4MGE1NTQxM2QxY2Q4NTNmNTM5MDgyZjYzNzIyNGJhYjBjNmQiLCJpYXQiOjE2NTU0MTIzMzIuMjU0NDY5LCJuYmYiOjE2NTU0MTIzMzIuMjU0NDcyLCJleHAiOjE2NTgwMDQzMzIuMTQ5ODU3LCJzdWIiOiIyMDMwMzEiLCJzY29wZXMiOltdfQ.GkGPiwRpGEJ7gPEEludI-_rU2F6LQj6wrC1Kfdhextr4AXsr3ZzIqxKLw0EJTSjcf9rxG4ZRV3fts7J_ki37Qju1olVRJRNC7R3eez15mOlZ3pmxTkXW6v-6HSsSzC9_rUraDy1yPAlBOBgIz6smjUHfzD-QbacHPN3PBN_W-6fwUifehoyCDo9oHUWxsv-KgY52kw4XVXlv_siXJBB0mmWZrjRoZ8nvA8CVeM7GfUUezSyUQW15VZWEHYU1X4Xaxxwczrh59760iMSw3XtgGVZTRANHWf4SGdUsTx76nVM-yJLXcHBjfNHuEbrmrkvnTEEl0DgkWWIxoMS_dGQKFZ62TJ-vh5Zw2ZexHABdBAhTEWp6d64nUhqdby1mMqYOWFkCPucC8HDq32usHKfDgchNe3tqmxixBB6iJ7J93oPonvrvajcrAogMGxsIqSwz03nxxH9Yhafma0z2WRuqkPH-8A6QLowTaeXREF619rxtqyrbTRp5jgu_UDTwIgSwTmp4ZRJXn7VnuHj9Rp8cJBdY3beNoOqBtnat8rSxLeAf1SItdNxQwymevvsc36ThtjIyUAUV6nRlb9hiWjyGY_i0A00elwUkgK6wPYJShTG_YiTWUOyaP11eDjT_LK-b0VnAD0t43ysRm6kzWp4JDqxpTex9w_mI3oDJhAxolMo")

        /*lifecycleScope.launch {

            val asd = AuthenticationService().forgotPasswordOTP(Login("+905357394980", ""))

            if (asd.status == ResponseStatus.Success) {
                Log.i("avs", "succ")
            } else {
                Log.i("avs", "non")
            }

            val responsea = AuthenticationService().login(Login("+905357394980", "394980"))

            /*val response = HelpRepository().getLastTraining()

            response.data?.training?.let {

                Log.i("avs", "${it.meetingLink} ${it.endAt} ${it.startsAt}")

                Log.i("avs", DateHelper.parseDate(it.startsAt, DateFormatType.dd_MMMM_yyyy))

                Log.i("avs", DateHelper.parseDate(it.startsAt, DateFormatType.HH_mm))

            }*/

            Log.i("avs", responsea.data?.accessToken ?: "null token")

        }*/

        AuthenticationService().test()

    }

}