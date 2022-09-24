
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"
#include "../libreria/funciones.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    
    int ceProd;
    Producto vProd[100];

    cargarProds(vProd, &ceProd);
    ordenarPorSeleccion(vProd, ceProd, sizeof(Producto), cmpProdStockCod);
    mostrarVec(vProd, ceProd, sizeof(Producto), mostrarProd);
    return 0;
}
