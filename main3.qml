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
        id: player3
        source: "file:///C:/Users/keith/Documents/QTExample/videoplayback.mp4"
        audioOutput: AudioOutput {}
        videoOutput: videoOutput3
    }

    VideoOutput {
        id: videoOutput3
        anchors.fill: parent
        anchors.margins: 20
    }

    Component.onCompleted: {
        player3.play()
        //captureSession.camera.start()
    }
}

