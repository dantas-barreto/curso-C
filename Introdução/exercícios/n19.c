#include <stdio.h>

int main() {

  float litro, m3;

  printf("Conversor litro para metro cúbico\n");
  printf("Insira um valor em litros: ");
  scanf("%f", &litro);

  m3 = litro / 1000;

  printf("O valor em metros cúbicos é: %.3f m^3", m3);

  return 0;
}
