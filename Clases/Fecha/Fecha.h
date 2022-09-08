
/* --------------------------------------------------------------------------
 * APUNTES:
 *          Utilizar las Macros en cuestiones simples, que ocupen una
 *          única línea, como las declaradas en este archivo.
 * 
 * 
 * IMPORTANTE:
 *             - Es vital declarar el prototipo de cada función, explayada
 *               en el archivo: <Fecha.c>.
 *             - Este archivo fue creado con: <New/File.../Header>
 *               activando el 'Debug' y 'Release'.
-------------------------------------------------------------------------- */


#ifndef FECHA_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define FECHA_H
    #define esBisiesto(anio)   (((anio) % 4 == 0) && ((anio) % 100 != 0)) || ((anio) % 400 == 0)


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        int dia;
        int mes;
        int anio;
    } Fecha;


    /* --------------------------- Funciones Prototipo -------------------------- */
    
    void ingresarFechaAValidar (Fecha* fecha);
    void ingresarDiasASumar (const char* mensaje, int* numero);
    bool esFechaValida (const Fecha* fecha);
    void sumarDiasALaFecha (const Fecha* fecha, int dias, Fecha* fechaSuma);
    int diferenciaDeDiasEntreFechas (const Fecha* fecha1, const Fecha* fecha2);
    int cantidadDeDiasEnElMes (int mes, int anio);
    void mostrarFechaSumada (const Fecha* fecha);
#endif