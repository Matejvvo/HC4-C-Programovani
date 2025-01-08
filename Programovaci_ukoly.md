
# Programovací úkoly v C#

## Úkol 1: Najít nejvíce se opakující slovo v souboru

### Popis úkolu:
Vytvoř program v jazyce C#, který:
1. Načte textový soubor zadaný uživatelem.
2. Analyzuje obsah souboru a zjistí, které slovo se v textu opakuje nejčastěji.
3. Ignoruje rozdíly mezi velkými a malými písmeny (např. "Slovo" a "slovo" jsou považovány za stejné).
4. Odstraní interpunkci a pracuje pouze s jednotlivými slovy (např. "slovo," a "slovo" jsou považovány za stejné).
5. Zobrazí nejčastěji se opakující slovo spolu s počtem jeho výskytů. V případě shody (více slov se stejným počtem výskytů) vypíše všechna tato slova.

### Vstupy:
- Cesta k textovému souboru (zadá uživatel při spuštění programu).

### Výstupy:
- Nejčastěji se opakující slovo/slova a počet jejich výskytů.

### Příklad:

Obsah souboru:
```
Kočka spí. Pes spí. Pes je větší než kočka. Kočka je rychlá.
```

Výstup programu:
```
Nejčastěji se opakující slovo: "kočka", "pes", "spí" (3 výskyty)
```

### Technické požadavky:
1. Použij vhodné datové struktury, např. slovník (`Dictionary`), ke sledování frekvence slov.
2. Program by měl zvládat velké soubory (optimalizace na výkon a paměť není nutná, ale vítaná).
3. Ošetři možné chyby, například neexistující soubor nebo prázdný soubor.

### Volitelná vylepšení:
- Implementuj jednoduché grafické uživatelské rozhraní (GUI) pro výběr souboru.
- Umožni uživateli vypsat všechna slova s jejich frekvencí.
- Ulož výsledky do nového textového souboru.

---

## Úkol 2: Najít nejdelší slovo v souboru

### Popis úkolu:
Vytvoř program v jazyce C#, který:
1. Načte textový soubor zadaný uživatelem.
2. Analyzuje obsah souboru a zjistí nejdelší slovo v textu.
3. Ignoruje interpunkci a pracuje pouze s jednotlivými slovy.
4. Zobrazí nejdelší slovo spolu s jeho délkou. Pokud je více slov se stejnou délkou, vypíše všechna tato slova.

### Vstupy:
- Cesta k textovému souboru (zadá uživatel při spuštění programu).

### Výstupy:
- Nejdelší slovo/slova a jejich délka.

### Příklad:

Obsah souboru:
```
Programování je fascinující disciplína.
```

Výstup programu:
```
Nejdelší slovo: "Programování", délka: 13 znaků
```

### Technické požadavky:
1. Odstraň interpunkci a analyzuj čistá slova.
2. Ošetři možné chyby, jako je neexistující soubor nebo prázdný obsah.
3. Použij vhodné algoritmy a datové struktury, aby byl program přehledný a snadno udržovatelný.

### Volitelná vylepšení:
- Implementuj jednoduchý výběr souboru přes grafické uživatelské rozhraní (GUI).
- Umožni uživateli zvolit, zda se má brát ohled na rozdíly mezi velkými a malými písmeny.
- Zobraz všechny nalezené shody, pokud má více slov stejnou maximální délku.

---

