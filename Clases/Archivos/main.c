
/* ------------------------------- Inclusiones ------------------------------ */

#include <stdio.h>
#include <stdlib.h>
#include "producto.h"



/* ------------------------------ Definiciones ------------------------------ */

#define ERROR_ARCHIVO 1
#define CANTIDAD_PRODUCTOS 10



/* ---------------------------- Código Principal ---------------------------- */

int main() {
    Producto producto;
    FILE* miArchivo = fopen("Productos.dat", "wb"); //Crear archivo.


    //Inicializar archivo.
    if (miArchivo == NULL) {
        printf("No se puede abrir el archivo.");
        return ERROR_ARCHIVO;
    };

    Producto productos[CANTIDAD_PRODUCTOS] = {
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
    
    fwrite(productos, sizeof(Producto), CANTIDAD_PRODUCTOS, miArchivo);
    fclose(miArchivo);


    //Leer y Mostrar archivo.
    miArchivo = fopen("Productos.dat", "rb");

    if (miArchivo == NULL) {
        printf("No se puede abrir el archivo.");
        return ERROR_ARCHIVO;
    };
    
    fread(&producto, sizeof(Producto), 1, miArchivo);
    printf("\n");

    while (!feof(miArchivo)) { // <feof()> verifica si es fin de archivo.
        printf("%s - %s - %.2f - %d\n", producto.codigo, producto.descripcion, producto.precio, producto.stock);
        fread(&producto, sizeof(Producto), 1, miArchivo);
    };
    fclose(miArchivo);


    //Actualizar archivo.
    miArchivo = fopen("Productos.dat", "r+b");

    if (miArchivo == NULL) {
        printf("No se puede abrir el archivo.");
        return ERROR_ARCHIVO;
    };

    fread(&producto, sizeof(Producto), 1, miArchivo);

    while (!feof(miArchivo)) {
        producto.precio *= 1.20;
        fseek(miArchivo, (long)-sizeof(Producto), SEEK_CUR);
        fwrite(&producto, sizeof(Producto), 1, miArchivo);
        fseek(miArchivo, 0, SEEK_CUR);
        fread(&producto, sizeof(Producto), 1, miArchivo);
    };
    fclose(miArchivo);


    //Leer y Mostrar archivo.
    miArchivo = fopen("Productos.dat", "rb");

    if (miArchivo == NULL) {
        printf("No se puede abrir el archivo.");
        return ERROR_ARCHIVO;
    };
    
    fread(&producto, sizeof(Producto), 1, miArchivo);
    printf("\n");

    while (!feof(miArchivo)) { // <feof> verifica si es fin de archivo.
        printf("%s - %s - %.2f - %d\n", producto.codigo, producto.descripcion, producto.precio, producto.stock);
        fread(&producto, sizeof(Producto), 1, miArchivo);
    };
    fclose(miArchivo);
    return 0;
}
