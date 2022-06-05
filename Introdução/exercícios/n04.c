#include <stdio.h>

int main() {

  float num, quadrado;

  printf("Digite um número com ponto flutuante: ");

  scanf("%f", &num);

  quadrado = num * num;

  printf("O resultado de %f^2 é: %f", num, quadrado);

  return 0;
}
