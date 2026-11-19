#include "engine.h"

Engine::Engine(QString et, QObject *parent)
    : QObject{parent}
{
    engineType=et;
}

void Engine::showEngine()
{
    //cout:n sijaan käytetään qDebug
    qDebug()<<"Moottorin tyyppi="<<engineType;
}

Engine::~Engine()
{
    qDebug()<<" --- Engine olio tuhottiin";
}
