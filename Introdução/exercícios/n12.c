#include <stdio.h>

int main() {

  float km, ml;

  printf("Distância em milhas: ");
  scanf("%f", &ml);

  km = ml * 1.61;

  printf("Distância em quilômetros: %.2f: ", km);

  return 0;
}
