/*
Zadání: Vypočítání váženého průměru 
známek v jazyce C

Napište program v jazyce C, který
načte počet známek, známky a jejich 
váhy z uživatelského vstupu, a poté 
spočítá a zobrazí vážený průměr.

Vstupy:
1. řádek: Počet známek 
    (např. 6)
2. řádek: Hodnoty známek - oddělené mezerou 
    (např. 1 2 1 4 5 1)
3. řádek: Hodnoty vah    - oddělené mezerou 
    (např. 30 39 30 28 10 1)

Výstup:
Program zobrazí vážený průměr .

Bonus:
Program kontroluje vstup a případně
napíše "nesprávný vstup" a skončí.
*/

#include <stdio.h>

int main() {
    int num_grades; // Počet zadaných známek

    // Načtění počtu známek
    printf("Pocket znamek: ");
    if (scanf("%d", &num_grades) != 1 || num_grades <= 0) {
        printf("Chyba: Neplatný počet známek.\n");
        return 1;
    }

    // Pole pro známky a váhy
    int grades_simple[1000];    // prasárna, ale funguje
    int weights_simple[1000];   // prasárna, ale funguje
    int grades[num_grades];     // ne každý překladač tohle umí
    int weights[num_grades];    // ne každý překladač tohle umí

    // Načtění známek
    printf("Znamky: ");
    for (int i = 0; i < num_grades; i++) {
        if (scanf("%d", &grades[i]) != 1) {
            printf("Chyba: Neplatný vstup pro známky.\n");
            return 1;
        }
    }

    // Načtění vah
    printf("Vahy: ");
    for (int i = 0; i < num_grades; i++) {
        if (scanf("%d", &weights[i]) != 1 || weights[i] <= 0) {
            printf("Chyba: Neplatný vstup pro váhy nebo váha <= 0.\n");
            return 1;
        }
    }

    // Výpočet váženého průměru
    int weighted_sum = 0;
    int total_weight = 0;
    for (int i = 0; i < num_grades; i++)
    {
        weighted_sum += grades[i] * weights[i];
        total_weight += weights[i];
    }

    // Kontrola dělení nulou
    if (total_weight == 0)
    {
        printf("Chyba: Součet vah je nula.\n");
        return 1;
    }

    int weighted_average = weighted_sum / total_weight; // Pokročilí mohou použít double

    // Zobrazení výsledku
    printf("Vážený průměr je: %d\n", weighted_average); // %.2f pro double

    return 0;
}
