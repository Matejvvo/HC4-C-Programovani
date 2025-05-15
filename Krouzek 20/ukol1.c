// https://bit.ly/hc4zad1

/*
Úloha: Klasifikace teploty

Napište program, který si od uživatele vyžádá teplotu 
ve stupních Celsia a vypíše, do jaké kategorie patří:

méně než 0 \°C -> "Mrzne!"
0 - 10 \°C -> "Je chladno."
11 - 20 \°C -> "Příjemné počasí."
21 - 30 \°C -> "Teplo."
více než 30 \°C -> "Vedro!"

Vstup:
Zadejte teplotu: 15

Výstup:
Příjemné počasí.
*/

#include <stdio.h>

int main() {
    printf("Zadejte teplotu: ");
    
    int teplota;
    scanf("%d", &teplota);

    if (teplota < 0)
        printf("Mrzne!\n");
    else if (teplota < 10)
        printf("Je chladno\n");
    else if (teplota < 20)
        printf("Příjemné počasí.\n");
    else if (teplota < 30)
        printf("Teplo.\n");
    else
        printf("Vedro!\n");

    return 0;
}
