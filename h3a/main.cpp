#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chefObject1("Gordon Ramsay");
    chefObject1.makeSalad();
    chefObject1.makeSoup();

    ItalianChef italianChefObject1("Anthony Bourdain");
    italianChefObject1.makeSalad();
    italianChefObject1.makeSoup();
    italianChefObject1.makePasta();
    cout << "name of the Italian Chef is " << italianChefObject1.getName() << endl;
    return 0;
}
