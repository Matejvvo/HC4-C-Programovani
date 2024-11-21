#include "stdio.h"

int main()
{
    printf("Ahoj svete!\n");

    int A;
    int B = 10;
    A = 20;
    B = 4;

    int soucet = A + B;
    int rozdil = A - B;
    printf("Soucet: %d, rozdil: %d\n", soucet, rozdil);

    // int vek;
    // printf("Zadej svuj vek.\n");
    // scanf("%d", &vek);
    // printf("Zadal jsi: %d\n", vek);


    int cislo = 0;

    if (cislo > 0)
    {
        printf("Cislo je vetsi nez 0.\n");
    }
    else
    {
        if (cislo == 0)
        {
            printf("Cislo je presne 0.\n");
        }
        else
        {
            printf("Cislo je mensi nez 0.\n");
        }
    }

    if (cislo == 0)
    {
        printf("neco");
    }

    int c = 10;
    while (c != 0)
    {
        printf("Tipni si cislo:\n");
        scanf("%d", &c);
    }

    return 0;    
}
