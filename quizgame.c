#include <stdio.h>
#include <stdlib.h>
int main() {
  char opcao = 0;
  

  while (opcao != '0') {
    int deu_certo = system("clear");
    printf("                              **QUIZ GAMES CARS**                  \n");
    
    printf( " Descubra seu conhecimento sobre o mundo automotivo!!! \n"  );
    printf("1 - QUIZ- História dos veiculos automotores  \n");
    printf("2 - QUIZ- Teste seu conhecimento sobre as verdadeiras máquinas do asfalto! \n");
    printf("3 -  Descubra seu Score! \n");
    printf("0 - Sair do jogo\n");
    printf("Escolha sua opção =>");
    deu_certo = scanf("%c", &opcao);
    while (getchar() != '\n')
      ;

    switch (opcao) {
    case '1':
      deu_certo = system("clear");
      printf("\n");
      printf("\n");
      printf("Pressione ENTER para continuar...");
      getchar();
      break;
    case '2': {

      while 
        deu_certo = system("clear");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\e[0;33mEscolha o valor da recarga ou 0 para continuar:\e[0m ");
        deu_certo = scanf("%c", &valor);
        while (getchar() != '\n');
        switch (valor) 

      break;

    case '3':
  
      printf("\n");
      printf("\n");
      printf("\n");
      getchar();
      break;
    case '0':
      break;
    default:
      printf("\e[0;31mOpção inválida\e[0m\n");
      break;
      
  return 0;
}
