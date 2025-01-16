// Tohle jsme už dělali na kroužku 

/*
Zadání:
Program, který spočítá průměr známek.

Vstup:   kolik celkem známek
         známky oddělené mezerama (pole)

Vystup:  průměr známek
*/

#include "stdio.h"

int main()
{
    int znamky[1000];

    int pocet_znamek;
    printf("Zadej pocet znamek: ");
    scanf("%d", &pocet_znamek);

    for (int i = 0; i < pocet_znamek; i++)
    {
        scanf("%d", &znamky[i]);
    }

    int suma = 0;
    for (int i = 0; i < pocet_znamek; i++)
    {
        suma += znamky[i];
    }

    int prumer = suma / pocet_znamek;
    printf("Prumer: %d\n", prumer);

    return 0;
}
