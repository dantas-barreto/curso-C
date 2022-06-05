#include <stdio.h>

int main() {

  float celsius, fahrenheit;

  printf("Temperatura em graus Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = celsius * (9.0 / 5.0) + 32.0;

  printf("Temperatura em Fahrenheit: %.1f", fahrenheit);

  return 0;
}
