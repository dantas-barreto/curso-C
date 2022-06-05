#include <stdio.h>

int main() {

  float gra, rad;
  float pi = 3.14;

  printf("Ângulo em graus: ");
  scanf("%f", &gra);

  rad = gra * (pi / 180);

  printf("Ângulo em radianos: %.1f", rad);

  return 0;
}
