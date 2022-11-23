import QtQuick
import QtMultimedia
import QtQuick.Controls

ApplicationWindow {
    width: 1920
    height: 1080
    visible: true

    CaptureSession {
        id: captureSession
        camera: Camera {}
        videoOutput: videoOutput
    }

    MediaPlayer {
        id: player2
        source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4"
        audioOutput: AudioOutput {}
        videoOutput: videoOutput2
    }

    VideoOutput {
        id: videoOutput2
        anchors.fill: parent
        anchors.margins: 20
    }

    Component.onCompleted: {
        player2.play()
        //captureSession.camera.start()
    }
}

