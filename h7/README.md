# Harjoitus 7 (Qt Widget-sovellus)

Tässä tehtävässä harjoitellaan QtWidget-sovelluksen luontia.

Qt Widget -sovellus on graafinen käyttöliittymäsovellus, joka on rakennettu Qt-käyttöliittymäkirjaston avulla. 
Se käyttää widgettejä eli käyttöliittymän osia, kuten painikkeita, tekstikenttiä, valikoita ja muita visuaalisia elementtejä, 
joilla käyttäjä voi olla vuorovaikutuksessa sovelluksen kanssa. Qt Widget -sovellukset ovat yleisiä työpöytäsovelluksissa, 
ja ne voivat toimia monilla eri käyttöjärjestelmillä, kuten Windowsissa, Linuxissa ja macOS.

## Tehtävänanto

1. Luo QtWidget sovellus
2. Suorita sovellus
3. Tutki main.cpp tiedoston rakennetta
4. Lisää sovelluksen käyttöliittymään:
    - Kaksi pushButtonia ja nimeä oliot: btnCount ja btnReset
    - Lisää lineEdit ja nimeä olio: txtResult ja laita arvoksi 0
    - Lisää label ja nimeä olio: labelInfo ja laita tekstiksi "Painiketta painettu 0 kertaa"
5. Esittele mainwindow.h tiedostossa privaatti int tyyppinen muuttuja nimeltään **counter** ja aseta sille alkuarvoksi nolla
6. Luo Count-painikkeen clicked signaalille SLOT, joka kasvattaa counter:ia ja tulostaa tekstin labeliin ja lineEdittiin. Huomaa, että int muuttuja on muutettava QStringiksi, jotta sen voi tulostaa labeliin ja lineEdittiin
    ```
    QString s = QString::number(counter);
    ```
7. Luo Reset-painikkeen clicked signaalille SLOT, joka nollaa counterin ja tulostaa tekstin labeliin ja lineEdittiin.
