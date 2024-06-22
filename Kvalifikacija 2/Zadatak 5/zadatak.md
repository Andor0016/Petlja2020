# Feladat [HU]
N pénzérmét sorba raktunk. Minden pénzérme egyik oldalán 0 a másik oldalán 1 áll. A pénzérméknek csak egyik oldala látható. Az S string a pénzérmék látható oldalát ábrázolja, a sorozat első érméjétől az utolsóig leolvasva. Ezen a sorozaton el kell végezni Q változtatást. Az i-edig változtatást két számmal, az Li és Ri számokkal írjuk le. E két szám azt jelenti, hogy az összes pénzérmét megfordítjuk az Li-től Ri-ig terjedő részsorozatban.

Például, ha S = 0101101, L1 = 2 és R1 = 6 , az első változtatás után S = 0010011.

Minden változtatás után kiíratni a legkisebb árat ahhoz, hogy az összes pénzérmét úgy fordítsuk meg, hogy azok látható oldalán 0 legyen. Ehhez a következő két operációt alkalmazhatjuk akárhányszor, tetszőleges sorrendben:
- Fordíts meg egy pénzérmét, az ár 1.
- Fordítsd meg az összes pénzérmét egy egymást követő pénzérmék részsorozatában, az ár C.

Ügyeljetek arra, a sorozaton csak Q számú adott változtatást hajtunk végre. Azokat az operációkat, amellyel minden pénzérmét úgy fordítanánk meg, hogy 0 legyen a látható oldalukon, nem végezzük el a pénzérme sorozaton, csak azok teljes árát kell megtalálni.

## Bemenet
A bemenet első sorában 3 egész szám N, C és Q áll. A következő sorban az S string áll. A következő Q sor mindegyikében 2 egész szám Li és Ri áll.

## Kimenet
A kimenetre kiíratni Q sort. Az i-edik sorban a keresett legkisebb ár legyen az i-edik változtatás után.

## Korlátozások
- 1 ≤ C ≤ N ≤ 2*10^5
- 1 ≤ Q ≤ 2*10^5
- 1 ≤ Li ≤ Ri ≤ N
- |S| = N
- Az S string csak 0 és 1 számjegyeket tartalmaz.
- A tesztpéldák 9 független csoportba oszthatók:
    - Tesztpéldák, melyek 2 pontot érnek: N, Q ≤ 4000, C = N.
    - Tesztpéldák, melyek 2 pontot érnek: Li = Ri, ahol minden i, C = N.
    - Tesztpéldák, melyek 12 pontot érnek: C = N.
    - Tesztpéldák, melyek 4 pontot érnek: N, Q ≤ 4000, C = 1.
    - Tesztpéldák, melyek 6 pontot érnek: C = 1.
    - Tesztpéldák, melyek 8 pontot érnek: N ≤ 1000, Q = 1.
    - Tesztpéldák, melyek 18 pontot érnek: Q = 1.
    - Tesztpéldák, melyek 20 pontot érnek: Li = Ri, minden i-re.
    - Tesztpéldák, melyek 28 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 7 2 3

		0111011

		1 2

		1 2
		
		2 6
- Kimenet
    - 4

        3

        2
- Magyarázat
    - Az első változtatás után S = 1011011, ezután a legkedvezőbb megoldás megfordítani a teljes sorozat minden pénzérméjét, ennek ára 2, majd megfordítani a második és ötödik pénzérmét. Az ár így összesen 2+1*2=4.
    - A második változtatás után S = 0111011, ezután megfordítani a pénzérméket a másodiktól az utolsóig, az ár 2, majd megfordítani az ötödik pénzérmét. Az ár így összesen 2+1=3.
    - A harmadik változtatás után S = 0000101, ezután meg kell fordítani az ötödik és hetedik pénzérmét. Az ár így összesen 1+1=2.

### Példa 2
- Bemenet
    - 16 3 5

        0111001111011001

        16 16

        1 1

        3 3

        5 5

        7 7
- Kimenet
    - 6

        6

        7

        6

        7

