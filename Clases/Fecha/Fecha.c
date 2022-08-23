
/* --------------------------------------------------------------------------
 * APUNTES:
 *          <%d> En en put, lee unicamente los números enteros hasta que el
 *               caracter ingresado no lo sea.
 * 
 *          <static> Inicializa la variable una unica vez, evitando que la
 *                   misma sea inicializada por cada llamado.
 * 
 * 
 * IMPORTANTE:
 *             - Es vital declarar el prototipo de cada función, en el
 *               archivo: <Fecha.h>.
 *             - Este archivo fue creado con: <New/File.../Source>
 *               seleccionando como 'Source' el lenguaje 'C', y activando
 *               el 'Debug' y 'Release'.
-------------------------------------------------------------------------- */


/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include "Fecha.h"


/* ------------------------- Funciones Desarrolladas ------------------------ */

Fecha ingresarFecha() {
    Fecha f;
    puts('Ingrese una fecha (D/M/A):');
    fflush(stdin);
    scanf('%d/%d/%d', &f.dia, &f.mes, &f.anio);
    return f;
}


int esFechaValida(Fecha fecha) {
    if (fecha.anio >= 1601) {
        if ((fecha.mes >= 1) && (fecha.mes <= 12)) {
            if ((fecha.dia >= 1) && (fecha.dia <= cantDiasMes(fecha.mes, fecha.anio))) {
                return VERDADERO;
            };
        };
    };
    return FALSO;
}


int cantDiasMes(int mes, int anio) {
    static int cantDiasMes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((mes == 2) && (esBisiesto(anio))) {
        return 29;
    };
    return cantDiasMes[mes];
}
