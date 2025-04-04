#ifndef RENTALVEHICLEVEHICLE_H
#define RENTALVEHICLEVEHICLE_H
#include <string>

class Rentalvehicledetails
{
public:
    Rentalvehicledetails();
    ~Rentalvehicledetails();
    Rentalvehicledetails(std::string brand, std::string model, std::string vehicleNumber, float rentPrice,std::string status);

    virtual std::string getBrand();
    virtual std::string getModel();
    virtual std::string getVehicleNumber();
    virtual float getRentPrice();
    virtual  std::string getStatus();

    void setBrand(std::string brand);
    void setModel(std::string model);
    void setVehicleNumber(std::string vehicleNumber);
    void setRentPrice(float rentPrice);
    void setStatus(std::string status);

protected:
    std::string m_brand;
    std::string m_model;
    std::string m_vehicleNumber;
    float m_rentPrice;
    std::string m_status;
};

#endif // VEHICLE_H

