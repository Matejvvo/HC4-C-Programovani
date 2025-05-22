#include <stdio.h>
#include <stdlib.h>

char mapa[10][10 + 1] = {
    "##########",
    "#@       #",
    "#  ####  #",
    "#     #  #",
    "#  #     #",
    "#  #  ####",
    "#     #  #",
    "### #    #",
    "#      X #",
    "##########"
};

int y = 1, x = 1;

void smazStarouMapu() {
    system("clear");
}

void vykresliMapu() {
    for (int i = 0; i < 10; i++)
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

    while (1) {
        smazStarouMapu();
        vykresliMapu();
        if(pohniPostavu() == 1)
            break;
    }

    printf("Vyhral jsi!\n");
    return 0;
}
