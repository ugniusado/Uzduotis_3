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

## [v0.4](https://github.com/gabijabalionyt/2-uzduotis/releases/tag/V04)

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

