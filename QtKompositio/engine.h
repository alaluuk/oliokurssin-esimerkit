#ifndef ENGINE_H
#define ENGINE_H

#include <QObject>
#include <QDebug>

class Engine : public QObject
{
    Q_OBJECT

private:
    QString engineType;
public:
    explicit Engine(QString, QObject *parent = nullptr);
    void showEngine();
    ~Engine();
signals:
};

#endif // ENGINE_H
