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

int main() 
{
    // Program spocita vazeny prumer ze vstupu
    // Vstup: n pocet znamek
    //        n znamky
    //        n vahy

    // Načtění počtu známek
    int pocet_znamek;
    printf("Zadej pocet znamek:\n");
    if (scanf("%d", &pocet_znamek) != 1 
        || pocet_znamek <= 0
        || pocet_znamek > 1000)
    {
        printf("Spatny vstup\n");
        return 1;
    }

    // Načtění známek
    double znamky[1000];
    printf("Zadej znamky oddelene mezerou:\n");
    for (int i = 0; i < pocet_znamek; i++)
    {
        if(scanf("%lf", &znamky[i]) != 1 || znamky[i] <= 0)
        {
            printf("Spatny vstup\n");
            return 1;
        }
    }

    // Načtění vah
    int vahy[1000];
    printf("Zadej vahy oddelene mezerou:\n");
    for (int i = 0; i < pocet_znamek; i++)
    {
        if(scanf("%d", &vahy[i]) != 1 || vahy[i] < 0)
        {
            printf("Spatny vstup\n");
            return 1;
        }
    }

    // Výpočet váženého průměru
    double vazeny_soucet = 0;
    int soucet_vah = 0;
    for (int i = 0; i < pocet_znamek; i++)
    {
        vazeny_soucet += znamky[i] * vahy[i];
        soucet_vah += vahy[i];
    }

    // Zobrazení výsledku
    if (soucet_vah == 0)
    {
        printf("Deleni 0!\n");
        return 2;
    }
    double prumer = vazeny_soucet / soucet_vah;
    printf("Vazeny prumer: %.2lf\n", prumer);
    
    return 0;
}
