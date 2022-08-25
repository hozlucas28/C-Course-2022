
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdbool.h> //Biblioteca remota para retornos Booleanos.
#include "libreria.h" //Librería local de Macros, Estructuras y Prototipos de Función.



/* ------------------------- Funciones Desarrolladas ------------------------ */

void ingresarFechaValida (Fecha* fecha) { //Registra las entradas.
    puts("Ingrese una fecha (D/M/A): ");
    fflush(stdin);
    scanf("%d/%d/%d", &fecha->dia, &fecha->mes, &fecha->anio);

    while (!esFechaValida(fecha)) {
        puts("Fecha invalida, ingrese otra fecha (D/M/A): ");
        fflush(stdin);
        scanf("%d/%d/%d", &fecha->dia, &fecha->mes, &fecha->anio);
    };
}


_Bool esFechaValida (const Fecha* fecha) { //Verifica la fecha valida - Nivel General.
    if (fecha->anio >= 1601) {
        if ((fecha->mes >= 1) && (fecha->mes <= 12)) {
            if ((fecha->dia >= 1) && (fecha->dia <= cantDiasMes(fecha->mes, fecha->anio))) {
                return true;
            };
        };
    };
    return false;
}


int cantDiasMes (int mes, int anio) { //Devuelve la cantidad de días, según el mes y el año.
    static int cantDiasMes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if ((mes == 2) && (esBisiesto(anio))) {return 29;};
    return cantDiasMes[mes];
}
