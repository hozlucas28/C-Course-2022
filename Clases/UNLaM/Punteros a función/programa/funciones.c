
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

void cargarProds(Producto* vProd, int* ceProd) {
    puts("Ingrese un producto (nombre/precio/stock):\n");
    fflush(stdin);
    scanf("%s/%d/%d", &vProd->nombre, &vProd->precio, &vProd->stock);
}


void mostrarVec(Producto vec, int ce, size_t tamElem, CMP mostrarProd) {
    void ultimo = vec + (ce - 1) * tamElem;

    printf("Vector: [");
    for (void* i = vec; i < ultimo, i += tamElem) {
        cout << i << endl;
    };
    printf("].\n");
}