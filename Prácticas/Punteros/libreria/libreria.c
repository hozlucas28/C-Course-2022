
/* -------------------------------------------------------------------------- */
/*                                 INCLUSIONES                                */
/* -------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdbool.h> //Biblioteca remota para retornos Booleanos.
#include "libreria.h" //Librería local de Macros, Estructuras y Prototipos de Función.



/* -------------------------------------------------------------------------- */
/*                           FUNCIONES DESARROLLADAS                          */
/* -------------------------------------------------------------------------- */

/* -------------------------------- Entradas -------------------------------- */

//Fecha.
void ingresarFechaAValidar (Fecha* fecha) {
    puts("Ingrese una fecha (Dia/Mes/Anio): ");
    fflush(stdin);
    scanf("%d/%d/%d", &fecha->dia, &fecha->mes, &fecha->anio);

    while (!esFechaValida(fecha)) {
        puts("Fecha invalida, ingrese otra fecha (Dia/Mes/Anio): ");
        fflush(stdin);
        scanf("%d/%d/%d", &fecha->dia, &fecha->mes, &fecha->anio);
    };
}



/* ----------------------------- Verificaciones ----------------------------- */

//Validar fecha.
_Bool esFechaValida (const Fecha* fecha) {
    if (fecha->anio >= 1601) {
        if ((fecha->mes >= 1) && (fecha->mes <= 12)) {
            if ((fecha->dia >= 1) && (fecha->dia <= cantDiasMes(fecha->mes, fecha->anio))) {
                return true;
            };
        };
    };
    return false;
}



/* --------------------------------- Salidas -------------------------------- */

//Devuelve la cantidad de días, según el mes y el año.
int cantDiasMes (int mes, int anio) {
    static int cantidadDeDiasEnLosMeses[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if ((mes == 2) && (esBisiesto(anio))) {return 29;};
    return cantidadDeDiasEnLosMeses[mes];
}
