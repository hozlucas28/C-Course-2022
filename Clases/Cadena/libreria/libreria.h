#ifndef LIBRERIA_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define LIBRERIA_H


    /* ------------------------------- Inclusiones ------------------------------ */

    #include <stdbool.h>


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        char* cursor;
        bool finSecuencia;
    } SecuenciaPalabras;

    typedef struct {
        char* inicio;
        char* fin;
    } Palabra;


    /* --------------------------- Funciones Prototipo -------------------------- */

    void crearSecuenciaPalabras (SecuenciaPalabras* secuencia, char* cadena);
    bool leerPalabra (SecuenciaPalabras* secuencia, Palabra* palabra);
    bool finSecuencia (const SecuenciaPalabras* secuencia);
    void mostrarPalabra (const Palabra* palabra);
    bool esLetra (char c);
#endif
