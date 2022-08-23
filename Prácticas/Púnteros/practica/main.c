#include <stdio.h>
#include <stdlib.h>
#include "../practica-libreria/practica.h"


int main()
{
    Fecha fechaMain;

   ingresarFechaValida(&fechaMain);

    printf('%d/%d/%d',fechaMain.d,fechaMain.m,fechaMain.a);

    return 0;
}
