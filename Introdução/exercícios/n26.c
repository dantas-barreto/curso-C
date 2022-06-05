#include <stdio.h>

int main() {

  float m2, hect;

  printf("Conversor metros quadrados para hectares\n");
  printf("Insira um valor em metros quadrados: ");
  scanf("%f", &m2);

  hect = m2 * 0.0001;

  printf("O valor em hectares é: %.1f hectares", hect);

  return 0;
}
