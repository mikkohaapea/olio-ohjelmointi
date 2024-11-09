#include "rectangle.h"

Rectangle::Rectangle() {}

double Rectangle::getArea(void)
{
    return width * height;
}

double Rectangle::getCircum(void)
{
    return (width + height) * 2;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}
