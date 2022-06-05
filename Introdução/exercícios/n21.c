#include <stdio.h>

int main() {

  double kilo, libra;

  printf("Conversor libra para kilo\n");
  printf("Insira um valor em libras: ");
  scanf("%lf", &libra);

  kilo = libra * 0.45;

  printf("O valor em libras é: %.2lf kg", kilo);

  return 0;
}
