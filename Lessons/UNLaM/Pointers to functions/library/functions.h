
#ifndef FUNCTIONS_LIBRARY_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define FUNCTIONS_LIBRARY_H


    /* ------------------------------- Estructuras ------------------------------ */

    typedef int (*CMP) (const void*, const void*);
    

    /* --------------------------- Funciones Prototipo -------------------------- */

    void orderBySelection(void*, int, size_t, CMP);
    void* seekMinor(void*, void*, size_t, CMP);

#endif
