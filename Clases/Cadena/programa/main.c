
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "../libreria/libreria.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system("chcp 65001 > nil");
    Palabra palabra;
    SecuenciaPalabras secuencia;
    char texto[] = "Hola, Como estas? Que tal?";

    crearSecuenciaPalabras(&secuencia, texto);

    while (leerPalabra(&secuencia, &palabra)) {
        mostrarPalabra(&palabra);
        putchar('\n');
    };
    putchar('\n');
    return 0;
}
