
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libreria.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

void crearSecuenciaPalabras(SecuenciaPalabras* secuencia, char* cadena) {
    secuencia->cursor = cadena;
    secuencia->finSecuencia = false;
}


bool leerPalabra(SecuenciaPalabras* secuencia, Palabra* palabra) {
    char* cursor = secuencia->cursor;
    while (*cursor && !esLetra(*cursor)) {
        cursor++;
    };

    if (!*cursor) {
        secuencia->finSecuencia = true;
        secuencia->cursor = cursor;
        return false;
    };

    palabra->inicio = cursor;

    while (*cursor && esLetra(*cursor)) {
        cursor++;
    };

    palabra->fin = cursor - 1;
    secuencia->cursor = cursor;
    return true;
}


bool finSecuencia(const SecuenciaPalabras* secuencia) {
    return secuencia->finSecuencia;
}


void mostrarPalabra(const Palabra* palabra) {
    for (char* c = palabra->inicio; c <= palabra->fin; c++) {
        putchar(*c);
    };
}


bool esLetra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}