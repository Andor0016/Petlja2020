# Zadatak [RS]
Mika je uspešno sakupio 256 poena na kvalifikacijama i tako se kvalifikovao za Okružno takmičenje. Kao i svakom drugom programeru, miki je ovo jedna od retkih prilika da stekne nove prijatelje. Zato je odlučio da svrati do vračare Miljane koja će ga uputiti u to tako se stvaraju prijateljstva na Okružnom takmičenju.

Na Okružno takmičenje je pozvano N učenika, numerisanih brojevima 1,2,...,N. Kako nisu svi učenici podjednako druželjubivi, za svakog učenika moguće je definisati koliko voli druženje. Tako ćemo pretpostaviti da učenik i ima određenu druželjubivost Ai. Među takmičarima postoji M parova poznanika, pri čemu svaka dva učenika koja se poznaju mogu biti prijatelji ili neprijatelji. Sreću takmičara i možemo definisati kao proizvod njevgove druželjubivost 2, ima tri prijatelja i jednog neprijatelja, njegova sreća iznosi 2*(3-1) / 4. Pri tome, neki takmičari mogu imati negativni druželjubivost, u kom slučaju su srećniji kada imaju više neprijatelja, a manje prijatelja. Ukupno sreću celog takmičenja definišsemo kao zbir sreća svih takmičara.

Vračara je Malom Miki otkrila koji su parovi učenika poznanici, ali mu nije rekla da li su ti parovi prijatelji ili neprijatelji. Sada Miki interesuje koja je najveća moguća ukupna sreća celog takmičenja? Kako je Mika veoma zauzet pripremama za Okružno takmičenje, zamolio vas je da mu pomognete.

## Opis ulaza
U prvoj liniji ulaza nalaze se brojevi N i M. Zatim sledi N linija, tako da se u (i+1)-oj liniji nalazi druželjubivost i-tog takmičara, Ai. Zatim sledi još M linija koje opisuju poznanstva među takmičara, tako da se u (N+1+i)-om redu nalazi par poznanika Xi, Yi.

## Opis izlaza
U prvu i jednu liniju izlaza treba ispisati najveći moguću sreću čitavog takmičenja.

## Ograničenja
- 1 ≤ N ≤ 100 000 
- 1 ≤ M ≤ 100 000
- Ai ∈ [-10^9, 10^9]
- 1 ≤ Xi, Yi ≤ N
- Xi != Yi, ahol i ∈ [1,M]
- {Xi,Yi} != {Xj,Yj}, ahol i,j ∈ [1,M], i!=j
- Test primeri su podeljeni u 3 disjunktne grupe:
    - U test primerima vrednim 20 poena važi: N,M ≤ 10.
    - U test primerima vrednim 20 poena važi: Ai = 1 za sve i ∈ [1,N].
    - U test primerima vrednim 60 poena važi: nema dodatnih ograničenja.
## Primeri
### Primer 1
- Ulaz
    - 3 2

		1

		1

		1

		1 2
		
		2 3
- Izlaz
    - 4
- Objašnjenje
    - Svi takmičari su podjednako druželjubivi, pa se maksimalna sreća postiže kada su svi takmičari prijatelji. Tada je sreća takmičara 1 jednaka 1, sreća takmičara 2 je 2 i sreća takmičara 3 je 1. Dakle, najveća moguća ukupna sreća takmičenja je 4.
### Primer 2
- Ulaz
    - 3 2

	    2

	    -5

	    5

	    1 2

	    2 3
- Izlaz
    - 3
- Objašnjenje
    - Maksimalna sreća postiže se kada su svi poznanici neprijatelji. Tada sreća iznosi: 2*(0-1)+(-5)*(0-2)+5*(0-1)=3.

