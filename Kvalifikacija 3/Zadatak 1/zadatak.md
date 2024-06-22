# Feladat [HU]
Jonas Newbauer a hétszeres világbajnok a soron következő Klasszikus Tetris világbajnokságra készül. Tudja, hogy ellenfelei is komolyan készülnek (közöttük a nagy riválisa a fiatal Joseph is, aki nemrég jelent meg a Tetris versenyeken). Jonas úgy gondolja, neki még T perc játékra van szüksége, hogy megszerezze nyolcadik titulusát, ezért a következő edzéstervet eszelte ki:

X percet Tetrist játszik, majd Y percet pihenteti szemeit, és kávét iszik. A pihenő után folytatja a Tetrist, és ezt a folyamatot ismételi mindaddig, amíg le nem játssza a betervezett T percet. Az edzést akkor hagyja abba, amikor befejezi a T-edik játékpercet.

Mennyi időre van szüksége percekben (beleszámítva a pihenőidőt is) ahhoz , hogy lejátssza a szükséges T időt?

## Bemenet
A bemenet egyetlen sorában három egész pozitív szám X, Y, és T áll.

## Kimenet
A kimenet egyetlen sorában az az idő áll, percekben, amely szükséges, hogy Jonas lejátsszon T percnyi Tetrist.

## Korlátozások
- 0 ≤ X,T ≤ 10^15 (Jonas oda van a Tetrisért, olvassátok el a megjegyzést) 
- 0 ≤ Y ≤ 1000 
- Az tesztpéldák 3 független csoportba oszthatók:
    - Tesztpéldák, melyek 20 pontot érnek: T ≤ 2*X, 1 ≤ X,T ≤ 10^9.
    - Tesztpéldák, melyek 30 pontot érnek: 1 ≤ X,T ≤ 1000.
    - Tesztpéldák, melyek 50 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 5 4 8
- Kimenet
    - 12
- Magyarázat
    - Jonas lejátszik 5 percnyi Tetrist, majd 4 percet pihen. Ezután 3 percet még játszik, és ezzel meglesz a 8 percnyi játék.
### Példa 2
- Bemenet
    - 3456 1 1800
- Kimenet
    - 1800
- Magyarázat
    - Jonas a pihenő előtt lejátssza mind az 1800 percnyi Tetrist.
### Példa 3
- Bemenet
    - 305 534 13413413003
- Kimenet
    - 36897880205

## Megjegyzés
A nagy számok miatt használjatok 64 bites egész számtípusokat (a C++ programnyelvben ez a long long típus).