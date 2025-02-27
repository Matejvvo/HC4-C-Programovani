#include "stdio.h"

/** Ukol: napsat vlastni funkce:
 *  - s parametry
 *  - bez parametru
 *  - void / int vystup
*/

int secti(int a, int b) {
    return a + b;
}

int secti_vstup() {
    int a, b;
    scanf("%d %d", &a, &b);
    int suma = a + b;
    return suma;
}

void scitej() {
    int a, b;
    scanf("%d %d", &a, &b);
    int suma = a + b;
    printf("Suma je jina = %d\n", suma);
    return;
}

int main() {

    int x = secti(5, 10);
    printf("%d", x);

    // scitej();
    // scitej();
    // scitej();
    // scitej();
    // scitej();
    return 0;
}
