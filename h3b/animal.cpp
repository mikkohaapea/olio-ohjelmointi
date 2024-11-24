#include "animal.h"
#include <iostream>

Animal::Animal()
{

}

void Animal::callOut()
{
    std::cout << "Elain aantelee." << std::endl;
}

Animal::~Animal()
{
    //Varmistetaan, että olio tuhoutuu
    std::cout << "Animal-luokan olio tuhoutuu" << std::endl;
}
