#include <stdio.h>

int main() {

  float num, quinto;

  printf("Digite um valor com ponto flutuante: ");

  scanf("%f", &num);

  quinto = num / 5;

  printf("A quinta parte de %f é: %f", num, quinto);

  return 0;
}
