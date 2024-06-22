# Feladat [HU]
Ismert, hogy a programozástanárok nem szívesen válaszolnak az egyetemi hallgatók kérdéseire. Azt várják el tőlük, hogy maguk állítsanak fel értelmes feltételezéseket mindenről, ami a kapott feladatban nincs egyértelműen definiálva. Ezért úgy döntöttek, hogy csak azokon a napokan válaszolnak a feltett kérdésekre, amikor éppen ráérnek.

A tanárok elhatározták, hogy felszabadítják órarendjüket minden k-adik napon x naptól kezdve y napig. Ahhoz, hogy kiválasszák ezeket a számokat, az kell, hogy Q számú x, y, és k formájú lekérdezésre meghatározzák, hány kérdést kell megválaszolni az adott esetben. A túl sok elfoglaltság miatt a tanárok elfelejtették, hány nap van egy évben, ezért ezek a számok nagyon nagyok is lehetnek.

Ennek a feladatnak a megoldását rátok bízták, hogy több idejük legyen a hallgatók kérdéseire válaszolni.

## Bemenet
A bemenet első sorában az N szám áll. Ez a napok száma, amikor a hallgatók kérdéseket tehetnek fel. A bemenet második sorában N egész szám, az A1, A2, ..., AN sorozat áll. Ebben a sorozatban az adott napokon várható kérdések száma áll. A harmadik sorban a Q egész szám, a lekérdezések száma áll, amelyeket meg kell válaszolni. A soron következő Q sor mindegyikében három szám: xi, yi és ki állnak. Ezek a számok a lekérdezés intervallumának határait és lépésszámát tartalmazzák. Tudjuk, hogy ki mindig osztója az yi-xi értéknek.

## Kimenet
A szabványos kimeneten kiíratni Q egész számot! Minden lekérdezésre új sorban kiíratni a kérdések számát, amelyekre válaszolni fognak majd!

## Korlátozások
- 1 ≤ N ≤ 200000
- 1 ≤ Q ≤ 200000
- 1 ≤ Ai ≤ 5*10^10
- 1 ≤ ki ≤ N
- 1 ≤ xi ≤ yi ≤ N
- ki osztója az yi - xi
- Az tesztpéldák 4 független csoportba oszthatók:
    - Tesztpéldák, melyek 8 pontot érnek: Ai = i.
    - Tesztpéldák, melyek 12 pontot érnek: Ai = i^2.
    - Tesztpéldák, melyek 20 pontot érnek: N,Q ≤ 10000.
    - Tesztpéldák, melyek 60 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 6

        17 31 14 23 9 27

        5

        2 6 2

        2 5 3

        3 5 1

        3 3 5

        1 3 2
- Kimenet
    - 81

        40

        46

        14

        31
- Magyarázat
    - A2+A4+A6=81 A2+A5=40 A3+A4+A5=46 A3=14 A1+A3=31
### Példa 2
- Bemenet
    - 10

        1 2 3 4 5 6 7 8 9 10

        5

        2 8 3

        4 9 1

        1 9 2

        5 10 5

        1 9 8
- Kimenet
    - 15

        39

        25

        15

        10