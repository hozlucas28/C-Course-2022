
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "../library/library.h"



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    system("chcp 65001 > nil");
    Word word;
    WordSequence sequence;
    char text[] = "Hola, Como estas? Que tal?";

    createWordsSequence(&sequence, text);

    while (readWord(&sequence, &word)) {
        showWord(&word);
        putchar('\n');
    };
    putchar('\n');
    return 0;
}
