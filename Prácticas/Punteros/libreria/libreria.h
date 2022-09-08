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

    void ingresarFechaAValidar (Fecha* fecha); //Ingresar fecha.
    
    bool esFechaValida (const Fecha* fecha); //Validar fecha.
    
    int cantDiasMes (int mes, int anio); //Devolver la cantidad de días, según el mes y el año.
#endif
