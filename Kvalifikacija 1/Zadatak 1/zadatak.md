# Zadatak [RS]
Mika je odlučio da neodgovorno pristupi kvalifikacijama, i da se potrudi što manje moguće oko prvog kruga, a da se ipak kvalifikuje za okružno takmičenje. Otišao je kod vračare i gledanjem u pasulj saznao koliko će bodova imati u drugom i trećem kvalifikacija. Pošto pokušava da izbegne što više posla, Mika je odlučio da vas pita koliki je minimalan broj bodova koje mora da osvoji u prvom krugu da bi se kvalifikovao?

Podsećamo da se na okružno takmičenje kvalifikuju svi takmičari koji na dva najbolja kruga kvalifikacija imaju ukupno barem 256 bodova.

## Opis ulaza
U prvom redu se nalaze dve cela broja X i Y: brojevi bodova koje će Mika osvojiti u drugom i trećem krugu kvalifikacija

## Opis izlaza
Ispisati najmanji broj bodova koji Mika mora da osvoji u prvom krugu, tako da se kvalifikuje na okružno takmičenje.

## Ograničenja
- 0 ≤ X,Y ≤ 500 
- Test primeri su podeljeni u tri disjunktne grupe:
    - U test primerima vrednim 20 poena: X+Y < 256.
    - U test primerima vrednim 30 poena: Y = 0.
    - U test primerima vrednim 50 poena nema dodatnih ograničenja.
## Primeri
### Primer 1
- Ulaz
    - 100 150
- Izlaz
    - 106
- Objašnjenje
    - Ako Mika osvoji 106 bodova u prvom krugu, najbolja dva kruga će biti prvi i treći, i u zbiru će na njima imati tačno potrebnih 256 bodova.
### Primer 2
- Ulaz
    - 300 0
- Izlaz
    - 0
- Objašnjenje
    - Miki nisu potrebnih dodatnih bodovi, jer će ih osvojiti dovoljno u drugom krugu.

# Feladat [HU]
Mika úgy döntött, hogy az eddiginél kissé komolytalanabbul viszonyul a versenyselejtezőkhöz. Az első forduló feladatainak megoldásába csak éppen annyi igyekezetet fektet, amennyi szükséges ahhoz, hogy továbbjusson a körzeti versenyre. Elment egy jósnőhöz is, akitől megtudta hány pontja lesz a második és harmadik fordulóban. Mika szeretne elkerülni minden felesleges munkát, ezért tőletek szeretné megtudni, a minimális pontszámot, amelyet el kell hogy érjen az első fordulóban ahhoz, hogy továbbjusson.

Mint tudjuk a körzeti versenyre azok a versenyzők jutnak el, akik a két legsikeresebb fordulójukat összegezve legalább 256 pontot gyűjtenek.

## Bemenet
Az első sorban két egész szám, X és Y található. Ezek a Mika által a második és harmadik fordulóban elért pontszámok.

## Kimenet
Kiíratni azt a minimális pontszámot, amelyet Mikának el kell érnie az első fordulóban ahhoz, hogy továbbjusson a körzeti versenyre!

## Korlátozások
- 0 ≤ X,Y ≤ 500 
- Az tesztpéldák 3 független csoportba oszthatók:
    - Tesztpéldák, melyek 20 pontot érnek: X+Y < 256.
    - Tesztpéldák, melyek 30 pontot érnek: Y = 0.
    - Tesztpéldák, melyek 50 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 100 150
- Kimenet
    - 106
- Magyarázat
    - Ha Mika 106 pontot ér el az első fordulóban, neki az első és harmadik fordulója lesz a legsikeresebb. Ezek összege épp a szükséges 256 pont lesz.
### Példa 2
- Bemenet
    - 300 0
- Kimenet
    - 0
- Magyarázat
    - Mikának nincs szüksége több pontra, mert a második körben elegendő pontot szerzett a továbbjutáshoz..