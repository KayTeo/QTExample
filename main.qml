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
        id: player
        source: "rtsp://wowzaec2demo.streamlock.net/vod/mp4:BigBuckBunny_115k.mp4"
        audioOutput: AudioOutput {}
        videoOutput: videoOutput
    }

    VideoOutput {
        id: videoOutput
        anchors.fill: parent
        anchors.margins: 20
    }

    Component.onCompleted: {
        //player.play()
        captureSession.camera.start();
    }
}

