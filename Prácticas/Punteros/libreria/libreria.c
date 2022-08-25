
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdbool.h> //Biblioteca remota para retornos Booleanos.
#include "libreria.h" //Librería local de Macros, Estructuras y Prototipos de Función.



/* ------------------------- Funciones Desarrolladas ------------------------ */

void ingresarFechaValida (Fecha* fecha) { //Registra las entradas.
    puts("Ingrese una fecha (D/M/A): ");
    fflush(stdin);
    scanf("%d/%d/%d", &fecha->d, &fecha->m, &fecha->a);

    while (!esFechaValida(fecha)) {
        puts("Fecha invalida, ingrese otra fecha (D/M/A): ");
        fflush(stdin);
        scanf("%d/%d/%d", &fecha->d, &fecha->m, &fecha->a);
    };
}


_Bool esFechaValida (const Fecha* f) { //Verifica la fecha valida - Nivel General.
    if (f->a >= 1601) {
        if ((f->m >= 1) && (f->m <= 12)) {
            if ((f->d >= 1) && (f->d <= cantDiasMes(f->m, f->a))) {
                return true;
            };
        };
    };
    return false;
}


int cantDiasMes (int m, int a) { //Devuelve la cantidad de días, según el mes y el año.
    int cantDias;

    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 12:
            cantDias = 31;
            break;
        case 2:
            if (esBiciesto(a)) {cantDias = 29;} else {cantDias = 28;};
            break;
        default:
            cantDias = 30;
            break;
    };
    return cantDias;
}


_Bool esBiciesto (int a) { //Devuelve un valor Booleano, si el año es bisiesto.
    if (esBisiesto(a)) {return true;} else {return false;};
}
