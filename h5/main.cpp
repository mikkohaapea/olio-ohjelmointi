#include "aggregationa.h"
#include "assosiationa.h"
#include <iostream>

using namespace std;

int main()
{
//VAIHE 1
    //luo (int) muuttujat a, b
    int a = 5;
    int b = 10;

    //tulosta muuttujien arvot ja muistiosoitteet
    cout << "a:n arvo on: " << a << " ja a:n osoite on: " << &a << endl;
    cout << "b:n arvo on: " << b << " ja b:n osoite on: " << &b << endl;

    //luo osoitinmuuttuja myPointer ja sijoita siihen a:n osoite
    int *myPointer = &a;

    //tulosta osoittimen osoittaman muistipaikan osoite
    cout << endl << "Osoittimen myPointer osoittama osoite: ";
    cout << myPointer << endl;

    //tulosta osoittimen osoittaman muistipaikan sisältö
    cout << "Osoittimen myPointer osoittaman muistipaikan arvo: ";
    cout << *myPointer << endl;

    //sijoita osoittimeen b:n osoite
    myPointer = &b;

    //tulosta osoittimen osoittama osoite ja osoitteen sisältö
    cout << endl << "Osoittimen myPointer osoittama osoite: ";
    cout << myPointer << endl;
    cout << "Osoittimen myPointer osoittaman muistipaikan arvo: ";
    cout << *myPointer << endl;

    //luo referenssi refA ja aseta se viittaamaan muuttujaan a
    int &refA = a;

    //tulosta referenssin osoittaman muistipaikan osoite
    cout << endl << "refA:n osoittama osoite: " << &refA << endl;

    //tulosta referenssin osoittaman muistipaikan sisältö
    cout << "refA:n osoittaman muistipaikan arvo: " << refA << endl << endl;

    /*
    &refA = b;  // <-- ei onnistu
    refA = b;   // <-- ei toimi halutulla tavalla
                // (osoittaa yhä a:n osoitteeseen)
    cout << &refA << endl;
    cout << refA << endl;
    */
    cout << "------------------------------------------------------" << endl;
    cout << endl;

//VAIHE 2
    ClassB objB;
    objB.setInfo("Olion B asettama info");
    // --> objB:n info -muuttujassa ym. string

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");
    // --> objAss:n objectB -muuttujan info-muuttujassa ym. string

    cout << "Assosiaatio esimerkki:" << endl;
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAss: " << objAss.getBinfo() << endl << endl;

//VAIHE 3
    cout << "Aggregaatio esimerkki:" << endl;
    ClassB &refB = objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    /* Jos edellisen rivin kommentoi pois, objB.getInfo()
     * ja objAggr.getBinfo() tulostavat vaiheessa 2 objB:lle
     * asetetut tiedot.
     * refB (jota kutsutaan objAggr konstruktorissa)
     * on vain referenssi olioon objB, eikä olio itsessään.
     *
     * objAggr.getBinfo() kutsuu ClassB:n getInfo() metodia
     * refB:hen, joka osoittaa objB:hen!
     */
    cout << "objB: " << objB.getInfo() << endl;
    cout << "objAggr: " << objAggr.getBinfo() << endl;
    cout << endl;

    /*
     * Jos oliolle A annetaan kopio oliosta B,
     * niin A:n datan muokkaaminen ei vaikuta B:n dataan.
     *
     * Jos oliolle A annetaan referenssi olion B osoitteesta,
     * niin A:n datan muokkaaminen muokkaa myös B:n dataa
     */
    return 0;
}
