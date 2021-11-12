# Užd1 Failų sugeneravimas ir suskirstymas į skirtingas grupes

Ši programa sugeneruoja 5 skirtingų dydžių studentų failus (1 000, 10 000, 100 000, 1 000 000, 10 000 000), kuriuose yra po 7 namų darbus. Apskaičiuoja galutinį pažymį pagal vidurkį ir tada padalina į 2 skirtingus failus. Programos išvedimas yra programos veikimo greičio analizė, kaip greitai programa atlieka tam tikrus veiksmus. Yra naudojama **std::list**

Išvestis atrodo taip:

![image](https://user-images.githubusercontent.com/69794082/139396566-42832e63-3827-4b89-8d11-ed6de7b3c0e2.png)

Sistemos parametrai: 
- CPU - 6 Core, 12 Threads, Base clock speed 2,9Ghz
- RAM - 16GB 2666Mhz
- SSD - Read/Write 3500/3000 MB/s

Programos buvo bandomos po 5 kartus

Rezultatų vidurkis su **std::vector**:
- 1000 -- 0,0286sec;
- 10000 -- 0,0787sec;
- 100000 -- 0,584sec;
- 1000000 -- 5,804sec;
- 10000000 -- 62,89sec.

Rezultatų vidurkis su **std::list**:
- 1000 -- 0,0121sec; (-58%)
- 10000 -- 0,0674sec; (-14%)
- 100000 -- 0,622sec;  (+7%)
- 1000000 -- 6,052sec;  (+4%)
- 10000000 -- 59,76sec.  (-5%)

Vidutiniškai programam 13% veikia grečiau negu su **std::vector**


Komentarai:
Kodas beveik nesiskiria nuo 0.4, tik visur kur buvo vector pakeičiau į list ir naudojau iteratorius. Jaučiu reiktų dar truputi optimizuoti, kad nebūtų vector greičiau prie 100 000 ir 1 000 000 sąrašo
