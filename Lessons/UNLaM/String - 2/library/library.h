#ifndef LIBRARY_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define LIBRARY_H


    /* ------------------------------- Inclusiones ------------------------------ */

    #include <stdbool.h>


    /* ------------------------------- Estructuras ------------------------------ */

    typedef struct {
        char* cursor;
        bool endOfSequence;
    } WordSequence;

    typedef struct {
        char* start;
        char* end;
    } Word;


    /* --------------------------- Funciones Prototipo -------------------------- */

    void createWordsSequence(WordSequence* sequence, char* string);
    bool readWord(WordSequence* sequence, Word* word);
    bool endOfSequence(const WordSequence* sequence);
    void showWord(const Word* word);
    bool isLetter(char c);
#endif
