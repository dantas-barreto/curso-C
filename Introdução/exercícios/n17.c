#include <stdio.h>

int main() {

  float cent, pol;

  printf("Conversor Centímetros para Polegadas\n");
  printf("Insira um valor em centímetros: ");
  scanf("%f", &cent);

  pol = cent / 2.54;

  printf("Valor em polegadas: %.2f pol\n", pol);
}
