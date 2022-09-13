
#ifndef LIBRERIA_FUNCIONES_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define LIBRERIA_FUNCIONES_H


    /* ------------------------------- Estructuras ------------------------------ */

    typedef int (*CMP) (const void*, const void*);
    

    /* --------------------------- Funciones Prototipo -------------------------- */

    void ordenarPorSeleccion(void*, int, size_t, CMP);
    void* buscarMenor(void*, void*, size_t, CMP);

#endif
