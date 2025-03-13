# Programátorská cvičení

Tento soubor obsahuje několik programátorských úloh zaměřených na procvičení základních konceptů jazyka C.

## 1️⃣ Podmínky (if, else, else if)
### Úloha: Klasifikace teploty
Napište program, který si od uživatele vyžádá teplotu ve stupních Celsia a vypíše, do jaké kategorie patří:
- **méně než 0 \°C** \-> "Mrzne!"
- **0 - 10 \°C** \-> "Je chladno."
- **11 - 20 \°C** \-> "Příjemné počasí."
- **21 - 30 \°C** \-> "Teplo."
- **více než 30 \°C** \-> "Vedro!"

**Vstup:**
```
Zadejte teplotu: 15
```
**Výstup:**
```
Příjemné počasí.
```

## 2️⃣ Cykly (while)
### Úloha: Počítání ciferného součtu
Napište program, který si od uživatele vyžádá celé číslo a spočítá součet jeho cifer.

**Vstup:**
```
Zadejte číslo: 1234
```
**Výstup:**
```
Součet cifer: 10
```

## 3️⃣ Cykly (for)
### Úloha: Násobilka
Napište program, který si od uživatele vyžádá číslo a vypíše jeho násobilku od 1 do 10.

**Vstup:**
```
Zadejte číslo: 7
```
**Výstup:**
```
7 x 1 = 7
7 x 2 = 14
...
7 x 10 = 70
```

## 4️⃣ Pole (array)
### Úloha: Průměr známek
Napište program, který si vyžádá 5 známek (celá čísla) od uživatele, uloží je do pole a vypočítá jejich průměr.

**Vstup:**
```
Zadejte 5 známek: 1 2 3 1 2
```
**Výstup:**
```
Průměr známek: 1.8
```

## 5️⃣ scanf a printf
### Úloha: Kalkulačka dvou čísel
Napište program, který si od uživatele vyžádá dvě desetinná čísla a operaci (+, -, *, /). Výsledek vypíše na obrazovku.

**Vstup:**
```
Zadejte první číslo: 10.5
Zadejte druhé číslo: 2.5
Zadejte operaci (+, -, *, /): *
```
**Výstup:**
```
Výsledek: 26.25
```

## 6️⃣ Práce s char
### Úloha: Malá nebo velká písmena?
Napište program, který od uživatele načte jeden znak (char) a zjistí, zda se jedná o malé písmeno, velké písmeno nebo jiný znak.

**Vstup:**
```
Zadejte znak: A
```
**Výstup:**
```
Velké písmeno.
```

## 7️⃣ Kombinace více konceptů
### Úloha: Číselná hra
Napište program, který vygeneruje náhodné číslo od 1 do 100 a hráč ho musí uhodnout. Program mu dává nápovědy (větší/menší).

**Výstup:**
```
Hádej číslo (1-100): 50
Je to menší!
Hádej číslo (1-100): 25
Je to větší!
...
Gratuluji, uhodl/a jsi číslo 42 za 5 pokusů!
```

## 8️⃣ Pole a podmínky
### Úloha: Největší a nejmenší číslo v poli
Napište program, který si od uživatele vyžádá 10 čísel, uloží je do pole a poté zjistí největší a nejmenší hodnotu.

**Vstup:**
```
Zadejte 10 čísel: 5 8 2 9 4 7 1 6 3 10
```
**Výstup:**
```
Nejmenší číslo: 1
Největší číslo: 10
```

## 9️⃣ Práce s double a while
### Úloha: Převod měny
Napište program, který bude převádět částku z eur na koruny. Kurz nech zadat uživatelem a program bude umožňovat opakované převody, dokud nezadá 0 jako částku.

**Vstup:**
```
Zadejte kurz EUR/CZK: 24.5
Zadejte částku v EUR (0 pro konec): 10
10 EUR = 245.00 CZK
Zadejte částku v EUR (0 pro konec): 5.5
5.5 EUR = 134.75 CZK
Zadejte částku v EUR (0 pro konec): 0
```
**Výstup:**
```
Děkujeme za použití převodníku!
```

## 🔟 Bonus: Použití funkcí
### Úloha: Vylepšená kalkulačka
Napište program, který využije funkce pro jednotlivé matematické operace a umožní uživateli provádět výpočty opakovaně.

#### **Šablona k implementaci:**
```c
#include <stdio.h>

// Deklarace funkcí pro matematické operace
double scitani(double a, double b);
double odcitani(double a, double b);
double nasobeni(double a, double b);
double deleni(double a, double b);

int main() {
    double cislo1, cislo2, vysledek;
    char operace;
    char pokracovat = 'a';

    while (pokracovat == 'a') {
        // Načtení vstupů od uživatele

        // Výpočet pomocí funkcí

        // Výpis výsledku

        // Dotaz na pokračování
    }

    // Ukončení programu
    return 0;
}

// Implementace funkcí pro matematické operace
double scitani(double a, double b) {
    // Implementace
}

double odcitani(double a, double b) {
    // Implementace
}

double nasobeni(double a, double b) {
    // Implementace
}

double deleni(double a, double b) {
    // Implementace (nezapomeň na ošetření dělení nulou!)
}
