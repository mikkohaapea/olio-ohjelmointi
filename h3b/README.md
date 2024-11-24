Tässä tehtävässä harjoitellaan periytymistä ja metodien ylikirjoittamista C++-ohjelmoinnissa. Tavoitteena on ymmärtää, miten perivä luokka voi ylikirjoittaa kantaluokan metodin, ja nähdä polymorfismi käytännössä C++:ssa.

Noudata käytäntöä, että kullekin luokalle luodaan oma header-tiedosto ja oma cpp-tiedosto, joilla on sama nimi kuin luokalla. Tämä hoituu automaattisesti, kun luot luokat Qt-Creatorin toiminnolla "Add New -> C++ Class".

# Harjoitus3b (perintä/ylikirjoittaminen)

## Ylikirjoittaminen perivässä luokassa

1. Luotuasi projektin, lisää siihen kantaluokka nimeltä *Animal*, joka sisältää virtuaalisen metodin *callOut*. Tämä metodi tulostaa tekstin "Eläin ääntelee."

2. Luo kantaluokasta perivä luokka nimeltä *Dog*, joka ylikirjoittaa metodin *callOut*. Ylikirjoitetun metodin tulisi tulostaa teksti "Koira haukkuu!"

3. Kirjoita *main*-funktio, jossa luodaan *Animal*-luokan olio ja *Dog*-luokan olio

4. Kutsu molemmissa tapauksissa *callOut*-metodia ja varmista, että oikea viesti tulostuu

5. Varmista, että luomasi oliot tuhoutuvat.