#include <stdio.h>

int main() {

  float gra, rad;
  float pi = 3.14;

  printf("Ângulo em radianos: ");
  scanf("%f", &rad);

  gra = rad * (180 / pi);

  printf("Ângulo em graus: %.1f", gra);

  return 0;
}
