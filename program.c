
#include <stdio.h>
#define clear_screen() printf("\e[1;1H\e[2J")

void posso_votar()
{

  int data_nasc, data_atual, idade;

  printf("\n﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒CALCULAR O MAIOR VALOR﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒ \n");
  printf(" Digite o ano atual: ");
  scanf("%d", &data_atual);
  printf(" Digite o ano de nascimento: ");
  scanf("%d", &data_nasc);

  idade = (data_atual - data_nasc);
  printf(" A idade atual e: "
         "%d",
         idade);

  if (idade >= 16)
    printf(" Pode votar!! ");
  else
    printf(" Não pode votar!! ");
}

void calular_o_maior_valor()
{
  int A, B, C;

  printf("\n﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒CALCULAR O MAIOR VALOR﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒ \n");
  printf("\n \n");
  printf(" Digite o valor de A: ");
  scanf("%d", &A);
  printf(" Digite o valor de B: ");
  scanf("%d", &B);
  printf(" Digite o valor de C: ");
  scanf("%d", &C);

  if ((A > B) && (A > C))
    printf(" O valor de A é o maior!! ");
  else if ((A = B) && (A > C))
    printf(" Os valores de A e B são os maiores!! ");
  else if ((A > B) && (A = C))
    printf(" Os valores de A e C são os maiores!! ");
  else if ((B > A) && (B > C))
    printf(" O valor de B é o maior!! ");
  else if ((B = A) && (B > C))
    printf(" Os valores de A e B são os maiores!! ");
  else if ((B > A) && (B = C))
    printf(" Os valores de B e C são os maiores!! ");
  else if ((C > A) && (C > B))
    printf(" O valor de C é o maior!! ");
  else if ((C > A) && (C = B))
    printf(" Os valores de B e C são os maiores!! ");
  else if ((C = A) && (C > B))
    printf(" Os valores de A e C são os maiores!! ");
  else
    printf(" Os valores são iguais ");
}

void opcao_nao_reconhecida()
{
  clear_screen();
  printf("\n \n \n \n \n \n \n");
  printf("nosa como vose é engrasado fera");
  printf("\n \n \n \n \n \n \n");
  clear_screen();
}

void menu()
{
  int opcao_selecionada;

  clear_screen();
  printf("\n﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒˚∆˚MENU˚∆˚﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒﹒ \n");
  printf("\n \n");
  printf("Selecione um programa: \n");
  printf(" - Posso Votar               [Digite 0] \n");
  printf(" - Calcular O Maior Valor    [Digite 1] \n");
  printf("\n \n \n \n \n \n \n Selecionar a opção: ");
  scanf("%d", &opcao_selecionada);
  clear_screen();

  switch (opcao_selecionada)
  {
  case 0:
    posso_votar();
    break;

  case 1:
    calular_o_maior_valor();
    break;

  default:
    opcao_nao_reconhecida();
    break;
  }
}

int main()
{
  menu();
  return 0;
}
