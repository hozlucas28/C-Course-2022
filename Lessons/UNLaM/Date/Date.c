
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
 *               archivo: <Date.h>.
 *             - Este archivo fue creado con: <New/File.../Source>
 *               seleccionando como 'Source' el lenguaje 'C', y activando
 *               el 'Debug' y 'Release'.
-------------------------------------------------------------------------- */

/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdbool.h>
#include "Date.h"

/* ------------------------- Funciones Desarrolladas ------------------------ */

void inputDateToValidate(Date* date) {
    puts("Ingrese una fecha (Dia/Mes/Anio):");
    fflush(stdin); 
    scanf("%d/%d/%d", &date->day, &date->month, &date->year);

    while (!isValidDate(date)) {
        puts("Date invalida, ingrese otra date (Dia/Mes/Anio): ");
        fflush(stdin);
        scanf("%d/%d/%d", &date->day, &date->month, &date->year);
    };
}


void inputDaysToAdd(const char* message, int* number) {
    puts(message);
    fflush(stdin);
    scanf("%d", number);

    while (*number <= 0) {
        puts("Número invalido. Ingrese un número positivo: ");
        fflush(stdin);
        scanf("%d", number);
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


void addDaysToDate(const Date* date, int days, Date* addDate) {
    *addDate = *date;
    addDate->day += days;

    while (addDate->day >= amountOfDaysInTheMonth(addDate->month, addDate->year)) {
        addDate->day -= amountOfDaysInTheMonth(addDate->month, addDate->year);
        addDate->month++;

        if (addDate->month > 12) {
            addDate->month = 1;
            addDate->year++;
        };
    };
}


int differenceOfDaysBetweenDates(const Date* firstDate, const Date* secondDate) {
    int differenceOfDays = secondDate->day - firstDate->day;

    for (
        int currentMonth = firstDate->month, currentYear = firstDate->year; //Variables.
        ((currentYear * 100) + currentMonth) < ((secondDate->year * 100) + secondDate->month); //Condiciones.
        currentYear = currentYear + currentMonth / 12, currentMonth %= 12, currentMonth++ //Ejecución por iteración.
    ) {
        differenceOfDays += amountOfDaysInTheMonth(currentMonth, currentYear); //Código.
    };
    return differenceOfDays;
}


int amountOfDaysInTheMonth(int month, int year) {
    static int amountOfDaysInMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((month == 2) && (isLeapYear(year))) {return 29;};
    return amountOfDaysInMonths[month];
}


void showAddedDate(const Date* date) {
    printf("La fecha sumada es: %d/%d/%d", date->day, date->month, date->year);
}