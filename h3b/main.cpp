#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    Animal animalObject;
    Dog dogObject;
    animalObject.callOut();
    dogObject.callOut();
    return 0;
}
