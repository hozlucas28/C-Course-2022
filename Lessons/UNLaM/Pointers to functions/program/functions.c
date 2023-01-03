
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

void inputProducts(Product* vProduct, int* amountOfElements) {
    puts("Ingrese un producto (nombre/precio/stock):\n");
    fflush(stdin);
    scanf("%s/%d/%d", &vProduct->name, &vProduct->price, &vProduct->stock);
}


void showVector(Product vector, int amountOfElements, size_t elementSize, CMP showProduct) {
    void last = vector + (amountOfElements - 1) * elementSize;

    printf("Vector: [");
    for (void* i = vector; i < last, i += elementSize) {
        cout << i << endl;
    };
    printf("].\n");
}