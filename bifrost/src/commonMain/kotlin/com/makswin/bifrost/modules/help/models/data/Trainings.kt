package com.makswin.bifrost.modules.help.models.data

import com.makswin.bifrost.fragment.FragmentTraining

data class Trainings(
    var startsAt: String = "",
    var endAt: String = "",
    var title: String = "",
    var meetingId: String = "",
    var meetingPassword: String = "",
    var meetingLink: String = "",
    var recordingLink: String = ""
) {

    constructor(data: FragmentTraining) : this() {
        this.startsAt = data.starts_at.toString()
        this.endAt = data.ends_at.toString()
        this.title = data.title ?: ""
        this.meetingId = data.meeting_id ?: ""
        this.meetingPassword = data.meeting_password ?: ""
        this.meetingLink = data.meeting_link ?: ""
        this.recordingLink = data.meeting_recording_link ?: ""
    }

}