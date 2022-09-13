#ifndef FUNCTIONS_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define FUNCTIONS_H


    /* --------------------------- Funciones Prototipo -------------------------- */

    bool esPalindroma(char* dirPalabra, int cantCaracteres);


    /* ------------------------- Funciones Desarrolladas ------------------------ */

    bool esPalindroma(char* dirPalabra, int cantCaracteres) {
        const char* derecha = dirPalabra + cantCaracteres - 1;
        const char* izquierda = dirPalabra;

        while ((izquierda < derecha) && (tolower(*izquierda) == tolower(*derecha))) {
            derecha--;
            izquierda++;
        };
        return (izquierda >= derecha);
    }
#endif
