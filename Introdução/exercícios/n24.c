#include <stdio.h>

int main() {

  float metro2, acre;

  printf("Conversor metros quadrados para acres\n");
  printf("Insira o valor em metros quadrados: ");
  scanf("%f", &metro2);

  acre = metro2 * 0.000247;

  printf("O valor em acres é: %.1f acres", acre);

  return 0;
}
