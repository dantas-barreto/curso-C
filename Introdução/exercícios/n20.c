#include <stdio.h>

int main() {

  double kilo, libra;

  printf("Conversor kilo para libra\n");
  printf("Insira um valor em kilos: ");
  scanf("%lf", &kilo);

  libra = kilo / 0.45;

  printf("O valor em libras é: %.2lf libras", libra);

  return 0;
}
