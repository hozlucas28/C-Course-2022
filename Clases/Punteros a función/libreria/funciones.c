
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

void ordenarPorSeleccion(void* vec, int ce, size_t tamElem, CMP cmp) {
    void* menor, ultimo = vec + (ce - 1) * tamElem;

    for (void* i = vec; i < ultimo; i += tamElem) {
        menor = buscarMenor(i, ultimo, tamElem, cmp);
        if (m != i) {intercambiar(menor, i, tamElem);}; //FALTA FUNCIÓN.
    };
}


void* buscarMenor(void* inicio, void* fin, size_t tamElem, CMP cmp) {
    void* menor = inicio;

    for (void* j = inicio; j <= fin; j += tamElem) {
        if (CMP(j, menor) < 0) {menor = j;};
    };
    return menor;
}