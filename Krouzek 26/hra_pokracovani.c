#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// generuj mapu

// skore, pocitadlo kroku
// restart hry
// vice urovni
// klice a dvere
// ...

// char mapa[10][10 + 1] = {
//     "##########",
//     "#@       #",
//     "#  ####  #",
//     "#     #  #",
//     "#  #     #",
//     "#  #  ####",
//     "#     #  #",
//     "#####D#  #",
//     "#      X #",
//     "##########"
// };

int y = 1, x = 1;

char mapa[20][20 + 1];

void generujMapu() {
    srand(time(NULL));
    for (int r = 0; r < 20; ++r) {
        for (int s = 0; s < 20; ++s) {
            if (r == 0)
                mapa[r][s] = '#';
            else if (r == 19)
                mapa[r][s] = '#';
            else if (s == 0)
                mapa[r][s] = '#';
            else if (s == 19)
                mapa[r][s] = '#';
            else {
                int nahodnyCislo = rand() % 6;
                if (nahodnyCislo == 0)
                    mapa[r][s] = '#';
                else
                    mapa[r][s] = ' ';
            } 
        }
    }
    mapa[1][1] = '@';
    mapa[10][10] = 'X';
}


void smazStarouMapu() {
    system("clear");
}

void vykresliMapu() {
    for (int i = 0; i < 20; i++)
        printf("%s\n", mapa[i]);
}

int jeZed(int ny, int nx) {
    if(mapa[ny][nx] == '#')
        return 1;
    return 0;
}

int jeVCili(int ny, int nx) {
    if(mapa[ny][nx] == 'X')
        return 1;
    return 0;
}

int pohniPostavu() {
    char smer = getchar();
    if (smer == '\n')
        return 0;

    int ny = y, nx = x;
    if (smer == 'w')
        ny--;
    if (smer == 's')
        ny++;
    if (smer == 'a')
        nx--;
    if (smer == 'd')
        nx++;

    if (jeZed(ny, nx) == 1)
        return 0;

    if (jeVCili(ny, nx) == 1)
        return 1;

    mapa[y][x] = ' ';
    y = ny;
    x = nx;
    mapa[y][x] = '@';

    return 0;
}

int main() {
    printf("Hra zacina...\n");
    generujMapu();
    while (1) {
        smazStarouMapu();
        vykresliMapu();
        if(pohniPostavu() == 1)
            break;
    }
    printf("Vyhral jsi!\n");
    return 0;
}
