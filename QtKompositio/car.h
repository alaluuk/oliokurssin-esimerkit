#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QDebug>
#include "engine.h"

class Car : public QObject
{
    Q_OBJECT
private:
    QString brand;
    QString model;
    Engine *objEngine;
public:
    explicit Car(const QString &, const QString &, QObject *parent = nullptr);
    void printCarData();
signals:
};

#endif // CAR_H
