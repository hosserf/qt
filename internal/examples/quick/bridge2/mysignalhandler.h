#ifndef MYSIGNALHANDLER_H
#define MYSIGNALHANDLER_H

#include <QObject>

class MySignalHandler : public QObject
{
    Q_OBJECT
public:
    explicit MySignalHandler(QObject *parent = 0);

public slots:
    void callbackFromQml(QString value);
};

#endif // MYSIGNALHANDLER_H
