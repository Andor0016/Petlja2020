# Feladat [HU]
Épp az imént fejeződött be az ismert tv műsor, a Noxcrew Gameshow harmadik köre. Kedvenc háromtagú csapatotok az Álmodozó Iparosok 2:1 arányban vesztésre, és kiesésre állnak. A következő játékot, a Sprint 4-et ezért meg kell hogy nyerjék.

A Sprint 4 olyan futóverseny, amely N-1 szakaszból áll, amelyekben két versenyző fut a számegyenesen, és sebességük legfeljebb 1. A futóverseny kezdetén a versenyzők pozíciója a0 és b0. Az i-edik versenyszakaszban a versenyzőknek a pillanatnyi pozíciójukból ai és bi pozícióba kell érniük. Akkor tekinthetjük, hogy megtették az -edik szakaszt, amikor ai és bi pozícióban helyezkednek el valamilyen sorrendben (nem fontos melyik versenyző melyik pozícióban van). Amikor az adott szakasz befejeződik, azonnal kezdődik a következő, és a versenyzők megindulnak a következő cél felé. A verseny akkor fejeződik be, amikor kész az N-1-edik szakasza a versenynek.

A verseny kimenetele bizonytalan, ezért az Iparosok a ti segítségeteket kérik. Feladatotok az, hogy meghatározzátok a legrövidebb időt ahhoz, hogy befejezzék a versenyt.

## Bemenet
A bemenet első sorában az N természetes szám, az a és b sorozatok hossza áll.

A következő sorokban az ai és bi természetes számok állnak, amelyek az -edik szakiasz célpozícióit képviselik.

## Kimenet
Kimeneten egyetlen szám jelenjen meg: a legrövidebb idő, amely alatt a versenyt befejezhetik.

## Korlátozások
- 1 ≤ N ≤ 10^5
- -10^9 ≤ ai,bi ≤ 10^9
- Az tesztpéldák 4 független csoportba oszthatók:
    - Tesztpéldák, melyek 20 pontot érnek: N≤ 20.
    - Tesztpéldák, melyek 20 pontot érnek: ai = bi érvényes minden i-re, ahol 0 ≤ i ≤ N-1.
    - Tesztpéldák, melyek 20 pontot érnek: N ≤ 1000.
    - Tesztpéldák, melyek 45 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 5

		1 5

		6 2

		3 7

		8 4

		5 8
- Kimenet
    - 4
- Magyarázat
    - A verseny első 3 szakaszában mindkét versenyző jobbra kell hogy lépjen egy hellyel. Az utolsó szakaszban az első versenyzőnek jobbra kell egy hellyel lépnie (4 -> 5), míg a második versenyző ahelyén marad a 8 számú pozíción.