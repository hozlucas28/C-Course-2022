
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "functions.c"
#include "../library/functions.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    
    int amountOfProducts;
    Product vProduct[100];

    inputProducts(vProduct, &amountOfProducts);
    orderBySelection(vProduct, amountOfProducts, sizeof(Product), cmpProductStockCode);
    showVector(vProduct, amountOfProducts, sizeof(Product), showVector());
    return 0;
}
