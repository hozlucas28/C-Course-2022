#ifndef LIBRARY_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define LIBRARY_H
    #define isLeapYear(year)   (((year) % 4 == 0) && ((year) % 100 != 0)) || ((year) % 400 == 0)


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        int day;
        int month;
        int year;
    } Date;


    /* --------------------------- Funciones Prototipo -------------------------- */

    void inputDateToValitade(Date* date);
    bool isValidDate(const Date* date);
    int amountOfDaysInTheMonth(int month, int year);
#endif
