#include<vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;
    //Luodaan Car-oliot
    Car carObject1("Fiat", "Punto", 2003);
    Car carObject2("Toyota", "Yaris", 2007);
    Car carObject3("Lamborghini", "Huracan", 2019);
    //Lisätään luodut oliot carList-vektoriin
    carList.push_back(carObject1);
    carList.push_back(carObject2);
    carList.push_back(carObject3);
    carList[1].printData();     //Tulostetaan toisen auton tiedot
    //Tulostetaan kaikkien autojen tiedot
    for(int i=0;i<3;i++) {
        carList[i].printData();
    }
    return 0;
}
