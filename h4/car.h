#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
class Car
{
private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
public:
    Car();
    Car(string, string);
    void setEngine(void);
    void setWheels(void);
    string getModel(void);
    void setModel(string);
    string getBrand(void);
    void setBrand(string);
    void printDetails(void);
};

#endif // CAR_H
