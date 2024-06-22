# Feladat [HU]
Jovan elhatározta, hogy az udvarukban növekedő fenyőt feldíszíti újévre. Jovan fenyőjének N csomópontja, és N-1 ága van. Bármelyik csomópontról el lehet jutni bármelyik másik csomópontra egyedi módon az ágak valamilyen halmazát használva. Az N csomópont közül az 1-es számmal jelölt csomópont különleges csomópont: ezt a fa gyökerének nevezzük. Az u csomópont részfája az összes olyan v csomópont halmaza, amelyekre érvényes: az u csomópont azon csomópontok halmazának eleme, amelyek a v csomópont és a fa gyökere között helyezkednek el. Az u csomópont részfája tartalmazza az u csomópontot.

Az i csomóponton bi színű dísz van. A fa különbözőszínűségét a különböző komponensek számával definiáljuk, amelyek azonos színűek. Két csomópont akkor tartozik ugyanahhoz a komponenshez, ha egyiktől eljuthatunk úgy a másikig, hogy csak azonos színű csomópontokon haladjunk keresztül (beleszámítva az elsőt és az utolsót is).

Jovan még nem tudja, hogyan fogja feldíszíteni a fát. Ő a fán elvégez Q számú következő formájú változtatást:

u c - az u csomópont részfája összes csomópontjának díszeit Jovan kicseréli c színű díszekre.

Segítsetek Jovannak, hogy feldíszítse a fát, és írassátok ki a fa különbözőszínűségét minden
változtatás után.

## Bemenet
Az első sorban az N és Q számok állnak. A következő N-1 sor mindegyikében két szám: u és v állnak, amelyek a fa ágait definiálják. A következő sorban N szám áll, amelyek közül az -edik szám a bi- a dísz színe, amely az -edik csomóponton függ. Az utolsó Q sorban egyenként két szám:u  és c állnak, amelyek a fán végrehajtott változtatásokat definiálják.

## Kimenet
Minden Q változtatásra kiíratni a fa különbözőszínűségét a változtatás végrehajtása után.

## Korlátozások
- 1 ≤ N,Q ≤ 2*10^5
- 1 ≤ bi,u,c ≤ N
- A tesztpéldák 5 független csoportba oszthatók:
    - Tesztpéldák, melyek 5 pontot érnek: N,Q ≤ 10^3.
    - Tesztpéldák, melyek 15 pontot érnek: c=1, vagyis minden változtatás ugyanolyan színű.
    - Tesztpéldák, melyek 25 pontot érnek: létezik ág i és i-1 között minden -re, ahol 2 ≤ i ≤ N.
    - Tesztpéldák, melyek 20 pontot érnek: létezik ág i és [i/2] között minden i-re, ahol 2 ≤ i ≤ N.
    - Tesztpéldák, melyek 45 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
        
    - 6 4

        1 2

        1 3

        2 4

        2 5

        3 6

        1 2 1 1 3 3

        4 3

        4 2

        1 1

        2 2
- Kimenet
    - 5

        4

        1

        2
- Magyarázat
    - Az első változtatás után az azonos színű komponensek a következő csomópontokból állnak: {1,3},{2},{4},{5},{6}.
    - A második változtatás után az azonos színű komponensek a következő csomópontokból állnak: {1,3},{2,4},{5},{6}.
    - A harmadik változtatás után az azonos színű komponensek a következő csomópontokból állnak:{1,2,3,4,5,6}.
    - A negyedik változtatás után az azonos színű komponensek a következő csomópontokból állnak:{1,3,6},{2,4,5}.
