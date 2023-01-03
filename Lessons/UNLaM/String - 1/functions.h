#ifndef FUNCTIONS_H
    /* ------------------------------ Definiciones ------------------------------ */

    #define FUNCTIONS_H


    /* --------------------------- Funciones Prototipo -------------------------- */

    bool isPalindrome(char* pWord, int amountOfCharacters);


    /* ------------------------- Funciones Desarrolladas ------------------------ */

    bool isPalindrome(char* pWord, int amountOfCharacters) {
        const char* right = pWord + amountOfCharacters - 1;
        const char* left = pWord;

        while ((left < right) && (tolower(*left) == tolower(*right))) {
            right--;
            left++;
        };
        return (left >= right);
    }
#endif
