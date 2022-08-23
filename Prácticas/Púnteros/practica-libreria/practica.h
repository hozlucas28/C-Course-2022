#ifndef PRACTICA_H
#define PRACTICA_H
#define esBisiesto(a)   (((a) % 4 == 0) && ((a) % 100 != 0)) || ((a) % 400 == 0)


typedef struct {

    int d;
    int m;
    int a;

} Fecha;

void ingresarFechaValida (Fecha* fecha);
_Bool esFechaValida (const Fecha* fecha);
int cantDiasMes (int m, int a);
_Bool esBiciesto(int a);
 


#endif // PRACTICA_H
