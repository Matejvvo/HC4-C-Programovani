#include <stdio.h>                      // Umozni programu nacitat a vypisovat do terminalu

int main() {                            // Zacatek programu

    int A;                              // Definuj 1. promennou typu integer (cele cislo), nazvi ji A
    int B;                              // Definuj 2. promennou typu integer (cele cislo), nazvi ji B

    scanf("%d", &A);                    // Nacti prvni cislo (%d) a uloz ho pomoci (&) do promenne A
    scanf("%d", &B);                    // Nacti druhe cislo (%d) a uloz ho pomoci (&) do promenne B

    printf("Soucet je: %d\n", A + B);   // Vypis A + B, dosadi se misto znaku %d
    printf("Rozdil je: %d\n", A - B);   // Vypis A - B, dosadi se misto znaku %d
    printf("Soucin je: %d\n", A * B);   // Vypis A * B, dosadi se misto znaku %d

    if (B != 0) {
        printf("Podil  je: %d\n", A / B);
    }
    else {
        printf("Nesmis delit 0!\n");
        return 1;
    }

    return 0;                           // Ukonci program s chybou 0 (zadna chyba)
}









// if (B == 0) {
//     printf("Nesmis delit 0!\n");
//     return 1;
// }

// printf("Podil  je: %d\n", A / B);   // Vypis A / B, dosadi se misto znaku %d
