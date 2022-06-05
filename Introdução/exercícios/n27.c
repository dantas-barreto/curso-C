#include <stdio.h>

int main() {

  float m2, hect;

  printf("Conversor hectares para metros quadrados\n");
  printf("Insira um valor em hectares: ");
  scanf("%f", &hect);

  m2 = hect * 10000;

  printf("O valor em metros quadrados é: %.1f", m2);

  return 0;
}
