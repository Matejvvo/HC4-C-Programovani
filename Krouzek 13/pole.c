#include "stdio.h"

int main() {   
    char retezec[99] = "Hello, World!";
    int a[4] = { 2, 3, 4, 4 };

    printf("%s\n", retezec);
    scanf ("%s\n", retezec);
    printf("Novy: %s\n", retezec); 
    printf("cislo: %d\n", a[2]);
    // ctrl-D

    return 0;
}