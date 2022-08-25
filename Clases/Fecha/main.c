
/* --------------------------------------------------------------------------
 * APUNTES:
 *          XXX.
 * 
 * 
 * IMPORTANTE:
 *             - Este archivo fue creado con: <New/Project.../
 *               Console application> seleccionando el lenguaje 'C'.
-------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/*                                 INCLUSIONES                                */
/* -------------------------------------------------------------------------- */

#include <stdio.h>
#include "Fecha.h" //Librería local de Macros, Estructuras y Prototipos de Función.



/* -------------------------------------------------------------------------- */
/*                              Código Principal                              */
/* -------------------------------------------------------------------------- */

int main() {
    /* ------------------------- Variables y Estructuras ------------------------ */
    int diasASumar;
    Fecha fecha, fechaSuma;


    /* -------------------------------- Entradas -------------------------------- */

    ingresarFechaAValidar(&fecha);
    ingresarDiasASumar("Ingrese la cantidad de dias a sumar: ", &diasASumar);


    /* -------------------------------- Procesos -------------------------------- */

    sumarDiasALaFecha(&fecha, diasASumar, &fechaSuma);


    /* --------------------------------- Salidas -------------------------------- */

    printf("La fecha sumada es: ");
    mostrarFechaSumada(&fechaSuma);

    printf("\nLa diferencia de dias entre las dos fechas es: %d.", diferenciaDeDiasEntreFechas(&fecha, &fechaSuma));
    return 0;
}
