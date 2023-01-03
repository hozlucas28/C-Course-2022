
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/* ------------------------- Funciones Desarrolladas ------------------------ */

void orderBySelection(void *vector, int amountOfElements, size_t elementSize, CMP cmp)
{
    void *minor, last = vector + (amountOfElements - 1) * elementSize;

    for (void *i = vector; i < last; i += elementSize)
    {
        minor = seekMinor(i, last, elementSize, cmp);
        if (m != i)
        {
            exchange(minor, i, elementSize);
        }; // FALTA FUNCIÓN.
    };
}

void *seekMinor(void *start, void *end, size_t elementSize, CMP cmp)
{
    void *minor = start;

    for (void *j = start; j <= end; j += elementSize)
    {
        if (CMP(j, minor) < 0)
        {
            minor = j;
        };
    };
    return minor;
}