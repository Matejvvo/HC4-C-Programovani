#include "stdio.h"

int formatt(int* day, int* month) {
    int error_code = 0;

    if (0) {
        *day = 10;
        *month = *month * 2;
    } else {
        day = NULL;
        month = NULL;
        if (day != NULL)
            *day = 4;
    }

    return error_code;
}

int main() {
    // int a = 10;
    // int* pA = &a;
    // printf("val: %d, pointer: %d = %d\n", a, &a, pA);

    // *pA = 1000;
    // printf("Deref: %d\n", a);

    int pole[5] = { 1, 2, 3, 4, 5 };
    printf("%d\n", *(pole+10000));

    // char* string1 = "ahoj";

    // char string2[10] = { 'a', 'h', '\0','o', 'j', 's'};

    // printf("%s\n", string2);

    // int d = 1;
    // int m = 10;

    // int res = formatt(&d, &m);

    // printf("res: %d, d: %d, m: %d\n", res, d, m);

    return 0;
}
