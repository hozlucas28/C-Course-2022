#include <stdio.h>
#include <stdlib.h>
#include "../libreria/libreria.h" //Se tuvo que incluir.


int main()
{
    Fecha fechaMain;

   ingresarFechaValida(&fechaMain);

    printf("%d/%d/%d",fechaMain.d,fechaMain.m,fechaMain.a);

    return 0;
}
