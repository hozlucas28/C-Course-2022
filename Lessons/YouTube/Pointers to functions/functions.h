
#ifndef MAIN_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define MAIN_H


    /* ------------------------------- Estructuras ------------------------------ */
    
    typedef struct {
        int firstNumber;
        int secondNumber;
    } evenNumbers;


   /* --------------------------- Funciones Prototipo -------------------------- */

    void inputNumbers(evenNumbers*);
    void showNumbers(evenNumbers*);
    void addNumbers(evenNumbers*);
    void subtractNumbers(evenNumbers*);
    void multiplyNumbers(evenNumbers*);
    void divideNumbers(evenNumbers*);


   /* ------------------------- Funciones Desarrolladas ------------------------ */

   void inputNumbers(evenNumbers* vNumbers) {
        printf("Ingrese dos números (PRIMER NÚMERO | SEGUNDO NÚMERO): ");
        scanf("%d | %d", &vNumbers->firstNumber, &vNumbers->secondNumber);
   }

    void showNumbers(evenNumbers* vNumbers) {
        int firstNumber = vNumbers->firstNumber,
            secondNumber = vNumbers->secondNumber;
        
        
        printf("\nNúmeros ingresados: %d | %d\n", firstNumber, secondNumber);
    }

    void addNumbers(evenNumbers* vNumbers) {
        int firstNumber = vNumbers->firstNumber,
            secondNumber = vNumbers->secondNumber,
            operation = (firstNumber) + (secondNumber);
        
        
        printf("\n- Resultado de la suma (%d + %d): %d", firstNumber, secondNumber, operation);
    }

    void subtractNumbers(evenNumbers* vNumbers) {
        int firstNumber = vNumbers->firstNumber,
            secondNumber = vNumbers->secondNumber,
            operation = (firstNumber) - (secondNumber);
        
        
        printf("\n- Resultado de la resta (%d - %d): %d", firstNumber, secondNumber, operation);
    }

    void multiplyNumbers(evenNumbers* vNumbers) {
        int firstNumber = vNumbers->firstNumber,
            secondNumber = vNumbers->secondNumber,
            operation = (firstNumber) * (secondNumber);
        
        
        printf("\n- Resultado de la multiplicación (%d x %d): %d", firstNumber, secondNumber, operation);
    }

    void divideNumbers(evenNumbers* vNumbers) {
        int *pFirstNumber = &vNumbers->firstNumber,
            *pSecondNumber = &vNumbers->secondNumber,
            firstNumber = *pFirstNumber, //¿POR QUE?
            secondNumber = *pSecondNumber; //¿POR QUE?
        if (secondNumber != 0) { //ESTO GENERO EL CONFLICTO.
            float operation = (firstNumber) / (secondNumber); //NO ME MUESTRA LOS DECIMALES.
            printf("\n- Resultado de la división 1 (%d / %d): %.2f", firstNumber, secondNumber, operation);
        } else {
            printf("¡Error! No es posible dividir un número por cero");
        };
    }
#endif
