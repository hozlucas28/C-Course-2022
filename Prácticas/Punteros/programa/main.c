
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "../libreria/libreria.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    Fecha fechaMain;

    ingresarFechaAValidar(&fechaMain);     
    printf("La fecha: %d/%d/%d es valida.", fechaMain.dia, fechaMain.mes, fechaMain.anio);
    return 0;
}
