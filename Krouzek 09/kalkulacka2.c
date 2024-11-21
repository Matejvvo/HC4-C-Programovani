#include "stdio.h"

int main()
{
    printf("Zadej 1. cislo: ");
    int a;
    scanf("%d", &a);

    printf("Zadej 2. cislo: ");
    int b;
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);

    return 0;
}
