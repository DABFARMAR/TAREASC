#include <stdio.h>

int main() {
  int arreglo[] = {1, 2, 3, 4, 5,6,7,8,9,10};
  int *puntero = arreglo;
  int large = sizeof(arreglo) / sizeof(arreglo[0]);
  for (int i = 0; i < large ; i++) {
    int elemento = *puntero;
    printf("%d ", elemento);
    puntero++;
  }

  printf("\n");

  return 0;
}