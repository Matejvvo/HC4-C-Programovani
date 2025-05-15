#include <stdio.h>

const char* drinks[] = { "Voda", "Limonáda", "Káva" };
const int prices[] = { 10, 15, 20 };
const int drink_count = 3;

// vypíše menu nápojů
void show_menu();
// vrátí cenu nápoje podle výběru
int get_price(int idx);
// načte platbu a vrátí 1 pokud je dostatečná, jinak 0
int accept_payment(int price);
// vydá nápoj
void dispense_drink(int idx);

// běh automatu
int main() {
    // todo

    return 0;
}
