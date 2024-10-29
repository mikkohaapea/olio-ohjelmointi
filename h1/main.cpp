#include "funktiot.h"

int main()
{
    //Vaihe 1
    int a;
    cout << "Syota ensimmainen luku: a="; //ask user to enter a number
    cin >> a; //wait for user to input a number
    int b;
    cout << "Syota toinen luku: b=";
    cin >> b;
    //Vaihe 2
    cout << fixed << setprecision(2); //float-lukujen tulostus 2 desimaalin tarkkuudella
    cout << "calcSum: ";
    calcSum(a,b);
    cout << "calcDiv: ";
    calcDiv(a,b);
    //Vaihe 3
    //int summa = retSum(a, b);
    //float osamaara = retDiv(a, b);
    cout << "retSum: ";
    int summa = retSum(a, b);
    cout << summa << endl;
    cout << "retDiv: ";
    float osamaara = retDiv(a, b);
    cout << osamaara << endl;
    return 0;
}
