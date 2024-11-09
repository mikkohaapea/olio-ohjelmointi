#include <iostream>

using namespace std;

#include "car.h"
#include "rectangle.h"
#include "student.h"
#include<memory>

int main() {
    //
    // Vaihe 1: Car-luokka
    //
    cout << "========== VAIHE 1 ==========" << endl;
    Car carObject;  //luodaan Car-olio pinomuistiin (stackiin)
    carObject.setBrand("Audi");     //Asetetaan Car-oliolle merkki
    carObject.setModel("A3");   //Asetetaan Car-oliolle malli
    carObject.setYearModel(2021);   //Asetetaan Car-oliolle valmistusvuosi
    carObject.printData();  //Tulostetaan Car-olion tiedot
    //
    // Vaihe 2: Rectangle-luokka
    //
    cout << endl << "========== VAIHE 2 ==========" << endl;
    Rectangle *rectangleObject = new Rectangle;     //Luodaan Rectangle-olio kekomuistiin (heapiin)
    rectangleObject->setHeight(14.3);   //Asetetaan Rectangle-oliolle korkeus
    rectangleObject->setWidth(8.1);     //Asetetaan Rectangle-oliolle leveys
    cout << "Suorakulmion pinta-ala = " << rectangleObject->getArea() << endl;  //Tulostetaan Rectangle-olion pinta-ala
    cout << "Suorakulmion ymparysmitta = " << rectangleObject->getCircum() << endl;     //Tulostetaan Rectangle-olion ymparysmitta
    //Tuhotaan Rectangle-olio
    delete rectangleObject;
    rectangleObject = nullptr;
    //
    // Vaihe 3: Student-luokka
    //
    cout << endl << "========== VAIHE 3 ==========" << endl;
    //Luodaan Student-olio smart-pointerilla
    unique_ptr<Student> studentObject = make_unique<Student>();
    studentObject->setStudentNumber(123);   //Asetetaan Student-oliolle opiskelijanumero
    studentObject->setName("Matti Mainio");     //Asetetaan Student-oliolle nimi
    studentObject->setAverage(3.68);    //Asetetaan Student-oliolle keskiarvo
    //Tulostetaan Student-olion tiedot getter-metodeilla
    cout << "Opiskelijan nimi: " << studentObject->getName() << endl;
    cout << "Opiskelijanumero: " << studentObject->getStudentNumber() << endl;
    cout << "Keskiarvo: " << studentObject->getAverage() << endl << endl;
    return 0;
}