# Feladat [HU]
Mika sikeresen összegyűjtötte a szükséges 256 pontot, és jogot szerzett a körzeti versenyen való részvételre. Mint általában a programozókra, Mikára is érvényes, hogy ez a verseny egyike azoknak a ritka alkalmaknak, amikor barátokat szerezhet. Úgy döntött, ismét felkeresi Miljanát, a jósnőt, akitől majd megtudja, hogyan köttetnek barátságok a körzeti versenyen.

A Körzeti versenyre N tanuló kap meghívást. Sorszámaik 1,2,...,N. A tanulók nem egyformán barátkozó kedvűek, ám mindegyikükre definiálható az, hogy mennyire szeret barátkozni. Feltételezzük, hogy az i-edik tanuló barátkozó kedve Ai. A versenyzők között M ismerős pár található. Minden ismerős tanuló párra vonatkozik, hogy lehetnek barátok vagy ellenségek. Az i-edik tanuló boldogságát megkapjuk, ha összeszorozzuk az adott tanuló barátkozó kedvét a barátai és ellenségei számának különbségével. Például, ha egy tanuló barátkozó kedve 2, és van három barátja és egy ellensége, akkor az ő boldogsága 2*(3-1)=4. Egyes tanulóknak a barátkozó kedve lehet negatív érték. Ebben az esetben ezek a tanulók akkor boldogabbak, ha több az ellenségük, mint a barátjuk. Az egész verseny összboldogsága egyenlő az összes versenyző boldogságának összegével.

A jósnő Mikának azt elárulta ugyan, hogy kik az ismerős párok a versenyzők között, ám azt nem mondta meg, mely párok barátok, és melyek ellenségek. Mika azt szeretné megtudni, mekkora a verseny lehető legnagyobb összboldogsága. Ő maga rendkívül elfoglalt, mert készül a körzeti versenyre, ezért titeket kért meg arra, segítsetek ebben neki.

## Bemenet
A bemenet első sorában az N és M számok állnak. Ezután N sor következik úgy, hogy az (i+1)-edik sorban az i-edik versenyző barátkozó kedve, az Ai érték áll. Ezután még M sor következik, amelyek a versenyzők közötti ismeretséget írja le úgy, hogy az (N+1+i)-edik sorban az Xi, Yi ismerős pár található.

## Kimenet
A kimenet első és egyetlen sorában kiíratni az egész verseny lehető legnagyobb boldogságát!

## Korlátozások
- 1 ≤ N ≤ 100 000 
- 1 ≤ M ≤ 100 000
- Ai ∈ [-10^9, 10^9]
- 1 ≤ Xi, Yi ≤ N
- Xi != Yi, ahol i ∈ [1,M]
- {Xi,Yi} != {Xj,Yj}, ahol i,j ∈ [1,M], i!=j
- Az tesztpéldák 3 független csoportba oszthatók:
    - Tesztpéldák, melyek 20 pontot érnek: N,M ≤ 10.
    - Tesztpéldák, melyek 20 pontot érnek: Ai = 1 minden i ∈ [1,N].
    - Tesztpéldák, melyek 60 pontot érnek: nincs külön korlátozás.
## Példák
### Példa 1
- Bemenet
    - 3 2

		1

		1

		1

		1 2
		
		2 3
- Kimenet
    - 4
- Magyarázat
    - Minden tanuló ugyanannyira barátkozó kedvű, így a legnagyobb boldogság akkor érhető el, ha mindannyian barátok. Ekkor az 1-es számú versenyző boldogsága 1, a 2-es számú versenyző boldogsága 2 és a 3-as számú versenyző boldogsága pedig 1. Tehát a verseny legnagyobb boldogsága 4.
### Példa 2
- Bemenet
    - 3 2

	    2

	    -5

	    5

	    1 2

	    2 3
- Kimenet
    - 3
- Magyarázat
    - A boldogság akkor lesz legnagyobb, ha minden ismerős ellenség. Ekkor a boldogság értéke: 2*(0-1)+(-5)*(0-2)+5*(0-1)=3.