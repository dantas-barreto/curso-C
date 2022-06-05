#include <stdio.h>

int main() {

  float kmh, ms;

  printf("Velocidade em m/s: ");
  scanf("%f", &ms);

  kmh = ms * 3.6;

  printf("Velocidade em Km/h: %.1f", kmh);

  return 0;
}
