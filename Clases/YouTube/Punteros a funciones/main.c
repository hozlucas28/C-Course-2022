
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>

// Propias
#include "functions.h"

/* ---------------------------- Código Principal ---------------------------- */

int main()
{
    system("chcp 65001 > nil");

    parNumeros vNumeros[100];

    // void (*ingresarNumeros)(parNumeros*); //¿POR QUE?
    void (*punteroImprimirNumeros)(parNumeros *);
    void (*punteroSumarNumeros)(parNumeros *);
    void (*punteroRestarNumeros)(parNumeros *);
    void (*punteroMultiplicarNumeros)(parNumeros *);
    void (*punteroDividirNumeros)(parNumeros *);

    punteroImprimirNumeros = &imprimirNumeros;
    punteroSumarNumeros = &sumarNumeros;
    punteroRestarNumeros = &restarNumeros;
    punteroMultiplicarNumeros = &multiplicarNumeros;
    punteroDividirNumeros = &dividirNumeros;

    //(*ingresarNumeros)(vNumeros); //¿POR QUE?
    ingresarNumeros(vNumeros);
    (*punteroImprimirNumeros)(vNumeros);
    (*punteroSumarNumeros)(vNumeros);
    (*punteroRestarNumeros)(vNumeros);
    (*punteroMultiplicarNumeros)(vNumeros);
    (*punteroDividirNumeros)(vNumeros);
    return 0;
}
