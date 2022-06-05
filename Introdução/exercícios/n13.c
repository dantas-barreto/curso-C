#include <stdio.h>

int main() {

  float km, ml;

  printf("Distância em quilômetros: ");
  scanf("%f", &km);

  ml = km / 1.61;

  printf("Distância em milhas: %.2f", ml);

  return 0;
}
