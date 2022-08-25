/* ------------------------------- Inclusiones ------------------------------ */
#include <stdio.h>
#include <stdlib.h>
#include "../libreria/libreria.h" //Librería local con funciones.



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    Fecha fechaMain;
    ingresarFechaValida(&fechaMain); 
    printf("La fecha: %d/%d/%d es valida.", fechaMain.dia, fechaMain.mes, fechaMain.anio);
    return 0;
}
