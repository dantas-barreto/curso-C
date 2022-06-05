#include <stdio.h>

int main() {

  float jarda, metro;

  printf("Conversor metro para jarda\n");
  printf("Insira um valor em metros: ");
  scanf("%f", &metro);

  jarda = metro / 0.91;

  printf("O valor em jardas é: %.1f jardas", jarda);

  return 0;
}
