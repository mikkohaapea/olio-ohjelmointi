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
    Car(std::string, std::string, int);
    void printData();
};

#endif // CAR_H
