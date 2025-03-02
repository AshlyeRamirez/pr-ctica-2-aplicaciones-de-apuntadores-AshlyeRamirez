// 7. Accediendo a la Memoria
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // El nombre del arreglo actúa como un apuntador al primer elemento

    printf("Elementos del arreglo y sus direcciones de memoria:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, Dirección: %p\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}
