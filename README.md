# VU_2.uzd

# Paskirtis
Programa skirta studentų duomenų nuskaitymui ir išskaidymui į du atskirus failus.

# Veikimo principas
Paleidus programą vartotojo prašo :
- Pasirinkti ar duomenys bus įvedami, skaitomi ar generuojamas naujas atsitiktinis failas (rašyti 'i' (įvedami), 's' (skaitomi) arba 'g' (generuojami)) 

### Pasirinkus 'i' (duomenys įvedami), vartotojo prašoma:
- Įvesti studentų kiekį 
- Įvesti studento vardą, pavardę
- Pasirinkti, ar namų darbų kiekis bus įvedamas ranka (rašyti 't' (Taip) arba 'n' (Ne))
  - Pasirinkus 't', įvesti namų darbų kiekį
- Pasirinkti, ar namų darbų rezultatai bus įvedami ranka (rašyti 't' (Taip) arba 'n' (Ne))
  - Pasirinkus 't', įvesti namų darbų rezultatus
- Pasirinkti, ar egzamino rezultatas bus įvedamas ranka (rašyti 't' (Taip) arba 'n' (Ne))
  - Pasirinkus 't', įvesti egzamino rezultatą
- Pasirinkti, ar norima išvesti vidurkį, ar medianą (rašyti 'v' (vidurkį) arba 'm' (medianą))
- Pasirinkti studentų skirstymo strategiją (1 - rusiavimas i du naujus konteinerius, 2 - rusiavimas naudojant tik viena nauja konteineri)


Įvedant duomenis, vartotojui pasirinkus 'n', rezultatai/kiekis yra sugeneruojami atsitiktinai. 

Tada duomenys yra išrikiuojami ir išvedami į du failus: protingi (galutinis įvertinimas >=5) ir nevykeliai (galutinis įvertinimas <5).

### Pasirinkus 's' (duomenys skaitomi), vartotojo prašoma:
- Pasirinkti konteinerį, duomenims saugoti (v - vektorius, l - list, d - deque)
- Pasirinkti nuskaitomų studentų kiekį (1 - 1000, 2 - 10000, 3 - 100000, 4 - 100000, 5 - 1000000)
- Pasirinkti studentų skirstymo strategiją (1 - rusiavimas i du naujus konteinerius, 2 - rusiavimas naudojant tik viena nauja konteineri)

Tada duomenys yra nuskaitomi, išrikiuojami ir išvedami į du failus: protingi (galutinis įvertinimas >=5) ir nevykeliai (galutinis įvertinimas <5)

### Pasirinkus 'g' (duomenys generuojami), vartotojo prašoma: 
- Pasirinkti konteinerį, duomenims saugoti (v - vektorius, l - list, d - deque)
- Pasirinkti studentų kiekį (1 - 1000, 2 - 10000, 3 - 100000, 4 - 100000, 5 - 1000000)
- Pasirinkus 1, bus generuojama 1000 studentų, pasirinkus 2 - 10000 ir t.t.
- Pasirinkti studentų skirstymo strategiją (1 - rusiavimas i du naujus konteinerius, 2 - rusiavimas naudojant tik viena nauja konteineri)

Tada duomenys yra išrikiuojami ir išvedami į du failus: protingi (galutinis įvertinimas >=5) ir nevykeliai (galutinis įvertinimas <5).

### Svarbu
- Įvedant pažymius ranka, juos atskirti 'space' klavišu
- Įvedus paskutinį pažymį spausti 'enter' klavišą
- Įvedant studentų kiekį, įvedus skaičių mažesnį/lygu 0 arba didesnį už 100, reikės įvesti naują skaičių
- Įvedant namų darbų ar egzaminų rezultatus, įvedus skaičių mažesnį už 1 arba didesnį už 10, reikės įvesti naują skaičių


## Duomenų nuskaitymas + skirstymas naudojant skirtingus konteinerius
| Container | 1000 | 10000 | 100000 | 1000000 | 10000000 |
| --- | --- | --- | --- | --- | ---|
| Vector | 0,0855s | 1,214s | 4,552s | 20,137s | 136,815s |
| List | 0,0974s | 1,364s | 3,981s | 25,504s | 121,294s |
| Deque | 0,892s | 1,258s | 4,028s | 29,567s | 121,885s|

## Duomenų skirstymas
# 1 strategija
Bendro studentai konteinerio (vector, list ir deque tipų) skaidymas (rūšiavimas) į du naujus to paties tipo konteinerius: "nevykeliai" ir "protingi". 
| Container | 1000 | 10000 | 100000 | 1000000 | 10000000 |
| --- | --- | --- | --- | --- | ---|
| Vector | 0,0209s | 0,3041s | 3,172s | 15,157s | 93,781s |
| List | 0,0207s | 0,3061s | 2,952s | 11,760 | 82,321s |
| Deque | 0,0189s | 0,2942s | 3,011s | 16,021s | 98,905s|

# 2 strategija
Bendro studentų konteinerio (vector, list ir deque) skaidymas (rūšiavimas) panaudojant tik vieną naują konteinerį: "protingi". 
| Container | 1000 | 10000 | 100000 | 1000000 | 10000000 |
| --- | --- | --- | --- | --- | ---|
| Vector | 0,0128s | 0,2263s | 3,002s | 14,206s | 84,324s |
| List | 0,0139s | 0,2229s | 2,061s | 10,248s | 67,378s |
| Deque | 0,0129s | 0,2279s | 2,486s | 15,645s | 89,048s|

# Programos įdiegimas
- Atsisiųskite programos versiją iš [releases](https://github.com/gabijagleiz/VU_2.uzd/releases)
- Išarchivuokite parsisiųstą failą.
- Paleiskite main.cpp naudojantis C++ IDE

# Versijos
- [v0.1](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v0.1)
- [v0.1.1](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v.1.1) pataisyta 0.1 versija
- [v0.2](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v0.2) pridėta galimybė skaityti duomenis iš failo
- [v0.3](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v0.3) pridėtas header failas, du cpp failai
- [v0.3.1](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v0.3.1) pridėtas išimčių valdymas
- [v0.4](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v0.4) pridėta galimybėta generuoti naują studentų failą. Duomenų išskaidymas į du failus.
- [v0.5](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v0.5) pridėta galimybė rinktis konteinerį
- [v0.5.1](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v0.5.1) patobulinta 0.5 versija
- [v1.0](https://github.com/gabijagleiz/VU_2.uzd/releases/tag/v0.1) dvi strategijos grupuoti studentus
- [v1.1](https://github.com/gabijagleiz/VU_2.2uzd/releases/tag/v1.1) pridėtas Class tipas
- [v1.2](https://github.com/gabijagleiz/VU_2.2uzd/releases/tag/v1.2) rule of three
- [v1.5](https://github.com/gabijagleiz/VU_2.2uzd/releases/tag/v1.5) pridėta bazinė klasė "Asmuo"
- [v2.0](https://github.com/gabijagleiz/VU_2.2uzd/releases/tag/v2.0) unit testai, doxygen dokumentacija
