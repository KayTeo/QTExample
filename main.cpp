#include "qmediaplayer.h"
#include <QGuiApplication>
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QDir>
#include <QPushButton>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    /*
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);


    engine.load(QUrl("../QTExample/main.qml"));
    engine.load(QUrl("../QTExample/main2.qml"));
    engine.load(QUrl("../QTExample/main3.qml"));
    */

    QApplication app (argc, argv);

    QPushButton button;
    QFont font("Courier");
    button.setFont(font);
    button.setText("My text");
    button.setToolTip("A tooltip");
    button.show();

    return app.exec();
}
