#include <stdio.h>

// Prototipos de funciones
void pasarValor(int);       // Recibe un entero por valor
void pasarReferencia(int *); // Recibe un entero por referencia (apuntador)

int main() {
  int nums[] = {55, 44, 33, 22, 11}; // Arreglo de enteros
  int *ap = nums;                    // Apuntador al primer elemento del arreglo
  
  // Mostrar el valor inicial
  printf("Valor inicial: %d\n", *ap);
  
  // Llamada a la función que pasa el valor por copia
  pasarValor(*ap); 
  printf("Después de pasar por valor: %d\n", *ap); // El valor no cambia
  
  // Llamada a la función que pasa el valor por referencia
  pasarReferencia(ap); 
  printf("Después de pasar por referencia: %d\n", *ap); // El valor sí cambia
  
  return 0;
}

// Función que recibe un entero por valor
void pasarValor(int equis) {
  printf("En pasarValor (antes): %d\n", equis);
  equis = 128; // Solo modifica la copia local
  printf("En pasarValor (después): %d\n", equis);
}

// Función que recibe un apuntador a entero (por referencia)
void pasarReferencia(int *equis) {
  printf("En pasarReferencia (antes): %d\n", *equis);
  *equis = 128; // Modifica el valor directamente en memoria
  printf("En pasarReferencia (después): %d\n", *equis);
}
