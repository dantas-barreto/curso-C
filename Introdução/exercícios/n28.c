#include <math.h>
#include <stdio.h>

int main() {

  double x, y, z, soma;

  printf("Insira o valor de X: ");
  scanf("%lf", &x);
  printf("Insira o valor de Y: ");
  scanf("%lf", &y);
  printf("Insira o valor de Z: ");
  scanf("%lf", &z);

  x = x * x;
  y = y * y;
  z = z * z;

  soma = x + y + z;

  printf("A soma dos quadrados dos valores inseridos é: %lf", soma);

  return 0;
}
