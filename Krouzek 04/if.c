#include <stdio.h>

int main() {
    int penize = 10000;

    // Kdyz penize jsou vice nez 10000,
    // tak napis: "jsi bohaty". Jinak
    // napis: "jsi chudy".

    if (penize >= 10000) {
        printf("jsi bohaty");
    }
    else {
        printf("jsi chudy");
    }

    return 0;
}
