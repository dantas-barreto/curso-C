#include <stdio.h>

int main() {

  int n1, n2, n3, soma;

  printf("Digite três valores inteiros:\n");

  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);

  soma = n1 + n2 + n3;

  printf("A soma dos valores é: %d", soma);

  return 0;
}
