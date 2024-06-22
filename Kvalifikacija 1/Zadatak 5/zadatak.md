# Zadatak [RS]
Kao što svi znamo, vračare mogu da predvide neke nepredvidive događaje kao što je prolazak nekog takmičara na Srpsku informatičku olimpijadu (SIO). Za tu namenu koristi se SIO stablo.

SIO stablo je drvo u dvorištu vračare Miljane(niko nije siguran zašto se ova čudna biljka ne zove SIO drvo.) Ovo drvo se sastoji iz N mesta grananja, koje ćemo zvati čvorovima, i N-1 grana. Čvorovi su numerisani brojevima od 1 do N. Naravno, moguće je doći od svakog čvora do svih drugih čvorova krećeći se samo po granama. Na svakoj grani urezano je po jedno slovo is skupa {"S", "I", "O"}.

Par čvorava (U,V) je SIO par ako je na granama na najkraćem putu(putu koji ne prelazi preko iste grane više puta) između čvorova U i V svako od slovo "S", "I" i "O" urezano isti broj puta.

Vračara Miljana tvrdi da će na SIO proći osoba koja uspe da izračuna broj SIO parova čvorova (U,V) za koje važi 1 ≤ U ≤ V ≤ N. Napišite program koji izračunava ovaj broj kako biste proverili da li je vračara Mijana u pravu.

## Opis ulaza
U pravom redu ulaza nalazi se jedan ceo broj N. U radednih N-1 redova se opisi grana. U svakom redu po dva cela broja U i V, i po jedno slovo iz skupa {"S", "I", "O"}, razdvojeni razmacima.

## Opis izlaza
Na izlaz ispišite broj SIO parova čvorova (U,V) za koje važi 1 ≤ U < V ≤ N.

## Ograničenja
- 1 ≤ N ≤ 3*10^5
- Test primeri su podeljeni u 5 disjunktne grupe:
    - U test primerima vrednim 8 poena: slovo "S" je urezano na tačno jednoj grani.
    - U test primerima vrednim 12 poena: N ≤ 1000.
    - U test primerima vrednim 20 poena: 1 ≤ k < N postoji grana između k i k+1.
    - U test primerima vrednim 20 poena: 2 ≤ k ≤ N postoji grana između k i [k/2].
    - U test primerima vrednim 40 poena: nema dodatnih ograničenja.
## Primeri
### Primer 1
- Ulaz
    - 6

        4 1 S

        5 6 O

        1 5 I

        1 2 S

        3 1 S
- Izlaz
    - 3
- Objašnjenje
    - Parovi (2,6), (3,6), (4,6) su SIO parovi.

# Feladat [HU]
Mint tudjuk, a jósok előre látnak olyan kiszámíthatatlan eseményt, mint például egy versenyző továbbjutását a Szerbiai Informatikai Olimpiára (SzIO). Erre a célra SIO fát használnak.

A SIO fa Miljana jósnő udvarában található furcsa növény. Ezen a fán N elágazás (amelyeket csomópontnak nevezünk), és N-1 ág található. A csomópontok számozása 1-től N-ig megy. Természetesen bármely csomóponttól bármelyik csomópontig eljuthatunk az ágakon haladva. Minden ágon az {"S", "I", "O"} halmaz egy eleme van bevésve.

Az (U,V) csomópontpár akkor SIO pár, ha az ágakon, amelyeken keresztül a legrövidebb úton haladva az U és V között, vagyis egyik csomópontból a másikba (miközben ugyanazon az ágon nem haladhatunk át többször) az "S", "I" és "O" betűk ugyanannyiszor jelennek meg.

Miljana azt állítja, hogy az SzIO-ra az jut tovább, aki ki tudja számolni az (U,V) csomópontok által alkotott SIO párok számát, amelyekre érvényes, hogy 1 ≤ U < V ≤ N. Írjatok programot amely kiszámítja ezt a számot, hogy leellenőrizzétek, Miljana jósnőnek igaza volt-e!

## Bemenet
A bemenet első sorában egyetlen egész szám, N áll. A következő N-1 sorban az ágak leírása található. Minden sorban két egész szám, U és V, valamint egy betű az {"S", "I", "O"} halmazból egy-egy szóközzel elválasztva.

## Kimenet
A kimenetre kiíratni az (U,V) csomópontok által alkotott SIO párok számát, amelyekre érvényes, hogy 1 ≤ U < V ≤ N.

## Korlátozások
- 1 ≤ N ≤ 3*10^5
- A tesztpéldák 5 független csoportba oszthatók:
    - Tesztpéldák, melyek 8 pontot érnek: az "S" betű pontosan egy ágba van bevésve.
    - Tesztpéldák, melyek 12 pontot érnek: N ≤ 1000.
    - Tesztpéldák, melyek 20 pontot érnek: minden 1 ≤ k < N-re létezik ág k és k+1 között.
    - Tesztpéldák, melyek 20 pontot érnek: minden 2 ≤ k ≤ N-re létezik ág k és [k/2] között.
    - Tesztpéldák, melyek 40 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 6

        4 1 S

        5 6 O

        1 5 I

        1 2 S

        3 1 S
- Kimenet
    - 3
- Magyarázat
    - A (2,6), (3,6), (4,6) csomópontok SIO párok.
