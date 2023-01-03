
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>



/* --------------------------- Funciones Prototipo -------------------------- */

void exchange(int* a, int* b);
int* seekMinor(int* start, int* end);
void sortBySelection(int* vector, int amountOfElements);
void showVector(int* vector, int amountOfElements);



/* ------------------------- Funciones Desarrolladas ------------------------ */

void exchange(int* a, int* b) {
    int aux = *a;

    *a = *b;
    *b = aux;
}


int* seekMinor(int* start, int* end) {
    int* minor = start;

    for (int* j = (start + 1); j <= end; j++) {
        if (*j < *minor) {minor = j;};
    };
    return minor;
}


void sortBySelection(int* vector, int amountOfElements) {
    int* minorDir;
    int* last = vector + (amountOfElements - 1);

    for (int* i = vector; i < last; i++) {
        minorDir = seekMinor(i, last);
        if (minorDir != i) {exchange(i, minorDir);};
    };
}


void showVector(int* vector, int amountOfElements) {
    printf("[");
    for (int i = 0; i < amountOfElements; i++) {
        printf(" %d ", vector[i]);
    };
    printf("]\n");
}



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    int vector[10] = {5, 3, 9, 8, 10, 6, 7, 2, 1, 4};

    showVector(vector, 10);
    sortBySelection(vector, 10);
    showVector(vector, 10);
    return 0;
}