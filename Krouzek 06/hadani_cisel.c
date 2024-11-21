#include <stdio.h>

int main() {
    int tip = 0;
    int tajneCislo = 7;

    printf("Hádej tajné číslo mezi 1 a 10: ");
    scanf("%d", &tip);

    int cislo = 100;
    while (cislo < 1) 
    {
        
    }






    if (tip == tajneCislo) 
    {
        printf("Gratulace! Uhodl jsi správné číslo.\n");
    } 
    else
    { 
        if (tip < tajneCislo) 
        {
            printf("Máš smůlu! Tvoje číslo je příliš nízké.\n");
        } 
        else 
        {
            printf("Máš smůlu! Tvoje číslo je příliš vysoké.\n");
        }
    }

    return 0;
}
