
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>



/* --------------------------- Funciones Prototipo -------------------------- */

void intercambiar (int* a, int* b);
int* vecBuscarMenor (int* inicio, int* fin);
void vecOrdenarPorSeleccion (int* vector, int cantElementos);
void mostrarVector (int* vector, int cantElementos);



/* ------------------------- Funciones Desarrolladas ------------------------ */

void intercambiar (int* a, int* b) {
    int aux = *a;

    *a = *b;
    *b = aux;
}


int* vecBuscarMenor (int* inicio, int* fin) {
    int* menor = inicio;

    for (int* j = (inicio + 1); j <= fin; j++) {
        if (*j < *menor) {menor = j;};
    };
    return menor;
}


void vecOrdenarPorSeleccion (int* vector, int cantElementos) {
    int* direccionDelMenor;
    int* ultimo = vector + (cantElementos - 1);

    for (int* i = vector; i < ultimo; i++) {
        direccionDelMenor = vecBuscarMenor(i, ultimo);
        if (direccionDelMenor != i) {intercambiar(i, direccionDelMenor);};
    };
}


void mostrarVector (int* vector, int cantElementos) {
    printf("[");
    for (int i = 0; i < cantElementos; i++) {
        printf(" %d ", vector[i]);
    };
    printf("]\n");
}



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    int vector[10] = {5, 3, 9, 8, 10, 6, 7, 2, 1, 4};

    mostrarVector(vector, 10);
    vecOrdenarPorSeleccion(vector, 10);
    mostrarVector(vector, 10);
    return 0;
}