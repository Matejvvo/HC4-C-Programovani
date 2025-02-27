#include "stdio.h"
#include <stdlib.h>

int main() {
    FILE *file;  // Ukazatel na soubor

    // *** ZÁPIS DO SOUBORU ***
    file = fopen("soubor.txt", "r"); // Otevření souboru pro čtení a zápis
    // if (file == NULL) {
    //     perror("Chyba při otevírání souboru pro zápis");
    //     return 1;
    // }

    fprintf(file, "Ahoj, toto je text zapsaný do souboru cislo %d!\n", 56);
    fprintf(file, "Druhý řádek textu.\n");

    fclose(file); // Zavření souboru

    file = fopen("soubor.txt", "r"); // Otevření souboru pro čtení a zápis

    // // *** ČTENÍ ZE SOUBORU ***
    printf("Obsah souboru output.txt:\n");
    char buffer[256];  // Pole pro čtení řádků
    while (fgets(buffer, sizeof(buffer), file)) 
    { 
        printf("%s", buffer); // Výpis obsahu souboru na obrazovku
    }

    fclose(file); // Zavření souboru
    return 0;
}
