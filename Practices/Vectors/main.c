
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "vectors.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    int vec[] = {12, 5, 47, 6, 36, 2, 1, 6, 48, 32, 25, 6}, ce = 12;

    sortVector(vec, ce);
    deleteElementFromVector(vec, &ce, 6);
    deleteDuplicateElementsFromVector(vec, &ce, 6);
}
