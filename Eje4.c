#include <stdio.h>

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  
  printf("Valores originales:\n");
  for (int i = 0; i < 5; i++) {
    //Escribe el codigo para imprimir los valores usado el apuntador
    printf("%d",*(ptr+i));
  }

  printf("\n");  
  for (int i = 0; i < 5; i++) {
    // Duplicar cada elemento
    *(ptr+i)*=2; //  *(ptr+i)=* (ptr+i)*2
  }
  
  printf("\nValores modificados:\n");
  for (int i = 0; i < 5; i++) {
    //Escribe el codigo para imprimir los valores usado el apuntador
    printf("%d",*(ptr+i));

  }
  printf("\n");
  return 0;
}
