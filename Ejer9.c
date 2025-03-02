// 9. Suma con Apuntadores
#include <stdio.h>

int sumaArreglo(int *arr, int tam) {
    int suma = 0;
    int *ptr = arr; // Apuntador al primer elemento del arreglo

    for (int i = 0; i < tam; i++) {
        suma += *ptr; // Sumar el valor apuntado
        ptr++;        // Avanzar al siguiente elemento
    }

    return suma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tam = sizeof(numeros) / sizeof(numeros[0]);

    int suma = sumaArreglo(numeros, tam);
    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
