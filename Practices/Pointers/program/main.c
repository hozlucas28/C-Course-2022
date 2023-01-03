
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "../library/library.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    Date date;

    inputDateToValitade(&date);     
    printf("La fecha: %d/%d/%d es valida.", date.day, date.month, date.year);
    return 0;
}
