#ifndef CAR_H
#define CAR_H
#include<string>
class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;
public:
    Car();
    void printData();
    void setBrand(const std::string &newBrand);
    void setModel(const std::string &newModel);
    void setYearModel(int newYearModel);

};

#endif // CAR_H
