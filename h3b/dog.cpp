#include "dog.h"
#include <iostream>

Dog::Dog() {}

void Dog::callOut()
{
    std::cout << "Koira haukkuu!" << std::endl;
}

Dog::~Dog()
{
    // varmistetaan, että olio tuhoutuu
    std::cout << "Dog-luokan olio tuhoutuu" << std::endl;
}
