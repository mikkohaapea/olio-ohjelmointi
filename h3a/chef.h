#ifndef CHEF_H
#define CHEF_H
#include <string>

class Chef
{
public:
    Chef(std::string);     //constructor
    ~Chef();    //destructor
    void makeSalad(void);
    void makeSoup(void);
protected:
    std::string name;
};

#endif // CHEF_H
