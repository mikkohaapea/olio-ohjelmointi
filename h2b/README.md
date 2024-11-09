Tässä harjoituksessa tutustutaan C++ ohjelmoinnin käsitteeseen **vektori** ja kuinka sitä käyttäen luodaan ns. **oliolista**

# Harjoitus2b (oliolista)

Luo C++-ohjelma, jossa määritellään luokka nimeltä *Car*. Tällä luokalla tulisi olla seuraavat jäsenmuuttujat ja metodit:

- Jäsenmuuttujat:
  - *brand*: merkkijono, joka sisältää auton merkin
  - *model*: merkkijono, joka sisältää auton mallin
  - *yearModel*: kokonaisluku, joka sisältää auton valmistusvuoden

- Metodit:
  - *printData()*: tulostaa auton merkin, mallin ja valmistusvuoden
  - *Car(string, string, int)*: konstruktori, jolla voidaan alustaa kaikki jäsenmuuttujat

Pääohjelmassa:

- Luo vektori nimeltään carList (Luo lista pinoon. Et siis tarvitse smart pointteria)

- Luo kolme Car-luokan oliota (keksi itse merkit, mallit ja vuosimallit)

- Lisää oliot listaan

- Tulosta listan toisen alkion tiedot

- Tulosta kaikkien autojen tiedot käyttämällä for-silmukkaa