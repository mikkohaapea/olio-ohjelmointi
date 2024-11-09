Tässä harjoituksessa opiskellaan olio-ohjelmoinnin perusteita, kuten luokan luominen, olioiden luominen ja käyttö. Materiaalissa tähän harjoitukseen liittyvät asiat:

- Olio-ohjelmointi

- Getter ja Setter

- private, public, protected

- Olio

- Smart pointer

- Muodostin

# Harjoitus2a (luokka, olio)

Tee kaikki tehtävässä mainitut luokat samaan projektiin. Noudata kussakin luokassa periaatetta

- jäsenmuuttujat ovat privaatteja

- metodit ovat publikkeja

## Vaihe 1: Car-luokka

Luo C++-ohjelma, jossa määritellään luokka nimeltä *Car*. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

- Jäsenmuuttujat: 
  - *brand*: merkkijono, joka sisältää auton merkin
  - *model*: merkkijono, joka sisältää auton mallin
  - *yearModel*: kokonaisluku, joka sisältää auton valmistusvuoden
 
- Metodit:
  - *printData()*: tulostaa auton merkin, mallin ja valmistusvuoden
  - *setBrand(string)*: asettaa auton merkin
  - *setModel(string)*: asettaa auton mallin
  - *setYearModel(int)*: asettaa auton valmistusvuoden

Pääohjelmassa:

- Luo *Car*-olio pinomuistiin ja aseta sille merkki, malli ja vuosi

- Tulosta auton tiedot käyttämällä *printData()*-metodia

## Vaihe 2: Rectangle-luokka

Tee C++-ohjelma, jossa määritellään luokka nimeltä *Rectangle*. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

- Jäsenmuuttujat:
  - *width*: reaaliluku(double), joka määrittää suorakulmion leveyden
  - *height*: reaaliluku(double), joka määrittää suorakulmion korkeuden

- Metodit:
  - *getArea()*: laskee ja palauttaa suorakulmion pinta-alan kaavalla *width \* height*
  - *getCircum()*: laskee ja palauttaa suorakulmion ympärysmitan kaavalla *2 \* (width + height)*
  - *setWidth(double)*: asettaa suorakulmion leveyden
  - *setHeight(double)*: asettaa suorakulmion korkeuden

Pääohjelmassa:

- Luo *Rectangle*-olio kekomuistiin ja aseta sen leveys ja korkeus

- Tulosta suorakulmion pinta-ala ja ympärysmitta

- Tuhoa olio

## Vaihe 3: Student-luokka

Luo C++-ohjelma, jossa määritellään luokka nimeltä *Student*. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

- Jäsenmuuttujat:
  - *name*: merkkijono, joka sisältää opiskelijan nimen
  - *studentNumber*: kokonaisluku, joka sisältää opiskelijanumeron
  - *average*: reaaliluku, joka sisältää opiskelijan keskiarvon

- Metodit:
  Setterit:
  - *setName(string)*: asettaa opiskelijan nimen
  - *setStudentNumber(int)*: asettaa opiskelijanumeron
  - *setAverage(double)*: asettaa opiskelijan keskiarvon
  Getterit:
  - *string getName()*: palauttaa opiskelijan nimen
  - *int getStudentNumber()*: palauttaa opiskelijanumeron(merkkimuotoinen tunniste)
  - *double getAverage()*: palauttaa opiskelijan keskiarvon

Pääohjelmassa:

- Luo *Student*-olio smart pointerilla ja aseta sille nimi, opiskelijanumero ja keskiarvo

- Tulosta opiskelijan tiedot käyttämällä get-metodeja