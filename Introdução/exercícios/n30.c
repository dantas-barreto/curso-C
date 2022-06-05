#include <stdio.h>

int main() {

  double real, cotacao, dolar;

  printf("Cotação atual do Dólar: R$ ");
  scanf("%lf", &cotacao);
  printf("Valor em Reais a serem convertidos: R$ ");
  scanf("%lf", &real);

  dolar = real / cotacao;

  printf("U$ %.2lf", dolar);

  return 0;
}
