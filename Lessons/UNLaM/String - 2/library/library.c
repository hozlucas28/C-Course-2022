
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "library.h"



/* ------------------------- Funciones Desarrolladas ------------------------ */

void createWordsSequence(WordSequence* sequence, char* string) {
    sequence->cursor = string;
    sequence->endOfSequence = false;
}


bool readWord(WordSequence* sequence, Word* word) {
    char* cursor = sequence->cursor;
    while (*cursor && !isLetter(*cursor)) {
        cursor++;
    };

    if (!*cursor) {
        sequence->endOfSequence = true;
        sequence->cursor = cursor;
        return false;
    };

    word->start = cursor;

    while (*cursor && isLetter(*cursor)) {
        cursor++;
    };

    word->end = cursor - 1;
    sequence->cursor = cursor;
    return true;
}


bool endOfSequence(const WordSequence* sequence) {
    return sequence->endOfSequence;
}


void showWord(const Word* word) {
    for (char* c = word->start; c <= word->end; c++) {
        putchar(*c);
    };
}


bool isLetter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}