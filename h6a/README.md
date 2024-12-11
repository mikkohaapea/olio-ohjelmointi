# Harjoitus 6a (Qt-konsolisovellus)

Tehtävässä luodaan Qt-konsolisovellus ja se voitaisiin luoda valitsemalla tyypiksi Qt-console application. 
Tee se kuitenkin ohjeiden mukaan "plain C++" tyyppisenä.

1. Luo uusi sovellus, jonka tyyppi on Non-Qt/Plain C++
2. Muokkaa .pro-tiedostoa:
    - Lisää rivi *QT = core*
    - Poista rivi *CONFIG -= qt*
3. Lisää luokka *MyClass*
4. Muokkaa myclass.h muotoon:
    ```
    #ifndef MYCLASS_H
    #define MYCLASS_H

    #include <QObject>
    #include <iostream>
    #include <QDebug>
    using namespace std;

    class MyClass : public QObject {
        Q_OBJECT
    
    public:
        MyClass(QObject* parent = nullptr);

        void raiseMySignal();
    
    signals:
        void mySignal();
    
    public slots:
        void mySlot();
    };

    #endif // MYCLASS_H
    ```
5. Muokkaa myclass.cpp muotoon:
    ```
    #include "myclass.h"

    MyClass::MyClass(QObject *parent) : QObject(parent) {
        connect(this, SIGNAL(mySignal()), this, SLOT(mySlot()));
    }

    void MyClass::raiseMySignal()
    {
        emit mySignal();
    }

    void MyClass::mySlot()
    {
        qDebug()<<"mySlot:ia kutsuttiin";
    }
    ```
6. Luo main.cpp olio luokasta MyClass ja kutsu sen metodia **raiseMySignal**