#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal
{
public:
    Dog();
    virtual void callOut(void) override;
    ~Dog();
};

#endif // DOG_H
