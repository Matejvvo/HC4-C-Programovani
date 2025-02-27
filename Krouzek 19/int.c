#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include <locale.h>

int main() {
    setlocale(LC_NUMERIC, "");

    printf("int         je %'lf\n", pow(2, sizeof(int) * 8));
    printf("long        je %'lf\n", pow(2, sizeof(long int) * 8));
    printf("long long   je %'lf\n", pow(2, sizeof(long long int) * 8));

    return 0;
}
