// Intercambio de Valores
#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {5, 10};

    printf("Valores antes del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    // Llamada a la función para intercambiar valores
    intercambiar(&arr[0], &arr[1]);

    printf("Valores después del intercambio: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);

    return 0;
}
