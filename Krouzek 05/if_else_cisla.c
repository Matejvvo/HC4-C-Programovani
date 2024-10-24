#include "stdio.h"

int main() {
    int cislo = 0;

    if (cislo > 2) {
        printf("Cislo je > 2.\n");
    } else if (cislo == 2) {
        printf("Cislo je == 2.\n");
    } else if (cislo < -2) {
        printf("Cislo je < -2.\n");
    } else {
        printf("Cislo je uplne jine.\n");
    }

    return 0;
}
