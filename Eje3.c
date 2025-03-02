#include <stdio.h>
/*
 Se imprimen los valores de una matriz (arreglo 2D)
 utilizando aritmética de direcciones.
*/
int main() {
  int *ap;
  int nums[3][3] = {
      {99, 88, 77},
      {66, 55, 44},
      {33, 22, 11}
  };
  ap = &nums[0][0]; // Apuntador al primer elemento de la matriz

  // Recorrer el arreglo como si fuera lineal (1D)
  printf("Recorrido lineal de la matriz:\n");
  for (int i = 0; i < 9; i++) {
    if (i % 3 == 0) // Salto de línea cada 3 elementos
      printf("\n");
    printf("Dir: %p Valor: %d\t", (ap + i), *(ap + i));
  }
  printf("\n\n");

  // Recorrer usando filas y columnas (2D)
  printf("Recorrido por filas y columnas:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("Dir: %p Valor: %d\t", (ap + i * 3 + j), *(ap + i * 3 + j));
    }
    printf("\n");
  }

  return 0;
}
