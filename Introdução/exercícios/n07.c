#include <stdio.h>

int main() {

  float celsius, fahrenheit;

  printf("Temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

  printf("Temperatura em graus Celsius: %.1f", celsius);

  return 0;
}
