#include "stdio.h"

int main() {

    int rok;
    scanf("%d", &rok);
    
    int sekund = rok * 365 * 24 * 60 * 60;
    printf("%d\n", sekund);

    return 0;
}
