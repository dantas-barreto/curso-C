#include <stdio.h>

int main() {

  float celsius;
  int kelvin;

  printf("Temperatura em graus Celsius: ");
  scanf("%f", &celsius);

  kelvin = celsius + 273.15;

  printf("Temperatura em graus kelvin: %d", kelvin);

  return 0;
}
