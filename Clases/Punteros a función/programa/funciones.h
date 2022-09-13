
#ifndef PROGRAMA_FUNCIONES_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define PROGRAMA_FUNCIONES_H


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        char nombre[50];
        int precio;
        int stock;
    } Producto;
    

    /* --------------------------- Funciones Prototipo -------------------------- */

    void cargarProds(Producto*, int*);
    void mostrarVec(Producto, int, int, void*);
#endif
