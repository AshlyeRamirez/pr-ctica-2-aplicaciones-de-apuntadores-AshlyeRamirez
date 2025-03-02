// 10. Ordenamiento con Apuntadores (Burbuja)
#include <stdio.h>

void ordenarBurbuja(int *arr, int tamaño) {
    int *ptr1, *ptr2, temp;
    for (int i = 0; i < tamaño - 1; i++) {
        ptr1 = arr; // Apunta al primer elemento
        for (int j = 0; j < tamaño - i - 1; j++) {
            ptr2 = ptr1 + 1; // Apunta al siguiente elemento
            if (*ptr1 > *ptr2) { // Si el elemento actual es mayor que el siguiente, intercambiarlos
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
            ptr1++; // Avanzar el apuntador
        }
    }
}

int main() {
    int arr[] = {34, 12, 56, 78, 23};
    int tamaño = sizeof(arr) / sizeof(arr[0]);

    printf("Arreglo original: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    ordenarBurbuja(arr, tamaño);

    printf("Arreglo ordenado: ");
    for (int i = 0; i < tamaño; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
