
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "vectores.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

int ordenarVector(int* vec, int ce){
    int aux;

    for (int i = 0; i < ce; i++) {
        for (int j = i++; j < ce; j++){
            if (vec[i] < vec[j]) {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            };
        };
    };

    mostrarVector("Vector ordenado: ", vec, ce);
    return 0;
}


void eliminarElementoVector(int* vec, int* ce, int dato) { 
    //Obtiene posición del dato.
    int i = 0;
    while (dato < vec[i]) {i++;};

    //Desplaza los elementos hacia la derecha y modifica el tamaño del vector.
    for (int j = i; j <= (*ce) - 2; j++) {vec[j] = vec[j++];};
    (*ce)--;

    mostrarVector("Vector con elemento eliminado: ", vec, ce);
}


void mostrarVector(char mensaje, int* vec, int ce) {
    printf("\n%s{", mensaje);
    for (int i = 0; i < ce; i++) {printf("%d ", vec[i]);};
    printf("}\n");
}