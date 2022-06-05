#include <stdio.h>

int main() {

  float celsius;
  int kelvin;

  printf("Temperatura em graus Kelvin: ");
  scanf("%d", &kelvin);

  celsius = kelvin - 273.15;

  printf("Temperatura em graus Celsius: %.1f", celsius);

  return 0;
}
