
/* --------------------------------------------------------------------------
 * APUNTES:
 *          <%d> En en put, lee únicamente los números enteros hasta que el
 *               carácter ingresado no lo sea.
 * 
 *          <static> Inicializa la variable una única vez, evitando que la
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
#include <stdbool.h>
#include "Fecha.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

void ingresarFechaAValidar (Fecha* fecha) {
    puts("Ingrese una fecha (Dia/Mes/Anio):");
    fflush(stdin); 
    scanf("%d/%d/%d", &fecha->dia, &fecha->mes, &fecha->anio);

    while (!esFechaValida(fecha)) {
        puts("Fecha invalida, ingrese otra fecha (Dia/Mes/Anio): ");
        fflush(stdin);
        scanf("%d/%d/%d", &fecha->dia, &fecha->mes, &fecha->anio);
    };
}


void ingresarDiasASumar (const char* mensaje, int* numero) {
    puts(mensaje);
    fflush(stdin);
    scanf("%d", numero);

    while (*numero <= 0) {
        puts("Número invalido. Ingrese un número positivo: ");
        fflush(stdin);
        scanf("%d", numero);
    };
}


bool esFechaValida (const Fecha* fecha) {
    if (fecha->anio >= 1601) {
        if ((fecha->mes >= 1) && (fecha->mes <= 12)) {
            if ((fecha->dia >= 1) && (fecha->dia <= cantidadDeDiasEnElMes(fecha->mes, fecha->anio))) {
                return true;
            };
        };
    };
    return false;
}


void sumarDiasALaFecha (const Fecha* fecha, int dias, Fecha* fechaSuma) {
    *fechaSuma = *fecha;
    fechaSuma->dia += dias;

    while (fechaSuma->dia >= cantidadDeDiasEnElMes(fechaSuma->mes, fechaSuma->anio)) {
        fechaSuma->dia -= cantidadDeDiasEnElMes(fechaSuma->mes, fechaSuma->anio);
        fechaSuma->mes++;

        if (fechaSuma->mes > 12) {
            fechaSuma->mes = 1;
            fechaSuma->anio++;
        };
    };
}


int diferenciaDeDiasEntreFechas (const Fecha* fecha1, const Fecha* fecha2) {
    int difereciaDeDias = fecha2->dia - fecha1->dia;

    for (
        int mesActual = fecha1->mes, anioActual = fecha1->anio; //Variables.
        ((anioActual * 100) + mesActual) < ((fecha2->anio * 100) + fecha2->mes); //Condiciones.
        anioActual = anioActual + mesActual / 12, mesActual %= 12, mesActual++ //Ejecución por iteración.
    ) {difereciaDeDias += cantidadDeDiasEnElMes(mesActual, anioActual);};
    return difereciaDeDias;
}


int cantidadDeDiasEnElMes (int mes, int anio) {
    static int cantidadDeDiasEnLosMeses[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((mes == 2) && (esBisiesto(anio))) {return 29;};
    return cantidadDeDiasEnLosMeses[mes];
}


void mostrarFechaSumada(const Fecha* fecha) {
    printf("La fecha sumada es: %d/%d/%d", fecha->dia, fecha->mes, fecha->anio);
}