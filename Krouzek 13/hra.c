#include "stdio.h"

int main() {
    while (1)
    {
        int vstup;
        scanf("%d", &vstup);
        printf("asdasdasdsa");
        if (vstup == 4) {
            printf("Pribeh pokracuje...\n");
            printf("asdasdasdsa");
            scanf("%d", &vstup);
            if (vstup == 1) {
                printf("Pribeh pokracuje...\n");
                printf("asdasdasdsa");
                scanf("%d", &vstup);
                // atd...
                if (vstup == 11){
                    break;
                }
            } 
            else {
                printf("Skoncil jsi.\n");
                continue;
            }
        } 
        else {
            printf("Skoncil jsi.\n");
            continue;
        }

    }
    
    printf("Vyhral jis.\n");

    return 0;
}