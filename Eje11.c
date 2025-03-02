// 11. Buscar en un Arreglo
#include <stdio.h>

int *buscarElemento(int *arr, int tamaño, int valor) {
    for (int i = 0; i < tamaño; i++) {
        if (*(arr + i) == valor) { // Si el valor en la posición actual es igual al buscado
            return (arr + i); // Devuelve la dirección de memoria
        }
    }
    return NULL; // Si no se encuentra el valor
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int valor;

    printf("Ingrese el número que desea buscar: ");
    scanf("%d", &valor);

    int *resultado = buscarElemento(arr, tamaño, valor);

    if (resultado != NULL) {
        printf("El número %d se encuentra en la dirección de memoria: %p\n", valor, (void*)resultado);
    } else {
        printf("El número %d no fue encontrado en el arreglo.\n", valor);
    }

    return 0;
}
