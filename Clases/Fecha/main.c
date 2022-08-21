
/* --------------------------------------------------------------------------
 * APUNTES:
 *          XXX.
 * 
 * 
 * IMPORTANTE:
 *             - Este archivo fue creado con: <New/Project.../
 *               Console application> seleccionando el lenguaje 'C'.
-------------------------------------------------------------------------- */


/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include "Fecha.h"


/* ---------------------------- Código Principal ---------------------------- */

int main() {
    Fecha f = ingresarFecha();
    
    if (esFechaValida(f)) {
        printf("%d/%d/%d es una fecha valida.\n", f.dia, f.mes, f.anio); //Salida verdadera.
    } else {
        printf("%d/%d/%d no es una fecha valida.\n", f.dia, f.mes, f.anio); //Salida falsa.
    };
    return 0;
}
