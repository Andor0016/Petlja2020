# Feladat [HU]
Szerbia az egész világon arról ismert, hogy rendkívüli módon gondoskodik polgárairól, és arról, hogy mindannyiunknak korlátlan elhelyezkedési lehetőségeket biztosít. Persze, mint ahogy az lenni szokott, mindig vannak rosszindulatú, elégedetlen emberek. A feladatunkban nevezzük őket freelancereknek. Minden freelancer Szerbiában él, a pénzt viszont külföldön keresi meg. Az i-edik freelancer Ai dollárt keres évente. A freelancerek minden módon próbálkoznak azzal, hogy megkerüljék az adófizetést az állam irányába, vagyis hogy gyanús körülmények között megszerzett keresetük egy részét ne fizessék be az államkasszába.

Szerbia azonban még ebben a helyzetben is úgy határozott, engedékeny lesz polgárai irányában, úgyhogy százalék értékben rögzített adót vezet be minden freelancer számára. Persze a freelancerek nem lennének azok amik, ha nem bonyolítanák tovább a dolgot. Úgy döntöttek, hogy ha az adó túl magas, ők inkább nem dolgoznak (és a levegőből élnek), csakhogy az állam ne keressen rajtuk egy-két dollárt. Pontosan fogalmazva: ha az adó meghaladja a Pi százalékot, az i-edik freelancer abbahagyja a munkát.

Mi a becsületes, jóindulatú és elégedett polgárok azt szeretnénk tudni, hogy ha optimálisan állítja be az adót, mennyi az állam maximális évi keresete dollárban?

## Bemenet
- A szabványos bemenet első sorában egy N természetes szám, a Szerbiában élő freelancerek száma áll.
- A szabványos bemenet következő N sorának mindegyikében két szám áll, Ai és Pi, mégpedig az i-edik freelancer kezdő fizetése, és az a maximális adó százalékban megadva, amelyet az i-edik freelancer még hajlandó kifizetni.

## Kimenet
A szabványos kimenet egyetlen sorában kiíratni az állam freelancerek általi maximális keresetét!

## Korlátozások
- 1 ≤ N ≤ 2*10^5
- 1 ≤ Ai ≤ 10^6
- 0 ≤ Pi ≤ 100
- A P sorozat elemei nemnegatív valós számok, legfeljebb két tizedes hellyel.
- Az tesztpéldák 4 független csoportba oszthatók:
    - Tesztpéldák, melyek 20 pontot érnek: N ≤ 1000.
    - Tesztpéldák, melyek 20 pontot érnek: a P sorozat elemei egész számok.
    - Tesztpéldák, melyek 20 pontot érnek: az A sorozat minden eleme azonos.
    - Tesztpéldák, melyek 40 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 4

		100001 83.2

		40001 20
		
		90001 77.32

		300001 1.88
- Kimenet
    - 146909.5464
- Magyarázat
    - Az államnak az a legkedvezőbb, ha az adót 77.32%-ra állítja be. Ebben az esetben a második és negyedik freelancer abbahagyná a munkát, míg az első és harmadik fizetne 77.32%-ot a keresetéből. Így az állam bevétele (100001 + 90001)*77.32% = 146909.5464 dollár lenne évente.
## Megjegyzés
- Ahhoz, hogy az eredményt pontosnak ismerhessük el, az abszolút hiba kisebb kell hogy legyen 10^-2-nél.
- Az eredmény nagy értéke miatt használjatok 64-bites valósszám típusokat (pl. a C++ -ban ez a double típus).