#include <stdio.h>
#include <string.h>

#define N 20 // Το πλήθος των υπολογιστών

// Ορισμός της δομής
typedef struct {
    char brand[50];
    char code[20];
    char model[50];
    double price;
} Laptop;

// Δήλωση της συνάρτησης (πρωτότυπο)
Laptop* find_laptop(Laptop table[], int size, double val);

int main() {
    Laptop laptops[N];
    double search_price;
    Laptop *result;
    int i;

    // Εισαγωγή στοιχείων για 20 laptops
    // Σημείωση: Για έλεγχο μπορείς να αλλάξεις το N σε 2 ή 3 στο define παραπάνω
    printf("--- Εισαγωγή Δεδομένων ---\n");
    for (i = 0; i < N; i++) {
        printf("\nLaptop %d:\n", i + 1);

        printf("Brand: ");
        scanf("%s", laptops[i].brand);

        printf("Code: ");
        scanf("%s", laptops[i].code);

        printf("Model: ");
        scanf("%s", laptops[i].model);

        printf("Price: ");
        scanf("%lf", &laptops[i].price);
    }

    // Αναζήτηση
    printf("\nDWSE TIMH GIA ANAZHTHSH: ");
    scanf("%lf", &search_price);

    // Κλήση της συνάρτησης
    result = find_laptop(laptops, N, search_price);

    // Έλεγχος αποτελέσματος
    if (result != NULL) {
        printf("\n--- BRETHIKE ---\n");
        printf("Brand: %s\n", result->brand);
        printf("Code: %s\n", result->code);
        printf("Model: %s\n", result->model);
        printf("Price: %.2f\n", result->price);
    } else {
        printf("\nDen vrethike laptop me timi %.2f\n", search_price);
    }

    return 0;
}

// Υλοποίηση της συνάρτησης αναζήτησης
Laptop* find_laptop(Laptop table[], int size, double val) {
    int i;
    for (i = 0; i < size; i++) {
        // Ελέγχουμε αν η τιμή είναι ίδια
        if (table[i].price == val) {
            return &table[i]; // Επιστρέφουμε τη διεύθυνση του στοιχείου
        }
    }
    return NULL; // Αν τελειώσει ο βρόχος και δεν βρεθεί τίποτα
}