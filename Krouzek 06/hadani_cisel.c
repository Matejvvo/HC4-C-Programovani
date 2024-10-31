#include <stdio.h>

int main() {
    int tajneCislo = 7; // Předdefinované tajné číslo
    int tip;

    // Požádání uživatele o hádání čísla
    printf("Hádej tajné číslo mezi 1 a 10: ");
    scanf("%d", &tip);

    // Kontrola, zda uživatel hádal správně, nízko nebo vysoko
    if (tip == tajneCislo) {
        printf("Gratulace! Uhodl jsi správné číslo.\n");
    } else if (tip < tajneCislo) {
        printf("Máš smůlu! Tvoje číslo je příliš nízké.\n");
    } else {
        printf("Máš smůlu! Tvoje číslo je příliš vysoké.\n");
    }

    return 0;
}
