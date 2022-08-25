/* ------------------------------- Inclusiones ------------------------------ */
#include <stdio.h>
#include <stdlib.h>
#include "../libreria/libreria.h" //Librería local con funciones.



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    Fecha fechaMain;
    ingresarFechaValida(&fechaMain); 
    printf("La fecha: %d/%d/%d es valida.", fechaMain.d, fechaMain.m, fechaMain.a);
    return 0;
}
