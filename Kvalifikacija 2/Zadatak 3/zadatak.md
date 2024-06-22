# Feladat [HU]
Miközben a városban sétáltatok, találkoztatok egy felirattal, amelyet az angol ABC N számú betűjéből alakítottak ki. Valamiért elgondolkodtatok azon, vajon hány féle módon lehet kitörölni a betűket 26 kivételével úgy, hogy a maradék betűk különbözőek legyenek, és sorba rendezve álljanak?

Tekintettel arra, hogy ez a szám nagyon nagy lehet, kiíratni csak a maradékot, amely ennek számnak a 10^9+7-tel való osztásakor keletkezik.

## Bemenet
Az első sorban a felirat betűinek száma az N szám áll.

A második sorban N nagybetű áll, amelyek(így sorban) a feliratot képezik.

## Kimenet
Kiíratni a 10^9+7-tel alkotott modulusát annak a számnak, amely megadja hányféle módon törölhetjük ki az összes betűt a feliratból 26 kivételével úgy, hogy a fennmaradt betűk sorban helyezkedjenek el (vagyis ABCDEFGHIJKLMNOPQRSTUVWXYZ maradjon)!

## Korlátozások
- 0 ≤ N ≤ 10^6
- A tesztpéldák 4 független csoportba oszthatók:
    - Tesztpéldák, melyek 10 pontot érnek: N ≤ 26.
    - Tesztpéldák, melyek 20 pontot érnek: N ≤ 27.
    - Tesztpéldák, melyek 30 pontot érnek: N ≤ 3000.
    - Tesztpéldák, melyek 40 pontot érnek: nincs külön korlátozás.

## Példák
### Példa 1
- Bemenet
    - 29

		AABACDEFGHIJKLMNOPQRSTUVWXYZZ
- Kimenet
    - 4
- Magyarázat
    - Lehetséges módok:
		- Kitörölni az első és harmadik A -t és az első Z -t. 
   		- Kitörölni az első és harmadik A -t és a második Z -t.
    	- Kitörölni a második és harmadik A -t és az első Z -t.
   		- Kitörölni a második és harmadik A -t és a második Z -t.
### Példa 2
- Bemenet
    - 78

		AAABBBCCCDDDEEEFFFGGGHHHIIIJJJKKKLLLMMMNNNOOOPPPQQQRRRSSSTTTUUUVVVWWWXXXYYYZZZ
- Kimenet
    - 865810542
