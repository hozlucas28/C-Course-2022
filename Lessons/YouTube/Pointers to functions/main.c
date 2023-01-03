
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>

// Propias
#include "functions.h"

/* ---------------------------- Código Principal ---------------------------- */

int main()
{
    system("chcp 65001 > nil");

    evenNumbers vNumbers[100];

    // void (*inputNumbers)(evenNumbers*); //¿POR QUE?
    void (*pShowNumbers)(evenNumbers *);
    void (*pAddNumbers)(evenNumbers *);
    void (*pSubtractNumbers)(evenNumbers *);
    void (*pMultiplyNumbers)(evenNumbers *);
    void (*pDivideNumbers)(evenNumbers *);

    pShowNumbers = &showNumbers;
    pAddNumbers = &addNumbers;
    pSubtractNumbers = &subtractNumbers;
    pMultiplyNumbers = &multiplyNumbers;
    pDivideNumbers = &divideNumbers;

    //(*inputNumbers)(vNumbers); //¿POR QUE?
    inputNumbers(vNumbers);
    (*pShowNumbers)(vNumbers);
    (*pAddNumbers)(vNumbers);
    (*pSubtractNumbers)(vNumbers);
    (*pMultiplyNumbers)(vNumbers);
    (*pDivideNumbers)(vNumbers);
    return 0;
}
