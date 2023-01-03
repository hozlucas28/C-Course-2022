# Pasos
## Paso N° 1:
Crear dos proyectos, a través de CodeBlocks, un `Console aplication`, que se nombrara como 'programa', y una `Static library`, nombrada como 'libreria'.
>Los proyectos debes ser creados en la misma carpeta, evitando caracteres especiales, incluidos los acentos y la letra 'Ñ'.

| Proyecto | Descripción |
| --- | --- |
| Console application | _se trata nuestro ejecutable con el cual probaremos nuestro programa, que utilizara las funciones de la librería, siendo dependiente de la misma._ |
| Static library | _contendrá las funciones desarrolladas y prototipo de nuestro programa. En el mismo, tendremos que crear un archivo de tipo `header` y `source`, ambos en lenguaje C, a través del CodeBlocks, preferentemente._ |


## Paso N° 2:
Una vez creados los proyectos con los archivos pertinentes, vayamos al proyecto **programa**, dirigiéndonos al archivo **<main.c>** donde realizaremos una inclusión de las funciones, que crearemos en nuestra librería, a través de la siguiente línea: `#include "../libreria/libreria.h"`. Una vez hecho esto tendremos que programar nuestro programa en el archivo **<main.c>** mediante el llamado de funciones, teniendo la información de salida en el mismo, preferentemente.

 Ahora tendremos que ir al proyecto **libreria**, en especifico al archivo **<libreria.c>** (archivo de tipo **source** creado en el paso N° 1), en donde incluiremos las siguientes librerías: `# include <stdio.h>` `# include stdbool.h>` `# include "libreria.h"`. Luego nos tocara desarrollar en este archivo, las funciones que hemos llamado en el archivo **<main.c>** del **programa**, tomando en cuenta tanto los valores de retorno como el uso de punteros, para la carga.

Una vez desarrolladas nuestras funciones, iremos al archivo **<libreria.h>**, en donde definiremos nuestras Macros (si las ocupamos), declararemos nuestras estructuras y estableceremos los prototipos de las funciones desarrolladas previamente.

>Las direcciones de los archivos y los proyectos toman por hecho los comentarios del paso N°1.


## Paso N° 3:
Una vez programados ambos proyectos es hora de probarlos, pero antes tendremos que seguir una serie de pasos para vincular el programa a la librería de funciones:  
- Primero tendremos que compilar ó **'Rebuild'** (reconstruir) el proyecto **libreria**, para que se genere un archivo de formato **<.a>**, teniendo activado previamente dicho proyecto.
- Ahora seleccionaremos con click derecho al proyecto **programa**, luego la opción **'Build options'** y accediendo a la pestaña **'Linker settings'** añadiremos la librería, creada como proyecto, seleccionaremos al archivo que se encuentra en la siguiente ruta (a modo de referencia): **<libreria/bin/Debug/libreria.a>**.

Una vez seguidos estos pasos de vinculación nuestro programa debería funcionar correctamente, al menos debería esta vinculado con la librería exitosamente, si este no posee errores de programación cometidos por el desarrollador.

>Recordar tener activado el proyecto pertinente al seguir los pasos de vinculación. Se recomienda el Rebuild (reconstruir) a la hora de compilar los proyectos.


## IMPORTANTE
**Cada vez que realicemos algún cambio en el proyecto libreria, tendremos que compilar nuevamente el mismo para que se actualize el archivo de formato **<.a>**, y así nuestro programa (que es un proyecto a parte) se percate de estos cambios.**