#include "qmediaplayer.h"
#include <QGuiApplication>
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtMultimediaWidgets/QVideoWidget>
#include <QDir>
#include <QPushButton>
#include<newclass.h>
#include <QModbusTcpClient>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QApplication app (argc, argv);

    QPushButton button;
    QFont font("Courier");
    button.setFont(font);
    button.setText("My text");
    button.setToolTip("A tooltip");
    button.show();

    return app.exec();
}
