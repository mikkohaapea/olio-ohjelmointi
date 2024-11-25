#include "car.h"
#include <iostream>

Car::Car() {}

Car::Car(string bra, string mdl)
{
    model = mdl;
    brand=bra;
}

string Car::getModel()
{
    return model;
}

void Car::setModel(string newModel)
{
    model=newModel;
}

string Car::getBrand()
{
    return brand;
}

void Car::setBrand(string newBrand)
{
    brand=newBrand;
}

void Car::printDetails()
{
    cout << "Auto : " << model << " " << brand << endl;
    cout << "Moottori: " << objEngine.getHorsepower() << " hp, ";
    cout << objEngine.getDisplacement() << " L" << endl;
    cout << "Rengas 1: " << objWheel1.getSize() << " tuumaa, ";
    cout << objWheel1.getType() << endl;
    cout << "Rengas 2: " << objWheel2.getSize() << " tuumaa, ";
    cout << objWheel2.getType() << endl;
    cout << "Rengas 3: " << objWheel3.getSize() << " tuumaa, ";
    cout << objWheel3.getType() << endl;
    cout << "Rengas 4: " << objWheel4.getSize() << " tuumaa, ";
    cout << objWheel4.getType() << endl;
}

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}
