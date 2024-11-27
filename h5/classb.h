#ifndef CLASSB_H
#define CLASSB_H

#include <string>
using namespace std;

class ClassB
{
private:
    string info;
public:
    ClassB();
    string getInfo() const;
    void setInfo(const string &newInfo);
};

#endif // CLASSB_H
