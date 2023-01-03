
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

    char palindromeWord[] = "Oso"; //Oso; Martina; Neuquén.
    int amountOfCharacters = strlen(palindromeWord);

    (isPalindrome(palindromeWord, amountOfCharacters))?
        printf("La palabra %s es palíndroma.", palindromeWord):
        printf("La palabra %s no es palíndroma.", palindromeWord);
    return 0;
}
