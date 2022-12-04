#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QWidget>

class TestClass : public QWidget
{
    Q_OBJECT
public:
    explicit TestClass(QWidget *parent = nullptr);

signals:

};

#endif // TESTCLASS_H
