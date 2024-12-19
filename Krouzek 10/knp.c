#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    {
    printf("Vitej ve hre kamen, nuzky, papir!\n");
    printf("Zvol si tvuj tah, napis:\n");
    printf("    1 pro Kamen\n");
    printf("    2 pro Papir\n");
    printf("    3 pro Nuzky\n");
    }

    int tahHrace;
    scanf("%d", &tahHrace);
    printf("Ty jsi zvolil: %d\n", tahHrace);

    srand(time(NULL));
    int tahPocitace = rand() % 3 + 1; // generuje 1, 2, 3 
    printf("Pocitac zvolil: %d\n", tahPocitace);

    if (tahHrace == tahPocitace)
    {
        printf("Remiza.\n");
    }
    else if (tahHrace == 1 && tahPocitace == 2)
        printf("Prohral jsi.\n");
    else if (tahHrace == 1 && tahPocitace == 3)
        printf("Vyhral jsi.\n");
    else if (tahHrace == 2 && tahPocitace == 1)
        printf("Vyhral jsi.\n");
    else if (tahHrace == 2 && tahPocitace == 3)
        printf("Prohral jsi.\n");
    else if (tahHrace == 3 && tahPocitace == 1)
        printf("Prohral jsi.\n");
    else if (tahHrace == 3 && tahPocitace == 2)
        printf("Vyhral jsi.\n");
    else
        printf("Neco se pokazilo.\n");

    return 0;
}
