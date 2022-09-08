
/* --------------------------------------------------------------------------
 * APUNTES:
 *          XXX.
 * 
 * 
 * IMPORTANTE:
 *             - Las variables de tipo <char> son punteros por defecto.
-------------------------------------------------------------------------- */

/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "functions.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");

    char palabraPalindroma[] = "Oso"; //Oso; Martina; Neuquén.
    int cantCaracteres = strlen(palabraPalindroma);

    (esPalindroma(palabraPalindroma, cantCaracteres))?
        printf("La palabra %s es palíndroma.", palabraPalindroma):
        printf("La palabra %s no es palíndroma.", palabraPalindroma);
    return 0;
}
