#include <stdio.h>

int main() {

  float cent;
  int pol;

  printf("Conversor Polegadas para Centímetros\n");
  printf("Insira um valor em polegadas: ");
  scanf("%d", &pol);

  cent = pol * 2.54;

  printf("Valor em centímetros: %.2f cm", cent);
  return 0;
}
