
/* --------------------------------------------------------------------------
 * APUNTES:
 *          Utilizar las Macros en cuestiones simples, que ocupen una
 *          única línea, como las declaradas en este archivo.
 * 
 * 
 * IMPORTANTE:
 *             - Es vital declarar el prototipo de cada función, explayada
 *               en el archivo: <Date.c>.
 *             - Este archivo fue creado con: <New/File.../Header>
 *               activando el 'Debug' y 'Release'.
-------------------------------------------------------------------------- */


#ifndef DATE_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define DATE_H
    #define isLeapYear(year)   (((year) % 4 == 0) && ((year) % 100 != 0)) || ((year) % 400 == 0)


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        int day;
        int month;
        int year;
    } Date;


    /* --------------------------- Funciones Prototipo -------------------------- */

    void inputDateToValidate(Date *date);
    void inputDaysToAdd(const char *message, int *number);
    bool isValidDate(const Date *date);
    void addDaysToDate(const Date *date, int days, Date *addDate);
    int differenceOfDaysBetweenDates(const Date *firstDate, const Date *secondDate);
    int amountOfDaysInTheMonth(int month, int year);
    void showAddedDate(const Date* date);
#endif