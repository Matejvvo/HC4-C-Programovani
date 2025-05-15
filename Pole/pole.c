// Aplikace, ktera najde min a max hodnotu, ze zadanych cisel
// Budeme zadavat cisla
// Az napiseme 0, tak skoncime
// Napise se min a max hodnota

// Maximalni pocet cisel bude 20


#include "stdio.h"

int main() {
    int n;
    printf("Napis kolik cise:\n");
    scanf("%d", &n);

    int pole[n];

    printf("Zadej az %d cisel (0 ukonci zadavani):\n", n);

    int max = -__INT_MAX__;
    int min = __INT_MAX__;
    int pocet = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &pole[i]);
        
        if (pole[i] == 0) {
            break;
        }

        if (pole[i] > max) {
            max = pole[i];
        }

        if (pole[i] < min) {
            min = pole[i];
        }

        pocet = i + 1;
    }

    printf("Zadal jsi: %d cisel.\n", pocet);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);

    return 0;
}
