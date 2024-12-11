# Harjoitus 6b (Qt-konsolisovellus)

Rakenna tämän tehtävän sovellus luomalla sovellus, jonka tyyppinä on Qt-Console hyödyntäen Qt Creatorin ominaisuuksia.

1. Luo uusi sovellus ja valitse nyt tyypiksi Application (Qt) -> Qt Console Application
2. Tutki sovelluksen pro-tiedostoa ja main.cpp tiedostoa
3. Lisää sovellukseen luokka ExampleClass (Qt Creatorin "Add New->C++ Class"). Kun luot luokan, rastita:
    - Include QObject
    - Add Q_OBJECT

    Ja periytä ExampleClass luokasta QObject
4. Vertaa tiedoston exampleclass.h tiedostoa edellisen tehtävän h-tiedostoon
5. Periytä ExampleClass luokasta QObject
6. Lisää luokkaan: (h-tiedostoon)

    1. public metodi **void startToWait();**
    2. signals osioon signaali **void readyToSay();**
    3. public slots osio ja siihen metodi **void sayHelloSlot();**
    4. Lisää **#include \<QThread\>**
    5. Lisää myös **#include \<QCoreApplication\>**, jos se puuttuu

7. Kirjoita metodien toteutukset (cpp-tiedostoon)

    1. startToWait()-metodiin seuraava koodi:
        ```
        QThread::msleep(1000);
        emit readyToSay();
        ```
    2. sayHelloSlot() -metodiin seuraava koodi:
        ```
        qDebug()<<"Terve";
        ```

8. Kirjoita luokan muodostimeen rivit:
    ```
    qDebug()<<"Start";
    connect(...)
    qDebug()<<"End";
    ```
    Muokkaa edellä olevaa **connect**-riviä niin, että readyToSay-signaali yhdistetään slottiin sayHelloSlot.
9. Luo main.cpp:ssä luokan ExampleClass olio ja kutsu sen metodia startToWait
10. Testaa sovellusta