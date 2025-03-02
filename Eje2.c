#include <stdio.h>

/*
 Este programa crea un apuntador de tipo entero
 que apunta al inicio de un arreglo.
*/
int main() {
    short arr[5] = {1, 2, 3, 4, 5}, *apArr;
    apArr = &arr[0]; // o simplemente apArr = arr;

    // Imprimir las direcciones de memoria (formato correcto para punteros: %p)
    printf("Dirección del arreglo en la primera posición: %p\n", (void *)&arr[0]);
    printf("Dirección del arreglo (usando &arr): %p\n", (void *)&arr);
    printf("Dirección del arreglo (usando arr directamente): %p\n", (void *)arr);

    // Dirección almacenada en el apuntador
    printf("Dirección almacenada en el apuntador: %p\n", (void *)apArr);

    // Imprimir valores usando el apuntador
    printf("*apArr = %i\n", *apArr);
    printf("*(apArr + 1) = %i\n", *(apArr + 1));
    printf("*(apArr + 2) = %i\n", *(apArr + 2));
    printf("*(apArr + 3) = %i\n", *(apArr + 3));
    printf("*(apArr + 4) = %i\n", *(apArr + 4));

    // Mostrar el valor apuntado por apArr
    printf("Valor del apuntador: %i\n", *apArr);

    // Recorrer el arreglo usando un apuntador
    printf("Recorriendo el arreglo usando un apuntador:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i, *(apArr + i));
    }

    // Modificar apArr para que apunte al cuarto elemento (índice 3)
    apArr = &arr[3];

    // Acceder a elementos con desplazamiento desde el nuevo apArr
    printf("Elemento -2: %d\n", apArr[-2]); // corresponde a arr[1]
    printf("Elemento 0: %d\n", apArr[0]);   // corresponde a arr[3]

    // Recorrer completo el arreglo desde la nueva posición del apuntador
    printf("Recorriendo desde el cuarto elemento:\n");
    for (int i = -3; i <= 1; i++) {
        printf("Elemento %d: %d\n", i, *(apArr + i));
    }

    // Corregir la falta de punto y coma
    apArr = &arr[4];

    return 0;
}
