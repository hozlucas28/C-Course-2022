#ifndef LIBRERIA_H
    /* ------------------------------ Definiciones ------------------------------ */
    #define LIBRERIA_H
    #define esBisiesto(anio)   (((anio) % 4 == 0) && ((anio) % 100 != 0)) || ((anio) % 400 == 0)


    /* ------------------------------- Estructuras ------------------------------ */
    typedef struct {
        int dia;
        int mes;
        int anio;
    } Fecha;


    /* --------------------------- Funciones Prototipo -------------------------- */

    void ingresarFechaValida(Fecha* fecha); //Registra las entradas.
    _Bool esFechaValida(const Fecha* fecha); //Verifica la fecha valida - Nivel General.

    int cantDiasMes(int mes, int anio); //Devuelve la cantidad de días, según el mes y el año.
#endif
