//El archivo viene por default en blanco.

#include <stdio.h> //Se tuvo que agregar
#include <stdbool.h> //Se tuvo que agregar
#include "libreria.h" //Se tuvo que agregar


void ingresarFechaValida (Fecha* fecha) {
    puts("Ingrese una fecha (D/M/A): ");
    fflush(stdin);
    scanf("%d/%d/%d", &fecha->d, &fecha->m, &fecha->a);

    while (!esFechaValida(fecha)) {
        puts("Fecha invalida, ingrese otra fecha (D/M/A): ");
        fflush(stdin);
        scanf("%d/%d/%d", &fecha->d, &fecha->m, &fecha->a);
    };
}

_Bool esFechaValida (const Fecha* f){
    if(f->a >= 1601){
        if((f->m >= 1)&&(f->m <= 12)){
            if((f->d >= 1) && (f->d <= cantDiasMes(f->m, f->a))){
                return true;
            }
        }
    }
    return false;
}

int cantDiasMes (int m, int a) {
    int cantDias;

    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 12:
            cantDias = 31;
            break;
        case 2:
            if(esBiciesto(a)){
                cantDias=29;
            } else{
                cantDias=28;
            }
            break;
        default:
            cantDias = 30;
            break;

    };

    return cantDias;
}

_Bool esBiciesto(int a){
    if((((a) % 4 == 0) && ((a) % 100 != 0)) || ((a) % 400 == 0)){
        return true;
    }else{
        return false;
    }

}
