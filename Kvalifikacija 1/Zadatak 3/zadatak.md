# Zadatak [RS]
Vračara Miljana poznata je po svojim predskazanjima o takmičenjima iz programiranja. Njena stručna oblast je pogađenje da li će Tajna Komisija prihvatiti neku takmičarsku žalbu.

Miljana ima svoju ludu teoriju da postoji prirodan broj X koji ne zna, takav da Komisija prihvata žalbe svakih X godina, tj. ako je Komisija prihvatila žalbu u godini A prva sledeća godina kada će prihvatiti žalbu je A+X, a takođe znači da je Komisija prihvatila žalbu u godini A-X.

Tačno T takmičara je došlo da se posavetuje sa Miljanom. On je od svakog pojedinačno tražila da prikupi informacije o ranijim žalbama kako bi joj pomogli da nađe X. Svaki takmičar je izneo neke glasne koje je čuo na Algori. Za N različitih godina A1, A2, ..., AN takmičar tvrdi da je Tajna Komisija prihvatala žalbe. Za M različitih godina B1, B2, ...BM takmičar tvrdi da Tajna Komisija nije prihvatila žalbe.

Kako ne bi gubila vreme, Vračara Miljana je pitala vas, takmičara koji se neće žaliti, da za svakog od T takmičara odredite da li postoji X tako da su sve glasine koje je čuo tačne, odnosno da su žalbe prihvaćene u godinama A1, A2, ..., AN, a nisu u godinama B1, B2, ..., BM, prateći Miljaninu teoriju da se žalbe prihvataju svakih X godina.

## Opis ulaza
U prvoj liniji ulaza nalazi se broj T-broj takmičara koji su se javili Vračari Miljani.

Za svakog takmičara unose se po još tri linije: u prvoj liniji se nalaze N i M-broj glasina u kojima su žalbe prihvaćene i broj glasina u kojima su žalbe odbijene, u drugoj liniji nalazi se N celih brojeca, niz A1,A2, ..., AN-godine u kojima su, po glasinama, prihvaćene žalbe, u trećoj liniji nalazi se M celih brojeva, niz B1, B2, ..., BM-godine u kojima su, po glasinama, odbijene žalbe.

## Opis izlaza
Na standardni izlaz ispišite T brojeva, za svakog takmičara, u novom redu, ispisati 1 ako postoji X koje je u skladu sa njegovim glasinama, odnosno ispisati 0 u suprotnom.

## Ograničenja
- 0 ≤ T ≤ 5
- Za svakog od T takmičara važi:
    - 2 ≤ N,M ≤ 75000
    - 1 ≤ Ai,Bi ≤ 10^18
    - Ai != Aj, za i != j
    - Bi != Bj, za i != j
    - Ai != Bj, za svako i,j
- Test primeri su podeljeni u 4 disjunktne grupe:
    - U test primerima vrednim 10 poena: Ai,Bi,N,M ≤ 3000.
    - U test primerima vrednim 10 poena: N = 2.
    - U test primerima vrednim 30 poena: Ai, Bi ≤ 10^6.
    - U test primerima vrednim 50 poena: bez dodatnih ograničenja.
## Primeri
### Primer 1
- Ulaz
    - 4

		4 3

		1 7 4 13

		3 11 9

		3 2

		9 5 3

		7 11

		2 3

		3 15

		1 7 2

		2 2

		5643634654354 12346544323565

		22341124534 7655867344
- Izlaz
    - 1

		0

		1

		1
- Objašnjenje
    - Za prvog takmičara moguće je uzeti X = 3 tako da zadovolji sve glasne. Za drugog takmičara nemoguće je naći X. Za trećeg takmičara moguće je uzeti X = 12.

# Feladat [HU]
Miljana jósnő ismert a programozás versenyekkel kapcsolatos jóslatairól. Szakterülete az, hogy eltalálja vajon a Titkos Bizottság elfogad-e egy adott versenyzői panaszt.

Miljanának van egy őrült elmélete: létezik egy (számára ismeretlen) X természetes szám, amelyre érvényes, hogy a Bizottság elfogadja a panaszokat minden X évben. Ez azt jelenti, hogy ha a Bizottság elfogadta a panaszt A évben, akkor az első következő év, amikor elfogadja a panaszt az A+X év lesz.

Pontosan T versenyző jött el Miljanához, hogy tanácsot kérjen tőle. Ő egyenként mindegyiket megkérte, hogy gyűjtsön információkat a korábbi panaszokról, hogy megtalálja az X értékét. Minden versenyző átadott neki egy sor információt azokból a híresztelésekből, amelyeket az Algorán hallottak. N különböző évre, A1, A2, ..., AN évekre az adott versenyző azt állította, hogy a Titkos Bizottság elfogadta a panaszokat. M különböző évre, B1, B2, ..., BM évekre pedig az adott versenyző azt állította, hogy a Titkos Bizottság nem fogadta el a panaszokat.

Hogy ne vesztegesse az időt, Miljana jósnő titeket kérdez (akik nem fognak panaszt benyújtani), hogy eldöntsétek minden T versenyzőre található-e X úgy, hogy a híresztelések, amelyeket hallottak igazak, vagyis, hogy a panaszokat A1, A2, ..., AN években elfogadták, és B1, B2, ..., BM években nem fogadták el, követve természetesen Miljana elméletét, hogy a panaszokat minden X évben fogadják el.

## Bemenet
A bemenet első sorában a T szám, vagyis azoknak a versenyzőknek a száma áll, akik jelentkeztek Miljanának.

Minden egyes versenyző esetében még három sort viszünk be. Az első sorban N és M számok állnak. Ezek a számok az adott versenyző által közölt híresztelések számát jelölik, amelyekben a panaszok elfogadásra, illetve elutasításra találtak. A második sorban N egész szám az A1, A2, ..., AN évek állnak, amelyekben a híresztelések szerint a panaszokat elfogadták, míg a harmadik sorban M egész számá a B1, B2, ..., BM évek állnak, amelyekben a híresztelések szerint a panaszokat elutasították.

## Kimenet
A szabványos kimeneten kiíratni T számot, minden egyes versenyzőre új sorban, mégpedig 1-et, ha létezik X összhangban az ő híreszteléseivel, vagy 0 - át ellenkező esetben.

## Korlátozások
- 0 ≤ T ≤ 5
- Minden (T) versenyzőre érvényes:
    - 2 ≤ N,M ≤ 75000
    - 1 ≤ Ai,Bi ≤ 10^18
    - Ai != Aj, ha i != j
    - Bi != Bj, ha i != j
    - Ai != Bj, minden i,j értékre
- A tesztpéldák 4 független csoportba oszthatók:
    - Tesztpéldák, melyek 10 pontot érnek: Ai,Bi,N,M ≤ 3000.
    - Tesztpéldák, melyek 10 pontot érnek: N = 2.
    - Tesztpéldák, melyek 30 pontot érnek: Ai, Bi ≤ 10^6.
    - Tesztpéldák, melyek 50 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 4

		4 3

		1 7 4 13

		3 11 9

		3 2

		9 5 3

		7 11

		2 3

		3 15

		1 7 2

		2 2

		5643634654354 12346544323565

		22341124534 7655867344
- Kimenet
    - 11

		0

		1

		1
- Magyarázat
    - Az első versenyző esetében az X=3 értékre a híresztelések igazak lesznek. A második versenyzőre esetében nem létezik X. A harmadik versenyző esetében X=12.
