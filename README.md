# Užd1 Failų sugeneravimas ir suskirstymas į skirtingas grupes naudojant skirtingas strategijas

Ši programa sugeneruoja 5 skirtingų dydžių studentų failus (1 000, 10 000, 100 000, 1 000 000, 10 000 000), kuriuose yra po 7 namų darbus. Apskaičiuoja galutinį pažymį pagal vidurkį ir tada padalina į 2 skirtingus grupes. Programos išvedimas yra programos veikimo greičio analizė naudojant 2 skirtingas strategijas bei 2 skirtingus konteinerius. Yra naudojama **std::list** ir **std::vector** konteineriai.


Sistemos parametrai: 
- CPU - 6 Core, 12 Threads, Base clock speed 2,9Ghz
- RAM - 16GB 2666Mhz
- SSD - Read/Write 3500/3000 MB/s

List konteinerio greičiai:
1) 100000: 0.0608 sec.
1000000: 0.628 sec.
2) 100000 0.0748 sec.
1000000 0.69 sec.

Vector konteinerio greičiai:
1) 100000 0.025 sec.
1000000 0.27 sec.
2) 100000 0.041 sec.
1000000 0.42 sec.

Vector konteineris yra geresnis šiai paskirčiai, tačiau antra strategija deja nėra labiau greitesnė.

Siekiant įsidiegti šia programą reikia:
1) Parsisiųsti ją iš Github.
2) Sukompiliuokite ant savo kompiuteriu naudojant CMakeList failą.


Komentarai:
Stebėtinai antra strategija lėčiau veikia negu pirma per abu konteinerius, tai galėjo atsitikti nes buvo vis dėlto ne taip optimaliai realizuotas kodas naudojant std algoritmus.

- [V0.1](https://github.com/Kristco/uzd1/releases/tag/0.1.4) - Pirmoji versija.
- [V0.2](https://github.com/Kristco/uzd1/releases/tag/0.2.2) - Antroji versija. Duomenis galima nuskaityti iš failų.
- [V0.3](https://github.com/Kristco/uzd1/releases/tag/0.3.2) - Trečioji versija. Pridėti header failai ir klaidų valdymas.
- [V0.4](https://github.com/Kristco/uzd1/releases/tag/0.4.2) - Ketvirtoji versija. Atliekama programos greičio analizė.
- [V0.5](https://github.com/Kristco/uzd1/releases/tag/0.5.2) - Penktoji versija. Pakeistas konteineris iš vector į list. Palyginta su skirtingu ketvirtos versijos sparta.
- [V1.0](https://github.com/Kristco/uzd1/releases/tag/1.2) - Naujausia programos versija. Grupavimas atliekamas 2 skirtingomis strategijomis, palyginta jų sparta.
