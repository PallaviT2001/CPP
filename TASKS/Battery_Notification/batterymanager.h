#ifndef BATTERYMANAGER_H
#define BATTERYMANAGER_H

#include <QObject>

class BatteryManager : public QObject
{
    Q_OBJECT
public:
    BatteryManager();
    ~BatteryManager();

    int batteryCapacity();
    void setBatteryCapacity(int batPercentage);
    void batteryCapacityVariation();

signals:
    void batteryLow(QString);

private:
    int m_batteryCapacity;
};

#endif
