#include "italianchef.h"
#include <iostream>

ItalianChef::ItalianChef(std::string itChefName) : Chef(itChefName)
{
    this->name = itChefName;
    std::cout << "ItalianChef " << name << " konstruktori" << std::endl;
}

std::string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    std::cout << "Italian Chef " << name << " makes pasta" << std::endl;
}

ItalianChef::~ItalianChef()
{
    std::cout << "ItalianChef " << name << " destruktori" << std::endl;
}
