
#ifndef FUNCTIONS_PROGRAM_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define FUNCTIONS_PROGRAM_H


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        char name[50];
        int price;
        int stock;
    } Product;
    

    /* --------------------------- Funciones Prototipo -------------------------- */

    void inputProducts(Product*, int*);
    void showVector(Product, int, size_t, void *);
#endif
