#include <stdio.h>
#include <stdlib.h>

// bit.ly/hc4prog <- stahnout sablonu

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
int cilY = 8, cilX = 7;

void vymazMapu() {
    system("clear");
}

void vykresliMapu() {
    for (int y = 0; y < 10; ++y) {
        for (int x = 0; x < 10; ++x)
            printf("%c", mapa[y][x]);
        printf("\n");
    }
}

int jeZed (int nx, int ny) {
    if (mapa[ny][nx] == '#')
        return 1;
    return 0;
}

int jeVCili() {
    if (x == cilX && y == cilY)
        return 1;
    return 0;
}

void pohniPostavu() {
    char smer;
    scanf("%c", &smer);
    if (smer == '\n')
        return;

    int nx = x, ny = y;
    if (smer == 'w')
        ny--;
    else if (smer == 's')
        ny++;
    else if (smer == 'a')
        nx--;
    else if (smer == 'd')
        nx++;

    if (jeZed(nx, ny) == 1)
        return;

    mapa[y][x] = ' ';
    y = ny;
    x = nx;
    mapa[y][x] = '@';
}

int main() {
    while (1) {
        vymazMapu();
        vykresliMapu();
        pohniPostavu();
        if (jeVCili() == 1)
            break;
    }
    vymazMapu();
    vykresliMapu();
    printf("Vyhral jis.\n");
    return 0;
}
