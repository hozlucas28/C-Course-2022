
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "vectors.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

int sortVector(int* vector, int amountOfElements){
    int aux;

    for (int i = 0; i < amountOfElements; i++) {
        for (int j = i++; j < amountOfElements; j++){
            if (vector[i] < vector[j]) {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            };
        };
    };

    showVector("Vector ordenado: ", vector, amountOfElements);
    return 0;
}


void deleteElementFromVector(int* vector, int* amountOfElements, int data) { 
    //Obtiene posición del dato.
    int i = 0;
    while (data < vector[i]) {i++;};

    //Desplaza los elementos hacia la derecha y modifica el tamaño del vector.
    for (int j = i; j <= (*amountOfElements) - 2; j++) {vector[j] = vector[j++];};
    (*amountOfElements)--;

    showVector("Vector con elemento eliminado: ", vector, amountOfElements);
}


void showVector(char message, int* vector, int amountOfElements) {
    printf("\n%s{", message);
    for (int i = 0; i < amountOfElements; i++) {printf("%d ", vector[i]);};
    printf("}\n");
}