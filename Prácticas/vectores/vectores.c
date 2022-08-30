
/* -------------------------------------------------------------------------- */
/*                                 INCLUSIONES                                */
/* -------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "vectores.h"



/* -------------------------------------------------------------------------- */
/*                                 DEFINCIONES                                */
/* -------------------------------------------------------------------------- */

#define DEBUG true
#define DEBUG_CODE(a, b) printf("\nVector de entrada (desordenado): {"); \
    for(int i = 0; i < ce; i++){printf("%d ", vec[i]);}; \
    printf("}.\n "); \



/* -------------------------------------------------------------------------- */
/*                           FUNCIONES DESARROLLADAS                          */
/* -------------------------------------------------------------------------- */

int ordenarVector(int* vec, int ce){ //Ordenar vector.
    int aux;

    if (DEBUG) {
        printf("\nVector de entrada (desordenado): {");
        for(int i = 0; i < ce; i++){printf("%d ", vec[i]);};
        printf("}.\n ");
    };

    for(int i=0;i<ce;i++){
        for(int j=i+1;j<ce;j++){

            if(vec[i] < vec[j]){
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;

            }

        }
    }

    printf("\nVector de salida (ordenado): { ");
    for(int i=0; i<ce;i++){
        printf("%d ",vec[i]);
    }
    printf("}\n ");
    return 0;
}


void eliminarElementoVector(int* vec, int* ce, int dato) { //Eliminar elemento del vector.

    //Obtiene posición del dato.
    int i = 0;
    while (dato < vec[i]) {i++;};

    //Remplaza con el valor del elemento a la derecha, cada elemento.
    for (int j = i; j <= (*ce) - 2; j++) {
        vec[j] = vec[j+1];
    }

    (*ce)--; //Modifica el tamaño del vector.

    if (DEBUG) {
        printf("\nVector de entrada (elemento eliminado): {");
        for(int i = 0; i < (*ce); i++){printf("%d ", vec[i]);};
        printf("}.\n ");
    };
}


void eliminarElementosDuplicadosVector(int* vec, int* ce, int dato) { //Eliminar elemento duplicado del vector.

}