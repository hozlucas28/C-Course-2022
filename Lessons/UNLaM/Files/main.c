
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "product.h"



/* ------------------------------ Definiciones ------------------------------ */

#define ERROR 1
#define AMOUNT_OF_PRODUCTS 10



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    Product product;
    FILE* myFile = fopen("Products.dat", "wb"); //Crear archivo.


    //Inicializar archivo.
    if (myFile == NULL) {
        printf("No se puede abrir el archivo.");
        return ERROR;
    };

    Product products[AMOUNT_OF_PRODUCTS] = {
        {"COCA", "Coca Cola", 120.50, 10},
        {"PERSI", "Pepsi", 200.70, 15},
        {"SPRITE", "Sprite", 150.40, 20},
        {"FANTA", "Fanta", 130.10, 50},
        {"MANAOS", "Manaos", 100.20, 40},
        {"CERVEZA", "Cerveza", 250.40, 30},
        {"VINO_TORO", "Vino Toro", 280.35, 80},
        {"AGUA_VICEN", "Agua Villavicencio", 80.90, 90},
        {"BRAMHA", "Cerveza Bramha", 300.23, 70},
        {"FERNET", "Fernet", 170.40, 100}
    };
    
    fwrite(products, sizeof(Product), AMOUNT_OF_PRODUCTS, myFile);
    fclose(myFile);


    //Leer y Mostrar archivo.
    myFile = fopen("Products.dat", "rb");

    if (myFile == NULL) {
        printf("No se puede abrir el archivo.");
        return ERROR;
    };
    
    fread(&product, sizeof(Product), 1, myFile);
    printf("\n");

    while (!feof(myFile)) { // <feof()> verifica si es fin de archivo.
        printf("%s - %s - %.2f - %d\n", product.code, product.description, product.price, product.stock);
        fread(&product, sizeof(Product), 1, myFile);
    };
    fclose(myFile);


    //Actualizar archivo.
    myFile = fopen("Products.dat", "r+b");

    if (myFile == NULL) {
        printf("No se puede abrir el archivo.");
        return ERROR;
    };

    fread(&product, sizeof(Product), 1, myFile);

    while (!feof(myFile)) {
        product.price *= 1.20;
        fseek(myFile, (long)-sizeof(Product), SEEK_CUR);
        fwrite(&product, sizeof(Product), 1, myFile);
        fseek(myFile, 0, SEEK_CUR);
        fread(&product, sizeof(Product), 1, myFile);
    };
    fclose(myFile);


    //Leer y Mostrar archivo.
    myFile = fopen("Products.dat", "rb");

    if (myFile == NULL) {
        printf("No se puede abrir el archivo.");
        return ERROR;
    };
    
    fread(&product, sizeof(Product), 1, myFile);
    printf("\n");

    while (!feof(myFile)) { // <feof> verifica si es fin de archivo.
        printf("%s - %s - %.2f - %d\n", product.code, product.description, product.price, product.stock);
        fread(&product, sizeof(Product), 1, myFile);
    };
    fclose(myFile);
    return 0;
}
