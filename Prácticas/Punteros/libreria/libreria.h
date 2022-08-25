#ifndef LIBRERIA_H
    /* ------------------------------ Definiciones ------------------------------ */
    #define LIBRERIA_H
    #define esBisiesto(a)   (((a) % 4 == 0) && ((a) % 100 != 0)) || ((a) % 400 == 0)


    /* ------------------------------- Estructuras ------------------------------ */
    typedef struct {
        int d;
        int m;
        int a;
    } Fecha;


    /* --------------------------- Funciones Prototipo -------------------------- */

    void ingresarFechaValida(Fecha* fecha); //Registra las entradas.
    _Bool esFechaValida(const Fecha* fecha); //Verifica la fecha valida - Nivel General.
    
    _Bool esBiciesto(int a); //Devuelve un valor Booleano, si el año es bisiesto.
    int cantDiasMes(int m, int a); //Devuelve la cantidad de días, según el mes y el año.
#endif
