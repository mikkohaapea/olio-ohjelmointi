#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(std::string);   //constructor
    std::string getName(void);
    void makePasta(void);
    ~ItalianChef();     //destructor
};

#endif // ITALIANCHEF_H
