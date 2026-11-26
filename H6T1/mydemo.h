#ifndef MYDEMO_H
#define MYDEMO_H

#include <QObject>
#include <iostream>
using namespace std;

class MyDemo : public QObject
{
    Q_OBJECT
public:
    explicit MyDemo(QObject *parent = nullptr);
    void askName();

signals:
    void mySignal(string);

private slots:
    void mySlot(string);
};

#endif // MYDEMO_H
