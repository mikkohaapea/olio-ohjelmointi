#include "wheel.h"

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}

Wheel::Wheel() {}

Wheel::Wheel(int size, string type)
{
    this->size = size;
    this->type = type;
}