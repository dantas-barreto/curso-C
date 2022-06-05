#include <stdio.h>

int main() {

  float media, n1, n2, n3, n4;

  printf("Insira quatro notas\n");
  printf("Nota 01: ");
  scanf("%f", &n1);
  printf("Nota 02: ");
  scanf("%f", &n2);
  printf("Nota 03: ");
  scanf("%f", &n3);
  printf("Nota04: ");
  scanf("%f", &n4);

  media = (n1 + n2 + n3 + n4) / 4;

  printf("MEDIA: %.1f", media);

  return 0;
}
