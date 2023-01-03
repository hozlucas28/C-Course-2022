
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
#include "Date.h" //Macros, Estructuras y Prototipos de Función.



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system ("chcp 65001 > nil");
    int daysToAdd;
    Date date, addDate;

    inputDateToValidate(&date);
    inputDaysToAdd("Ingrese la cantidad de días a sumar: ", &daysToAdd);
    addDaysToDate(&date, daysToAdd, &addDate);

    showAddedDate(&addDate);
    printf("\nLa diferencia de días entre las dos fechas es: %d.", differenceOfDaysBetweenDates(&date, &addDate));
    return 0;
}
