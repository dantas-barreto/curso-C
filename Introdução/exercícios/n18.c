#include <stdio.h>

int main() {

  float litro, m3;

  printf("Conversor metros cúbicos para litros\n");
  printf("Insira um valor em metros cúbicos: ");
  scanf("%f", &m3);

  litro = 1000 * m3;

  printf("O valor em litros é: %.3f L", litro);

  return 0;
}
