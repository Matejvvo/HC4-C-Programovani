// https://bit.ly/hc4zad1

# include <stdio.h>

int ukol1() {
    printf("Zadejte teplotu: ");
    
    int teplota;
    scanf("%d", &teplota);

    if (teplota < 0) {
        printf("Mrzne!\n");
    }
    else if (teplota < 10) {
        printf("Je chladno\n");
    } 
    else if (teplota < 20) {
        printf("Příjemné počasí.\n");
    } else if (teplota < 30) {
        printf("Teplo.\n");
    }
    else {
        printf("Vedro!\n");
    }

    return 0;
}

int ukol2() {
    printf("Zadejte číslo (od 1 do 10): ");
    
    int x;
    scanf("%d", &x);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}

int ukol3() {



    return 0;
}

int main() {
    // ukol1();
    // ukol2();
    // ukol3();
    return 0;
}
