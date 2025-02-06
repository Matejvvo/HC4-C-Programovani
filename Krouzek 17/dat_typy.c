

/*
    Vytvorit program, ktery prijme tento vstup

    Zadejte celé číslo: 10
    Zadejte desetinné číslo: 4.5
    Zadejte jeden znak: A
    Zadejte logickou hodnotu (1 = true, 0 = false): 1

    Vystup bude = 10 * 4.5 * A * true;

    int 
    double
    char
    bool
*/
#include <stdio.h>
#include <math.h>

int main() {
    double a = 0.1;
    double b = 0.2;
    double c = a + b;

    printf("Hodnota a + b = %.20f\n", c);  // Výpis s velkou přesností

    // Očekáváme, že 0.1 + 0.2 = 0.3
    if (fabs(c - 0.3) < 100 * __DBL_EPSILON__ * fabs(fmax(c, 0.3))) {
        printf("Překvapení! Výsledek je přesně 0.3\n");
    } else {
        printf("Pozor! a + b není přesně 0.3, ale %.20f\n", c);
    }

    return 0;
}



// #include <stdio.h>
// #include <stdbool.h>  // Pro použití typu bool


// int main()
// {
//     int tmp;
//     scanf("%d", &tmp);
//     bool a = tmp;
//     printf("%d\n", a);
//     return 0;
// }



// int main() {
//     // Celá čísla
//     int a = 10;            // Základní celá čísla
//     short b = 32000;       // Krátká celá čísla
//     long c = 1000000;      // Dlouhá celá čísla

//     // Reálná čísla
//     float f = 3.14159f;    // Float s jednoduchou přesností
//     double d = 2.7182818;  // Double s dvojitou přesností

//     // Znakový typ
//     char ch = 'A';         // Jeden znak

//     // Logické hodnoty
//     bool boolValue = true;  // Pomocí stdbool.h

//     printf("Demonstrace základních datových typů v C:\n");

//     // Výpis celočíselných typů
//     printf("Celé číslo (int):           %d\n", a);
//     printf("Krátké celé číslo (short):  %d\n", b);
//     printf("Dlouhé celé číslo (long):   %ld\n", c);

//     // Výpis reálných čísel
//     printf("Reálné číslo (float):       %.5f\n", f);
//     printf("Reálné číslo (double):      %.8lf\n", d);

//     // Výpis znaků
//     printf("Znak (char):                %c\n", ch);

//     // Výpis logických hodnot
//     printf("Logická hodnota (bool):     %d\n", boolValue);


//     return 0;
// }
