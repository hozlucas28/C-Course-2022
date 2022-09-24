
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
#include "Fecha.h" //Macros, Estructuras y Prototipos de Función.



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    int diasASumar;
    Fecha fecha, fechaSuma;

    ingresarFechaAValidar(&fecha);
    ingresarDiasASumar("Ingrese la cantidad de días a sumar: ", &diasASumar);
    sumarDiasALaFecha(&fecha, diasASumar, &fechaSuma);

    mostrarFechaSumada(&fechaSuma);
    printf("\nLa diferencia de días entre las dos fechas es: %d.", diferenciaDeDiasEntreFechas(&fecha, &fechaSuma));
    return 0;
}
