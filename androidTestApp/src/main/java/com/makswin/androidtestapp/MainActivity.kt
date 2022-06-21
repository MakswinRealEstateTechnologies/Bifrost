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
import com.makswin.bifrost.modules.summary.SummaryRepository
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {

    var asd: TextView? = null

    var edt: EditText? = null

    private val userId = "113563"

    private val token = "eyJ0eXAiOiJKV1QiLCJhbGciOiJSUzI1NiJ9.eyJhdWQiOiI0IiwianRpIjoiOWUxNzQ1M2VhYzdiZTk3ODhiZTRmYjBkZGE4Y2MzNzA0MWNjMjhjYzYwZWJhYWYwMTlkMjFjMDdkM2NhYTc2YWQ4YWY4Mzk4M2RiYTkyYjYiLCJpYXQiOjE2NTU3MzIyODcuMDI1OTA2LCJuYmYiOjE2NTU3MzIyODcuMDI1OTEyLCJleHAiOjE2NTgzMjQyODYuODE4MTk1LCJzdWIiOiIxMTM1NjMiLCJzY29wZXMiOltdfQ.YDlzDZ64XMwgfS9xSTSqBpfdL1gJlUuasVgAUvm9fKWvFgEv4g1RoXLKLFv_9rqAL2NXQDwLJtgIPGAU-UYgbIFGE-zfx7dv5vTESyf80EyTvinU8TB69Xkkmmv7JHRdWXejnSRMcUK3JFb36EbjjDFSO_HpsVmbNPGd3KSt0WpDFKXzNJLgz0bxNCh69oiNlfs5PmjOJ3dBFpgvIrId1jkhurPOg0L1dmgn9SFmXWTaAgsui0KcrD0hIIsK1z_yCHnfQIYA-WtDfJVcKiuz7HO0mAf_v2Ym7Tiwe87BaqTNQlmRc48K4hCyEU90-7lzvRuMAaicS3HCZJN6SFXx5mvDNxT_hHZvpmk2F7VD3AuozFiTwzPfxm5Dm59ww_fHh6R_UC61-VrqMjUCAKKALdJN6_kJm0d-chvnsEqnczIH34lpKO-MB31wM7cRYyaApLC_p5GhsRmclNJ4NleUyOOvt_CIu1536VDKfQHGNqjaUAjd8X3zJL1lK799EmlsR6x1y6MysK-eDJAu3eLSROYpTJhYhGcX7sznVdKsuxKPsMsPhPrqSZtXTL1I5LEZttevVuIUKDn7CYpy2XrBKraaWpZiC23P6POhEpN1lHjqRUypQp7DyPI2MQ-i6rGYdKRb7ukNQy-vfbDARRmW3EQIt5qc3BZpr0HZXnsxEZg"

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        this.asd = findViewById(R.id.txt)
        this.edt = findViewById(R.id.edt)

        AuthenticationService().setUserVariables(token, userId)

        lifecycleScope.launch {

            val rp1 = SummaryRepository().getNewMessageSummary()

            val rp2 = SummaryRepository().getBuyersCountSummary()

            Log.i("avs", "${rp1.data?.summary?.messageCount ?: 0}")

            Log.i("avs", "${rp2.data?.summary?.buyerCount ?: 0}")

        }

    }

}