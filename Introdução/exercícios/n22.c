#include <stdio.h>

int main() {

  float jarda, metro;

  printf("Conversor jardas para metros\n");
  printf("Insira um valor em jardas: ");
  scanf("%f", &jarda);

  metro = jarda * 0.91;

  printf("O valor em metros é: %.1f m", metro);

  return 0;
}
