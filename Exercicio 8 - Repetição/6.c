#include <stdio.h>

int main() {

  int mes, ano;
  char continuar;

  printf("Digite o mes: ");
  scanf("%d", &mes);
  printf("Digite o ano: ");
  scanf("%d", &ano);

  int bissexto = (ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0;

  int dias;
  switch (mes) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      dias = 31;
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      dias = 30;
      break;
    case 2:
      dias = 28 + bissexto;
      break;
  }

  printf("O mes %d do ano %d tem %d dias.\n", mes, ano, dias);

  printf("Voce deseja outras entradas (S/?)? ");
  scanf(" %c", &continuar);

  if (continuar == 'S') {
    return main();
  }

  return 0;
}