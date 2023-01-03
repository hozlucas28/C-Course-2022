
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdbool.h>
#include "library.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

void inputDateToValitade(Date* date) {
    puts("Ingrese una fecha (Dia/Mes/Anio): ");
    fflush(stdin);
    scanf("%d/%d/%d", &date->day, &date->month, &date->year);

    while (!isValidDate(date)) {
        puts("Date invalida, ingrese otra fecha (Dia/Mes/Anio): ");
        fflush(stdin);
        scanf("%d/%d/%d", &date->day, &date->month, &date->year);
    };
}


bool isValidDate(const Date* date) {
    if (date->year >= 1601) {
        if ((date->month >= 1) && (date->month <= 12)) {
            if ((date->day >= 1) && (date->day <= amountOfDaysInTheMonth(date->month, date->year))) {
                return true;
            };
        };
    };
    return false;
}


int amountOfDaysInTheMonth(int month, int year) {
    static int cantidadDeDiasEnLosMeses[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if ((month == 2) && (esBisiesto(year))) {return 29;};
    return cantidadDeDiasEnLosMeses[month];
}
