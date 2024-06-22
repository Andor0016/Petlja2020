# Feladat [HU]
Alexnek eszébe jutott, hogy a kerti garnitúra mögött, amelyet a barátaitól kapott van egy kártyacsomagja. Ez egy kicsit szokatlan kártyacsomag, amely N lapból áll, és amelyek A1, A2, ..., AN természetes számokkal vannak jelölve.

Elhatározta, hogy barátaival a következő játékot játssza:

- Alex húz a csomag tetejéről tetszőleges számú (de legalább egy) kártyát. Az általa elért P1 pontszám annyi, amennyi az elvett lapokon lévő pontszámok összege.
- Ha túllépte a K értéket, vagyis P1 > K, Alex veszít.
- Ellenkező esetben az ellenfél a csomag tetejéről tetszőleges számú lapot (akár egyet sem) húz, és P2 pontot kap, amennyi a lapokon levő számok összege.
- Ha az ellenfél túllépte a határt, vagyis P2>K, Alex győz.
- Ellenkező esetben az győz, akinek több pontja van, míg P1 = P2 esetén Alex a győztes.

Alex nem tervezi a csomag megkeverését, tehát a lapok sorrendje, melyeket kihúz ő és ellenfele a következő lesz: A1, A2 és így AN-ig. Kócát az érdekli, hogy létezek-e a kártyáknak az a száma, amennyit ha kihúz, biztosan nyer, függetlenül attól, hogy ellenfele hány lapot húzott.

Alex nagyon kíváncsi, ezért minden példában nem egy, hanem T különböző szituációra kell választ adni (minden szituáció egy új kártyacsomag) .

## Bemenet
A bemenet első sorában egy egész szám, a T áll: a szituációk száma, amelyekre el kell dönteni, Alex vajon győzni fog-e?

Az adott szituáció leírásának első sorában két egész szám N és K állnak: a lapok száma a csomagban, és a határ, amelyet a versenyzők nem léphetnek túl.

A adott szituáció leírásának második sorában N egész szám, A1, A2, ..., AN áll. Ezek a számok a kártyalapokon a csomagban az első laptól az utolsóig.

## Kimenet
Az összes T szituációra (az adott sorrendben) kiíratni egy sort, benne "da", ha  Alex húzhatbizonyos számú lapot ahhoz, hogy biztosan győzzön, ellenkező esetben a "ne" szó jelenjen meg az adott sorban.

## Korlátozások
- 1 ≤ T ≤ 20
- 1 ≤ N ≤ 100000
- 1 ≤ K ≤ 10^9
- 1 ≤ Ai ≤ 10^9
- A tesztpéldák 3 független csoportba oszthatók:
    - Tesztpéldák, melyek 30 pontot érnek: 1 ≤ N ≤ 1000.
    - Tesztpéldák, melyek 30 pontot érnek: minden szituációban, minden kártyán ugyanaz a szám áll.
    - Tesztpéldák, melyek 40 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 2

		5 10

		2 5 3 4 8

		2 1000

		100 200
- Kimenet
    - da

		da
- Magyarázat
    - Az első szituációban Alex elvesz két lapot, és 7 pontja lesz, ami kevesebb, mint 10. Ezután ellenfele húz. Ha ő három lapnál kevesebbet húz, annyi pontja lesz, mint Alexnek van, vagy kevesebb. Ha mindhárom lapot kihúzza, több lesz, mint az engedélyezett 10. Alex tehát mindenképpen győz.

	- A második szituációban Alex elveheti az összes lapot, így biztos több pontja lesz ellenfelénél.
### Példa 2
- Bemenet
    - 1

		5 30

		11 12 13 14 15
- Kimenet
    - ne
- Magyarázat
    - Alex legfeljebb két lapot húzhat, hogy túl ne lépje az engedélyezett 30 pontot. Ezután ellenfele két lapot húz és győz.
