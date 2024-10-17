#include <stdio.h>

int main() {
    int A;
    int B;

    scanf("%d", &A);
    scanf("%d", &B);

    if (B == 0) {
        printf("Nesmis delit 0!\n");
        return 1;
    }

    printf("Soucet je: %d\n", A + B);
    printf("Rozdil je: %d\n", A - B);
    printf("Soucin je: %d\n", A * B);
    printf("Podil  je: %d\n", A / B);

    return 0;
}
