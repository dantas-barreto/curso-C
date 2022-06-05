#include <stdio.h>

int main() {

  double metro2, acre;

  printf("Conversor acres para metros quadrados\n");
  printf("Insira um valor em acres: ");
  scanf("%lf", &acre);

  metro2 = acre * 4048.58;

  printf("O valor em metros quadrados é: %.2lf m^2", metro2);

  return 0;
}
