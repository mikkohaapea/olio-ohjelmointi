#include "car.h"
#include<iostream>

void Car::setBrand(const std::string &newBrand)
{
    brand = newBrand;
}

void Car::setModel(const std::string &newModel)
{
    model = newModel;
}

void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

Car::Car() {}

void Car::printData()
{
    std::cout << "Auton merkki: " << brand << std::endl;
    std::cout << "Auton malli: " << model << std::endl;
    std::cout << "Auton valmistusvuosi: " << yearModel << std::endl;
}
