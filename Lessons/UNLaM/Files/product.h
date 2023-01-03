
#ifndef PRODUCT_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define PRODUCT_H


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        char code[11];
        char description[51];
        float price;
        int stock;
    } Product;
#endif
