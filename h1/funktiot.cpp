#include "funktiot.h"

void calcSum(int num1, int num2) {
    cout << num1 + num2 << endl;
}

void calcDiv(int num1, int num2) {
    if(num2 == 0) {
        cout << "Nollalla ei voi jakaa!" << endl;
    }
    else {
        cout << float(num1) / float(num2) << endl;
    }
}

int retSum(int num1, int num2) {
    return num1+num2;
}

float retDiv(int num1, int num2) {
    if(num2 == 0) {
        cout << "Nollalla ei voi jakaa!" << endl;
        return 0;
    } else {
        return float(num1) / float(num2);
    }
}
