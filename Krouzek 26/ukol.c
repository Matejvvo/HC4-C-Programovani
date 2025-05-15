#include <stdio.h>

const char* drinks[] = { "Voda", "Limonáda", "Káva" };
const int prices[] = { 10, 15, 20 };
const int drink_count = 3;

// vypíše menu nápojů
void show_menu() {
    printf("Napoje v nabidce:\n");
    for (int i = 0; i < drink_count; i++)
        printf(" - napoj (%d): %s | Kc %d,-\n", 
                i + 1, drinks[i], prices[i]);
}

// vrátí cenu nápoje podle výběru
int get_price(int idx) {
    if (idx < 0 || idx >= drink_count)
        return -1;
    return prices[idx];
}

// načte platbu a vrátí 1 pokud je dostatečná, jinak 0
int accept_payment(int prx) {
    int mnx = 0;

    printf("Vlozte %d Kc: ", prx);
    scanf("%d", &mnx);

    if (mnx >= prx) {
        printf("Dekujeme, vracime %d Kc\n", mnx - prx);
        return 1;
    } 

    printf("Nedostatecna castka\n");
    return 0;
}

// vydá nápoj
void dispense_drink(int idx) {
    if (idx < 0 || idx >= drink_count)
        return;
    printf("Vyzvednete si napoj: %s\n", drinks[idx]);
}

// běh automatu
int main() {
    int choice, c;

    while (1) {
        show_menu();
        printf("Zadejte cislo napoje: ");
        scanf("%d", &choice);
        if (choice == 0)
            break;
        --choice;

        int price = get_price(choice);
        if (price == -1) {
            printf("Neplatna volba\n");
        } else {
            if (accept_payment(price))
                dispense_drink(choice);
        }

        printf("----------------------------------");
        while ((c = getchar()) != '\n' && c != EOF);
        getchar();
    }

    return 0;
}
