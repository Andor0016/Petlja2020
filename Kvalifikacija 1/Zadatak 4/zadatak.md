# Zadatak [RS]
Mika je odlučio da neodgovorno pristupi kvalifikacijama, i da se potrudi što manje Vračara Miljana je posle dugogodišnjeg putovanja po svetu na svojoj svetskoj turi odlučila da se vrati kući. Posle svih upoznatih obožavalaca, ljudih predskazanja i nezaboravnih vragolija, shvatila je da joj je trenutno samo potrebna toplina sopstvenog doma i porodice. Tako je, posle oproštajnog predskazanja u Vuhanu, gde je predvidela neki virušičić, spakovala kofere i uputila se ka domovini svih vračara - Vračaru.

Kod kuće su je svi dočekali sa radošću, slavljem i raznim poklonima. Kako to obično biva, od jednog starog druga iz školske klupe je dobila omiljen poklon svih protagonista informatičkih zadataka - jedan broj. Kada je videla ovo odmah se setila da je negde na svojoj turi naučila o čvrstim brojevima. Broj je čvrst ukoliko važi sledeći uslov: ako su cifre na i-toj i j-toj poziciji, pri čemu j>i, jednake c, tada je cifra na k-toj poziciji takođde jedanka c, za svako i ≤ k ≤ j. Tako su na primer brojevi 233441 i 334 čvrsti, dok 121 nije.

Da bi pokazala šta je naučila, odlučila ja de promeni neke cifre poklonjenom broju tako da postani čvrst. Specijalno, ona može promeniti broj tako da ima vodeće nule, ali te cifre se još uvek računaju u uslov da je broj čvrst. To znači da ako je na poklon dobila broj 1210, nije validno rešenje da prebaci prvu cifru u 0 i dobije 0210. Pomozite Miljani da nađde najmani broj cifara koje je neophodno promeniti da bi broj bio čvrst.

## Opis ulaza
Prva i jednia linija sadrži prirodan broj N, koji predstavlja broj koji je Miljana dobila. Garantuje se da N nema vođenih nula.

## Opis izlaza
U jednu liniju izlaza ispišite najmanji broj cifara koje je potrebno promeniti da bi dobijeni broj postao čvrst.

## Ograničenja
- 1 ≤ N ≤ 10^100 000
- Test primeri su podeljeni u 5 disjunktnih grupa:
    - U test primerima vrednim 10 poena: N ≤ 10^6.
    - U test primerima vrednim 10 poena: sve cifre početkog broja su 0 ili 1.
    - U test primerima vrednim 30 poena: N ≤ 10^100.
    - U test primerima vrednim 30 poena: N ≤ 10^10 000.
    - U test primerima vrednim 20 poena: bez dodatnih ograničenja.
## Primeri
### Primer 1
- Ulaz
    - 202201
- Izlaz
    - 1
- Objašnjenje
    - Moguće je promeniti drugu u 2, nakon čega broj postaje 2222‚1, koji je čvrst.
### Primer 2
- Ulaz
    - 10001
- Izlaz
    - 1
- Objašnjenje
    - Moguće je promeniti prvu cifru u 0 tako da broj postani 00001, koji je čvrst. Primetimo da ovde nakon zamene i dalje računamo vodeće nule.

# Feladat [HU]
Miljana, a jósnő hosszú éveken át tartó világkörüli utazása után elhatározta, hogy hazatér. A sok-sok rajongó után, akik körülzsongták, a sok-sok őrült jóslat, felejthetetlen varázslat után úgy érezte, neki már semmi más nem hiányzik csak a családja és az otthon melege. Így aztán egy utolsó búcsújóslat után, amikor is Vuhanban valamiféle vírus megjelenését jósolta meg, becsomagolta bőröndjét, és hazatért szülővárosába Vračarra.

Otthon nagy örömmel, ajándékokkal és igazi ünnepléssel fogadták. Ahogy az szokott is lenni egy valamikori padtársától minden informatikai feladat főszereplőjét, egy számot kapott. Amikor meglátta ezt a számot, azonnal eszébe jutott, hogy turnéja alatt hallott a szilárd számokról. A szám akkor szilárd, ha érvényes a következő feltétel: ha a számjegyek az i-edik és j-edik helyen(miközben j>i ) egyenlőek c-vel, akkor a számjegy a k-adik helyen ugyancsak c kell hogy legyen minden i ≤ k ≤ j értékre. Így például a 233442 és a 335 szilárd, míg a 121 nem.

Hogy bemutassa tudását, elhatározta, hogy megváltoztat bizonyos számjegyeket az ajándékba kapott számban úgy, hogy az szilárd számmá váljon. Elvégezhet akár olyan számjegycserét is, hogy a szám vezető 0-kat kapjon, ám ezek a számjegyek továbbra is szerepelnek a feltételben, hogy a szám szilárd legyen. Például, ha ajándékba az 1210 számot kapta, nem helyes megoldás, ha az első számjegyet 0-ra cseréljük és 0210-et kapunk. Segítsetek Miljanának, hogy megtalálja a számjegyek legkisebb számát, amelyeket meg kell változtatni ahhoz, hogy a szám szilárd számmá váljon!

## Bemenet
A bemenet első és egyetlen sorában az N természetes szám áll, amely azt a számot képvisel, amelyet Miljana kapott. Biztosak vagyunk abban, hogy az N szám nem tartalmaz vezető 0-ákat.

## Kimenet
A kiment egyetlen sorában kiíratni a számjegyek legkisebb számát, amelyet meg kell változtatni ahhoz, hogy a szám szilárd számmá váljon.

## Korlátozások
- 1 ≤ N ≤ 10^100 000
- Az tesztpéldák 5 független csoportba oszthatók:
    - Tesztpéldák, melyek 10 pontot érnek: N ≤ 10^6.
    - Tesztpéldák, melyek 10 pontot érnek: a kezdőszám minden számjegye 0 vagy 1.
    - Tesztpéldák, melyek 30 pontot érnek: N ≤ 10^100.
    - Tesztpéldák, melyek 30 pontot érnek: N ≤ 10^10 000.
    - Tesztpéldák, melyek 20 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 202201
- Kimenet
    - 1
- Magyarázat
    - A második számjegyet 2-re cserélni, így a szám 222201 lesz, amely szilárd.
### Példa 2
- Bemenet
    - 10001
- Kimenet
    - 1
- Magyarázat
    - Lehetőség van arra, hogy az első számjegyet 0-ra cseréljük, így a szám 00001 lesz, amely szilárd. Fontos, hogy a csere után a vezető 0-kat továbbra is figyelembe vesszük.