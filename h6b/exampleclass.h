#ifndef EXAMPLECLASS_H
#define EXAMPLECLASS_H

#include <QObject>
#include <QThread>
#include <QCoreApplication>
class ExampleClass : public QObject
{
    Q_OBJECT
public:
    ExampleClass(QObject* parent = nullptr);
    void startToWait();

public slots:
    void sayHelloSlot();
signals:
    void readyToSay();

};

#endif // EXAMPLECLASS_H
