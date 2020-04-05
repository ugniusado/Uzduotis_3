# Obj-Task2
Objektinio programavimo 2-os užduoties repozitorija

## Įdiegimo ir naudojimosi instrukcija
• Parsisiuskite vieną iš releas'ų [Releas'ai](https://github.com/ugniusado/Obj-Task2/releases) 

• *įsidiegti C++ kompiliatorių*

• *terminale, įvesti programos vieta diske*

• *Kompiliuoti jūsų programą*

• *Visos kitos instrukcijos bus rodomos konsolėje*

## [v0.1](https://github.com/ugniusado/Obj-Task2/releases/tag/v0.14)

Šioje versijoje programa nuskaito Studentų vardus ir pavardes, susumuoja jų suvestus pažymius, gauna vidurkius, išveda galutinį rezultatą, bei medianą.

![Console](https://github.com/ugniusado/Obj-Task2/blob/v0.1/Screenshot_3.png)


Galimas duomenų įvedimas ranka arba random sugeneravimas

## [v0.2](https://github.com/ugniusado/Obj-Task2/releases/tag/v0.21)

V0.1 praplėsta versija, pridėtas opcija skaityti iš failo, bei rušiuoti pagal pavardę ar vardą išvedant

![https://github.com/ugniusado/Obj-Task2/blob/v0.2/v0.2.png](https://github.com/ugniusado/Obj-Task2/blob/v0.2/v0.2.png)


## [v0.3](https://github.com/ugniusado/Obj-Task2/releases/tag/v0.31)

*Programa paskirstyta į tris atskirus failus, t.y. **main.cpp, v0.3.cpp, v0.3.h**

*taip pat bandyta implementuoti error handlinimui skirtos komandos **try{} throw() ir catch()**

## [v0.4](https://github.com/ugniusado/Obj-Task2/releases/tag/v0.42)

Objektinio programavimo 2-os v0.4 užduoties repozitorija

1. Padarytas Studentu generavimas i .txt faila

2. Ju rusiavimas pagal pavarde

3. Vektoriaus perskirstymas i Nuskriaustus ir Kietus

4. Nuskriaustu ir Kietu ispausdinimas i atskirus failus

**Operaciju matavimas laiku pasitelkiant clock_t funckija**

Generavimas:

|Konteineris|1000  | 10000  | 100000 | 1000000  | 
| --------- |:----:| :-----:|:------:|:--------:|
|Std::vector| 2.6s | 3.8s   | 7.6s   | 25.8s    |

Rusiavimas:

|Konteineris|1000  | 10000  | 100000 | 1000000  | 
| --------- |:----:| :-----:|:------:|:--------:|
|Std::vector| 0.6s | 61.7s  | 105.4s | 192.3s   |

Paskirstymas:

|Konteineris|1000  | 10000  | 100000 | 1000000  | 
| --------- |:----:| :-----:|:------:|:--------:|
|Std::vector| 0.09s| 0.8s   | 1.5s   | 5.3s     |

Nuskriaustu ir Kieteku skirstymas i failus:

|Konteineris|1000  | 10000  | 100000 | 1000000  | 
| --------- |:----:| :-----:|:------:|:--------:|
|Std::vector| 0.07s| 0.3s   | 0.6s   | 2.8s     |

## [v0.5.deque](https://github.com/ugniusado/Obj-Task2/releases/tag/v0.5.deque)
## [v0.5.list](https://github.com/ugniusado/Obj-Task2/releases/tag/v0.5.list)

**KOMPIUTERIO SPECS CPU - Intel i5 8kartos 1.6GHz; RAM 2x4 2400MHz, SSD 256GB - speed 682 MB/s**

**Generavimo greitis:**
|Konteineris|1000  | 10000  | 100000 |
| --------- |:----:| :-----:|:------:|
|Std::vector| 2.6s | 3.8s   | 7.6s   | 
|Std::Deque | 0.28s| 2.61s  | 31.01s |
|Std::list  | 0.3s | 2.9s   | 37.3s  |

**Skirstymo ir spausdinimo greitis:**
|Konteineris| 1000  |10000    | 100000   |
| --------- |:-----:| :------:|:--------:|
|Std::vector| 1.7s  |11.5s    |  23.5s   |
|Std::Deque | 0.93s | 33.6s   | 65.5s    |
|Std::List  | 0.46s | 19.3s   | 35.7s    |

