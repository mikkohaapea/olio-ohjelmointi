#include "car.h"
#include<iostream>

Car::Car(std::string newBrand, std::string newModel, int newYearModel)
{
    brand = newBrand;
    model = newModel;
    yearModel = newYearModel;
}

void Car::printData()
{
    std::cout << "Auton merkki: " << brand << std::endl;
    std::cout << "Auton malli: " << model << std::endl;
    std::cout << "Valmistusvuosi: " << yearModel << std::endl;
}
