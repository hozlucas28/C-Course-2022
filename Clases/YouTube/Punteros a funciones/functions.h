
#ifndef MAIN_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define MAIN_H


    /* ------------------------------- Estructuras ------------------------------ */
    
    typedef struct {
        int numeroUno;
        int numeroDos;
    } parNumeros;


   /* --------------------------- Funciones Prototipo -------------------------- */

    void ingresarNumeros(parNumeros*);
    void imprimirNumeros(parNumeros*);
    void sumarNumeros(parNumeros*);
    void restarNumeros(parNumeros*);
    void multiplicarNumeros(parNumeros*);
    void dividirNumeros(parNumeros*);


   /* ------------------------- Funciones Desarrolladas ------------------------ */

   void ingresarNumeros(parNumeros* vNumeros) {
        printf("Ingrese dos números (PRIMER NÚMERO | SEGUNDO NÚMERO): ");
        scanf("%d | %d", &vNumeros->numeroUno, &vNumeros->numeroDos);
   }

    void imprimirNumeros(parNumeros* vNumeros) {
        int numeroUno = vNumeros->numeroUno,
            numeroDos = vNumeros->numeroDos;
        
        
        printf("\nNúmeros ingresados: %d | %d\n", numeroUno, numeroDos);
    }

    void sumarNumeros(parNumeros* vNumeros) {
        int numeroUno = vNumeros->numeroUno,
            numeroDos = vNumeros->numeroDos,
            operacion = (numeroUno) + (numeroDos);
        
        
        printf("\n- Resultado de la suma (%d + %d): %d", numeroUno, numeroDos, operacion);
    }

    void restarNumeros(parNumeros* vNumeros) {
        int numeroUno = vNumeros->numeroUno,
            numeroDos = vNumeros->numeroDos,
            operacion = (numeroUno) - (numeroDos);
        
        
        printf("\n- Resultado de la resta (%d - %d): %d", numeroUno, numeroDos, operacion);
    }

    void multiplicarNumeros(parNumeros* vNumeros) {
        int numeroUno = vNumeros->numeroUno,
            numeroDos = vNumeros->numeroDos,
            operacion = (numeroUno) * (numeroDos);
        
        
        printf("\n- Resultado de la multiplicación (%d x %d): %d", numeroUno, numeroDos, operacion);
    }

    void dividirNumeros(parNumeros* vNumeros) {
        int *punteroNumeroUno = &vNumeros->numeroUno,
            *punteroNumeroDos = &vNumeros->numeroDos,
            numeroUno = *punteroNumeroUno, //¿POR QUE?
            numeroDos = *punteroNumeroDos; //¿POR QUE?
        if (numeroDos != 0) { //ESTO GENERO EL CONFLICTO.
            float operacion = (numeroUno) / (numeroDos); //NO ME MUESTRA LOS DECIMALES.
            printf("\n- Resultado de la división 1 (%d / %d): %.2f", numeroUno, numeroDos, operacion);
        } else {
            printf("¡Error! No es posible dividir un número por cero");
        };
    }
#endif
