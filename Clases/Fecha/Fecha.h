
/* --------------------------------------------------------------------------
 * APUNTES:
 *          Utilizar las Macros en cuestiones simples, que ocupen una
 *          unica linea, como las declaradas en este archivo.
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
    #define FALSO   0
    #define VERDADERO   1
    #define esBisiesto(a)   (((a) % 4 == 0) && ((a) % 100 != 0)) || ((a) % 400 == 0)


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        int dia;
        int mes;
        int anio;
    } Fecha;


    /* --------------------------- Funciones Prototipo -------------------------- */

    Fecha ingresarFecha();
    int esFechaValida(Fecha fecha);
    int cantDiasMes(int mes, int anio);
#endif
