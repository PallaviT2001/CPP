#ifndef BATTERYMANAGER_H
#define BATTERYMANAGER_H

class BatteryManager
{
private:
    int m_batterypercentage;
public:
    BatteryManager();
    ~BatteryManager();
    int getbatterypercentage();
    void setbatterypercentage(int percentage);
    void batterycapacity();
};

#endif // BATTERYMANAGER_H
