# Harjoitus5 - Tehtävänanto

Tässä harjoituksessa kerrataan mitä tarkoittavat termit **muistiosoite** ja **osoitin l. pointteri**. 
Lisäksi tutustutaan uuteen käsitteeseen **referenssi.**

C++-ohjelmoinnissa referenssi on viittaus olemassa olevaan muuttujaan. 
Se toimii aliaksena, eli referenssi ja alkuperäinen muuttuja viittaavat samaan muistipaikkaan.
Referenssi määritellään käyttämällä &-operaattoria. Referensseillä on seuraavat ominaisuudet:
- Ne on sidottava alustuksen yhteydessä, eikä niitä voi vaihtaa viittaamaan toiseen muuttujaan myöhemmin.
- Käyttämällä referenssiä voidaan välttää kopioimasta suuria tietorakenteita funktioiden parametreissa.
- Kaikki muutokset referenssin kautta vaikuttavat alkuperäiseen muuttujaan

**Esimerkki:**
```
int a = 10;
int &ref = a; // ref on viittaus muuttujaan a
ref = 20; // nyt myös a on 20
```

Referenssejä käytetään usein funktioiden parametreina ja palautusarvoina tehokkuuden parantamiseksi.

## Vaihe1

1. Luo uusi C++-sovellus
2. Luo mainissa:
    1. int muuttuja a ja anna arvoksi 5
    2. int muuttuja b ja anna arvoksi 10
3. Tulosta muuttujien a ja b arvot ja osoitteet, jolloin tuloksena tulisi olla jotain tällaista
    ```
    a:n arvo on: 5 ja osoite on: 0x5449fff84c
    b:n arvo on: 10 ja osoite on: 0x5449fff848
    ```

4. Lisää osoitinmuuttuja **myPointer** ja sijoita siihen muuttujan a osoite ja 
    1. Tulosta osoittimen osoittaman muistipaikan osoite
    2. Tulosta osoittimen osoittaman muistipaikan sisältö
5. Suorita sovellus, jolloin tuloksena pitäisi olla jotain tällaista:
    ```
    Pointterin osoittama osoite on: 0xb821dff67c
    Pointterin osoittaman muistipaikan arvo on: 5
    ```

6. Sijoita osoittimeen myPointer muuttujan b osoite ja
    1. Tulosta osoittimen osoittaman muistipaikan osoite
    2. Tulosta osoittimen osoittaman muistipaikan sisältö
7. Suorita sovellus, jolloin tuloksena pitäisi olla jotain tällaista:
    ```
    Pointterin osoittama osoite on: 0x522d5ff938
    Pointterin osoittaman muistipaikan arvo on: 10
    ```

8. Luo referenssi nimeltään refA ja laita se viittaamaan muuttujaan a ja
    1. Tulosta refA:n osoittama osoite
    2. Tulosta refA:n osoittaman muistipaikan sisältö
9. Suorita sovellus, jolloin tuloksena pitäisi olla jotain tällaista:
    ```
    refA osoittaa osoitteeseen 0xc8139ff8bc
    refA:n osoittaman muistipaikan arvo on: 5
    ```

10. Kokeile, voitko muuttaa refA:n osoittamaan b:n osoitteeseen

Tässä vaiheessa sovelluksen tulisi tulostaa seuraavaa:
```
a:n arvo on: 5 ja osoite on: 0x2ef53ffc9c
b:n arvo on: 10 ja osoite on: 0x2ef53ffc98

Pointterin osoittama osoite on: 0x2ef53ffc9c
Pointterin osoittaman muistipaikan arvo on: 5

Pointterin osoittama osoite on: 0x2ef53ffc98
Pointterin osoittaman muistipaikan arvo on: 10

refA osoittaa osoitteeseen 0x2ef53ffc9c
refA:n osoittaman muistipaikan arvo on: 5

Press <RETURN> to close this window...
```

Nyt sinun tulisi havaita mitä eroa on seuraavilla:
- myPointer <--> *myPointer
- refA <--> &refA

## Vaihe2 (Assosiation)

1. Lisää sovellukseen luokka **ClassB**, ja siihen
    1. private string muuttuja nimeltään info
    2. get ja set metodit muuttujalle info

2. Lisää sovellukseen luokka **AssosiationA**, jonka h-tiedostossa seuraava koodi:
    ```
    class AssosiationA
    {
    private:
        ClassB objectB;
    public:
        AssosiationA(ClassB);
        string getBinfo();
        void setBinfo(string);
    };
    ```
    Ja cpp-tiedostossa koodi:
    ```
    AssosiationA::AssosiationA(ClassB value):objectB(value)
    {

    }

    string AssosiationA::getBinfo()
    {
        return objectB.getInfo();
    }

    void AssosiationA::setBinfo(string value)
    {
        objectB.setInfo(value);
    }
    ```
3. Lisää main.cpp tiedostoon koodi:
    ```
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;
    ```
4. Suorita sovellus ja tutki tuloksia

Edellisen vaiheen tarkoitus on havainnollistaa, että alkuperäisen B-olion data ei muutu,
vaikka muokkaat A-olion dataa.

## Vaihe3 (Aggregation)

1. Lisää edelliseen tehtävään luokka **AggregationA**, jonka h-tiedostossa seuraava koodi:
    ```
    class AggregationA
    {
    private:
        ClassB &refB;
    public:
        AggregationA(ClassB&);
        string getBinfo();
        void setBinfo(string);
    };
    ```
    Ja cpp-tiedostossa koodi:
    ```
    AggregationA::AggregationA(ClassB &value):refB(value)
    {

    }

    string AggregationA::getBinfo()
    {
        return refB.getInfo();
    }

    void AggregationA::setBinfo(string value)
    {
        refB.setInfo(value);
    }
    ```
2. Lisää main.cpp tiedostoon rivit:
    ```
    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;
    ```
3. Suorita sovellus ja tutki tuloksia

Edellisen vaiheen tarkoitus on havainnollistaa, että myös alkuperäisen
B-olion data muuttuu, kun muokkaat A-olion dataa.

Nyt sovelluksen tulisi tulostaa seuraavanlaista:
```
a:n arvo on: 5 ja osoite on: 0xddeedff9cc
b:n arvo on: 10 ja osoite on: 0xddeedff9c8

Pointterin osoittama osoite on: 0xddeedff9cc
Pointterin osoittaman muistipaikan arvo on: 5

Pointterin osoittama osoite on: 0xddeedff9c8
Pointterin osoittaman muistipaikan arvo on: 10

refA osoittaa osoitteeseen 0xddeedff9cc
refA:n osoittaman muistipaikan arvo on: 5

***********************************
Assosiaatio esimerkki:
objB: Olion B asettama info
objAss: Olion objAss asettama info

Aggregaatio esimerkki:
objB: Olion Agr asettama info
objAggr: Olion Agr asettama info

Press <RETURN> to close this window...
```

Tehtävässä voidaan siis havaita, että kun oliolle A annetaan kopio oliosta B, niin A ei voi vaikuttaa
olion B dataan.  
Jos oliolle A annetaan referenssinä olion B osoite, niin A:n muokkaus muuttaa B:n dataa.