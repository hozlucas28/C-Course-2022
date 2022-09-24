
#ifndef PRODUCTO_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define PRODUCTO_H


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        char codigo[11];
        char descripcion[51];
        float precio;
        int stock;
    } Producto;
#endif
