#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  int i;
  int questao1, questao2, questao3, questao4, questao5, questao6;
  int deu_certo = 0;
  int continuar;
  int menu;
  int voltar;
  int ponto1;
  struct quiz{
  int ponto2;
  char nome_jogador[50];
 };
  struct quiz quiz[20];
  struct quiz quiz2[20];
  struct quiz quiz1;
  int contador = 0;
  int ponto_final = 0;
  do {
    ponto1 = 0;
   // printf("%i", quiz2[contador].ponto1);


    system("clear");
    printf("\n\n\n------------------------------------------------------------------------\n");
    printf("\e[0;32m ¦¦¦¦¦¦  ¦¦    ¦¦ ¦¦ ¦¦¦¦¦¦¦     ¦¦¦    ¦¦¦  ¦¦¦¦¦  ¦¦¦    ¦¦ ¦¦  ¦¦¦¦¦\n"); 	
    printf("¦¦    ¦¦ ¦¦    ¦¦ ¦¦    ¦¦¦      ¦¦¦¦  ¦¦¦¦ ¦¦   ¦¦ ¦¦¦¦   ¦¦ ¦¦ ¦¦   ¦¦\n");
    printf("¦¦    ¦¦ ¦¦    ¦¦ ¦¦   ¦¦¦       ¦¦ ¦¦¦¦ ¦¦ ¦¦¦¦¦¦¦ ¦¦ ¦¦  ¦¦ ¦¦ ¦¦¦¦¦¦¦\n");
    printf("¦¦ __ ¦¦ ¦¦    ¦¦ ¦¦  ¦¦¦        ¦¦  ¦¦  ¦¦ ¦¦   ¦¦ ¦¦  ¦¦ ¦¦ ¦¦ ¦¦   ¦¦\n");
    printf(" ¦¦¦¦¦¦   ¦¦¦¦¦¦  ¦¦ ¦¦¦¦¦¦¦     ¦¦      ¦¦ ¦¦   ¦¦ ¦¦   ¦¦¦¦ ¦¦ ¦¦   ¦¦\n");
    printf("     ¯¯                                                                 \e[0m \n");    
     printf("------------------------------------------------------------------------\n");
    printf("  \n                                 \e[1;93mTEMAS\e[0m\n\n");
    printf("                          1>>\e[1;34m Automobilismo\e[0m\n\n");
    printf("                          2>> \e[1;31mFilmes e séries\e[0m\n\n");
    printf("                          3>> Ranking\n");
    printf("\n\n\n Digite a opção desejada: " );
    scanf("%d", &menu);
    getchar();
    printf("\e[0;91m>> Comando inválido!!\e[0m\n");

    system("clear");


     ponto1 = 0;
    switch (menu) {
    case 1: {
      printf( "Insira o nome do Jogador: ");
      scanf( "%s", quiz[contador].nome_jogador);
      getchar();
      printf(
      "     >> Teste seu conhecimento com questões cada vez mais "
      "desafiadoras!\n    \e[1;93mOBS: A pontuação das questões variam de acordo com "
      "sua dificuldade!!.\e[0m\n\n");
      printf("                    \e[1;34m>> Pressione 1 para começar o Quiz:\e[0m\n");

      scanf("%d", &i);
      system("clear");
      if (i == 1) {
        printf("          \e[1;35m       Aperte os cintos que o jogo vai começar!\e[0m \n\n");
      }

      else {
        printf("\e[1;91mINVALIDO!\e[0m \n\n");
      }
      if (i == 1) {
        // QUESTAO1
        printf("1. Qual o nome do primeiro carro produzido pela Ferrari?\n\n");
        printf("1) F40\n");
        printf("2) Testa Rossa\n");
        printf("3) Ferrari 125 S\n");
        printf("4) La Ferrari\n");
        printf("\e[1;32m>> Digite a alternativa correta:!\e[0m\n");
        deu_certo = scanf("%d", &questao1);
        getchar();

        if (questao1 == 3) {
          printf("\e[1;32mParabéns você acertou!\e[0m\n\n");
          ponto1 = ponto1 + 3;
          printf(">>Você tem %d pontos\n", ponto1);
          printf("Pressione ENTER para continuar\n");
          getchar();
          system("clear");

        } else {
          printf("\e[0;31m>>Você errou!\e[0m\n\n");
          ponto1 = ponto1 + 0;
          printf(">>Você tem %d pontos\n", ponto1);
          printf(">>Pressione ENTER para continuar\n");
          getchar();
          system("clear");
        }

        // QUESTAO2
        printf("2. Sobre o icônico Ford GT 40 e sua criação:"
               "\n\n");
        printf("1) Foi criado para competir com a Chevrolet em 1960\n");
        printf("2) Foi criado para o público em geral\n");
        printf("3) Foi criado em 1971 para entrar para a F1 \n");
        printf("4) Começou a ser desenvolvido em 1963 com o objetivo de "
               "superar a "
               "Ferrari\n");

        printf("\e[1;32m>> Digite a alternativa correta:\e[0m\n");
        scanf("%d", &questao2);
        getchar();

        if (questao2 == 4) {
          printf("\e[1;32mParabéns você acertou!\e[0m\n\n");
          ponto1 = ponto1 + 5;
          printf(">> Você tem %d pontos\n", ponto1);
          printf("Pressione ENTER para continuar\n");
          getchar();
          system("clear");

        } else {
          printf("\e[0;31m>> Você errou!\e[0m\n\n");
          ponto1 = ponto1 + 0;
          printf(">>Pressione ENTER para continuar\n");
          printf(">>Você tem %d pontos\n",ponto1);
          getchar();
          system("clear");
        }

        // QUESTAO3
        printf("3. Qual é o atual carro mais vendido do mundo?\n\n");
        printf("1) VW GOLF\n");
        printf("2) Toyota Corolla\n");
        printf("3) VW Fusca\n");
        printf("4) BMW 320i\n");

        printf("\e[1;32m>> Digite a alternativa correta:\e[0m\n");
        scanf("%d", &questao3);
        getchar();

        if (questao3 == 2) {
          printf("\e[1;32mParabéns você acertou!\e[0m\n\n");
          ponto1 = ponto1 + 3;
          printf(">>Você tem %d pontos\n", ponto1);
          printf("Pressione ENTER para continuar\n");
          getchar();
          system("clear");

        } else {
          printf("\e[0;31m>>Você errou!\e[0m\n\n");
          ponto1 = ponto1 + 0;
          printf(">>Você tem %d pontos\n", ponto1);
          printf(">>Pressione ENTER para continuar\n");
          getchar();
          system("clear");
        }

        // QUESTAO04
        printf("4. Qual é o atual carro de rua mais rápido do mundo?\n\n");
        printf("1) Bugatti Chiron Super Sport\n");
        printf("2) Koenigsegg Agera RS\n");
        printf("3) Lamborguini Aventador SVJ\n");
        printf("4) Tesla Roadster\n");

        printf("\e[1;32m>> Digite a alternativa correta:\e[0m\n");
        scanf("%d", &questao4);
        getchar();

        if (questao4 == 2) {
          printf("\e[1;32mParabéns você acertou!\e[0m\n\n");
          ponto1 = ponto1 + 7;
          printf(">> Você tem %d pontos\n", ponto1);
          printf("Pressione ENTER para continuar\n");
          getchar();
          system("clear");

        } else {
          printf("\e[0;31mVocê errou!\e[0m\n\n");
          ponto1 = ponto1 + 0;
          printf(">>Você tem %d pontos\n", ponto1);
          printf(">>Pressione ENTER para continuar\n");
          getchar();
          system("clear");
        }

        // QUESTAO05
        printf("5. Qual montadora abaixo seu emblema representa o Espírito do "
               "Êxtase?\n\n");
        printf("1) Rolls Royce\n");
        printf("2) Volvo\n");
        printf("3) Bentley\n");
        printf("4) Acura\n");

        printf("\e[1;32m>>Digite a alternativa correta:\e[0m\n");
        scanf("%d", &questao5);
        getchar();

        if (questao5 == 1) {
          printf("\e[1;32mParabéns você acertou!\e[0m\n\n");

          ponto1 = ponto1 + 7;
          printf(">>Você tem %d pontos\n", ponto1);
          printf("Pressione ENTER para continuar\n");
          getchar();
          system("clear");

        } else {
          printf("\e[0;31mVocê errou!\e[0m\n\n");
          ponto1 = ponto1 + 0;
          printf(">>Você tem %d pontos\n", ponto1);
          printf(">>Pressione ENTER para continuar\n");
          getchar();
          system("clear");
        }

        // QUESTAO06
        printf("6. Sobre a história do lendário VW Fusca/Beetle:\n\n");
        printf("1) Criado em 1928 pela Vw na França, era utilizado pelas "
               "autoridades\n");
        printf("2) Criado em 1945 para competir com a Porsche 911\n");
        printf("3) Criado em 1963 pela Volkswagen em Londres, tinha objetivo "
               "inovar "
               "os taxis da cidade\n");
        printf("4) Criado por volta de 1930, idealizado pelo engenheiro "
               "austríaco "
               "Ferdinand Porsche\n");

        printf("\e[1;32m>>Digite a alternativa correta:\e[0m\n");
        scanf("%d", &questao6);
        getchar();

        if (questao6 == 4) {
          printf("\e[1;32mParabéns você acertou!\e[0m\n\n");

          ponto1 = ponto1 + 7;
          printf(">>Você tem %d pontos\n", ponto1);
          printf("Pressione ENTER para continuar\n");
          getchar();
          system("clear");
        } else {
          printf("\e[0;31m>>Você errou!\e[0m\n\n");
          ponto1 = ponto1 + 0;
          printf(">>Você tem %d pontos\n", ponto1);
          printf(">>Pressione ENTER para continuar\n");
          getchar();
          system("clear");
        }
        if (ponto1 == 32) {
          printf("\e[0;92mParabéns! Você é o Ayrton Senna do QUIZ!\e[0m\n");
        }

        else if (ponto1 > 16) {
          printf("\e[0;33mParábes Piloto! Você está acima da média!\e[0m\n\n");
        } else {
          printf(" \e[0;31mVocê está abaixo da média piloto!\e[0m\n\n");
        }
      }
      quiz2[contador].ponto2 = ponto1;
      contador = contador+1;
    break;
    } 
      case 2:{
        printf( "Insira o nome do Jogador: ");
        scanf( "%s", quiz[contador].nome_jogador);
        getchar();
        printf(
        "     >> Teste seu conhecimento com questões cada vez mais "
        "desafiadoras!\n    \e[1;93mOBS: A pontuação das questões variam de acordo com "
        "sua dificuldade!!.\e[0m\n\n");
        printf("                    \e[0;31m>> Pressione 1 para começar o Quiz:\e[0m\n");

        scanf("%d", &i);
        system("clear");
        if (i == 1) {
          printf("          \e[1;93m       Pegue a pipoca que o jogo vai começar!\e[0m \n\n");
        }

        else {
          printf("\e[1;91m	INVALIDO!\e[0m \n\n");
        }
        if (i == 1) {
          // QUESTAO1
          printf("1. Em qual streaming foi lançado LA CASA DE PAPEL??\n\n");
          printf("1) Amazon Prime\n");
          printf("2) HBO MAX\n");
          printf("3) NETFLIX\n");
          printf("4) Disney+\n");
          printf("\e[1;32m>> Digite a alternativa correta:!\e[0m\n");
          deu_certo = scanf("%d", &questao1);
          getchar();

          if (questao1 == 3) {
            printf("\e[1;32mParabéns você acertou!\e[0m\n\n");
            ponto1 = ponto1 + 3;
            printf(">>Você tem %d pontos\n", ponto1);
            printf("Pressione ENTER para continuar\n");
            getchar();
            system("clear");

          } else {
            printf("\e[0;31m>>Você errou!\e[0m\n\n");
            ponto1 = ponto1 + 0;
            printf(">>Você tem %d pontos\n", ponto1);
            printf(">>Pressione ENTER para continuar\n");
            getchar();
            system("clear");
          }

          // QUESTAO2
          printf("2. Em que ano foi lançado o clássico filme Titanic?:"
                 "\n\n");
          printf("1) 1996\n");
          printf("2) 1998\n");
          printf("3) 2001 \n");
          printf("4) 1999\n");

          printf("\e[1;32m>> Digite a alternativa correta:\e[0m\n");
          scanf("%d", &questao2);
          getchar();

          if (questao2 == 2) {
            printf("\e[1;32mParabéns você acertou!\e[0m\n\n");
            ponto1 = ponto1 + 5;
            printf(">> Você tem %d pontos\n", ponto1);
            printf("Pressione ENTER para continuar\n");
            getchar();
            system("clear");

          } else {
            printf("\e[0;31m>> Você errou!\e[0m\n\n");
            ponto1 = ponto1 + 0;
            printf(">>Pressione ENTER para continuar\n");
            printf(">>Você tem %d pontos\n", ponto1);
            getchar();
            system("clear");
          }

          // QUESTAO3
          printf("3. Qual é a principal rivalidade do filme Karatê kid?:\n\n");
          printf("1) Sr.Miyagi VS John Kreese\n");
          printf("2) Daniel Larusso VS John Kreese\n");
          printf("3) Miguel Vs Johnny Lawrence\n");
          printf("4) Johnny Lawrence VS Daniel Larusso\n");

          printf("\e[1;32m>> Digite a alternativa correta:\e[0m\n");
          scanf("%d", &questao3);
          getchar();

          if (questao3 == 4) {
            printf("\e[1;32mParabéns você acertou!\e[0m\n\n");
            ponto1 = ponto1 + 3;
            printf(">>Você tem %d pontos\n", ponto1);
            printf("Pressione ENTER para continuar\n");
            getchar();
            system("clear");

          } else {
            printf("\e[0;31m>>Você errou!\e[0m\n\n");
            ponto1 = ponto1 + 0;
            printf(">>Você tem %d pontos\n", ponto1);
            printf(">>Pressione ENTER para continuar\n");
            getchar();
            system("clear");
          }

          // QUESTAO04
          printf("4. Quem é a personagem principal em Stranger Things?\n\n");
          printf("1) Will\n");
          printf("2) Mike\n");
          printf("3) ONZE\n");
          printf("4) Dustin\n");

          printf("\e[1;32m>> Digite a alternativa correta:\e[0m\n");
          scanf("%d", &questao4);
          getchar();

          if (questao4 == 3) {
            printf("\e[1;32mParabéns você acertou!\e[0m\n\n");
            ponto1 = ponto1 + 7;
            printf(">> Você tem %d pontos\n", ponto1);
            printf("Pressione ENTER para continuar\n");
            getchar();
            system("clear");

          } else {
            printf("\e[0;31mVocê errou!\e[0m\n\n");
            ponto1 = ponto1 + 0;
            printf(">>Você tem %d pontos\n", ponto1);
            printf(">>Pressione ENTER para continuar\n");
            getchar();
            system("clear");
          }

          // QUESTAO05
          printf("5. Na Série Breaking Bad, qual é a profissão de Walter white?\n\n");
          printf("1) Vendedor\n");
          printf("2) Professor\n");
          printf("3) Diretor Escolar\n");
          printf("4) Funcionário de um Lava- Rápido\n");

          printf("\e[1;32m>>Digite a alternativa correta:\e[0m\n");
          scanf("%d", &questao5);
          getchar();

          if (questao5 == 2) {
            printf("\e[1;32mParabéns você acertou!\e[0m\n\n");

            ponto1 = ponto1 + 7;
            printf(">>Você tem %d pontos\n", ponto1);
            printf("Pressione ENTER para continuar\n");
            getchar();
            system("clear");

          } else {
            printf("\e[0;31mVocê errou!\e[0m\n\n");
            ponto1 = ponto1 + 0;
            printf(">>Você tem %d pontos\n", ponto1);
            printf(">>Pressione ENTER para continuar\n");
            getchar();
            system("clear");
          }

          // QUESTAO06
          printf("6. No filme Procurando Nemo, quem era o pai do Nemo?\n\n");
          printf("1) Gill\n");
          printf("2) Nemo Pai\n");
          printf("3) Marlin\n");
          printf("4) Morse\n");

          printf("\e[1;32m>>Digite a alternativa correta:\e[0m\n");
          scanf("%d", &questao6);
          getchar();

          if (questao6 == 3) {
            printf("\e[1;32mParabéns você acertou!\e[0m\n\n");

            ponto1 = ponto1 + 7;
            printf(">>Você tem %d pontos\n", ponto1);
            printf("Pressione ENTER para continuar\n");
            getchar();
            system("clear");
          } else {
            printf("\e[0;31m>>Você errou!\e[0m\n\n");
            ponto1 = ponto1 + 0;
            printf(">>Você tem %d pontos\n", ponto1);
            printf(">>Pressione ENTER para continuar\n");
            getchar();
            system("clear");
          }
          if (ponto1 == 32) {
            printf("\e[0;92mParabéns! Você é um verdadeiro viciado em filmes e séries hein!\e[0m\n");
          }

          else if (ponto1 > 16) {
            printf("\e[0;33mParábens! Você está acima da média\e[0m\n\n");
          } else {
            printf(" \e[0;31mÉ... Você está abaixo da média, que tal procurar se divertir mais?!\e[0m\n\n");
          }
        }
        quiz2[contador].ponto2 = ponto1;
        contador = contador+1;
      break;

      } 
      case 3:
printf("RANKING:\n");
        for(int i = 0; i < contador; i++){
printf("%s: %i \n", quiz[i].nome_jogador, quiz2[i].ponto2 );
        }
      break;
    default:
      printf("\e[0;31mCOMANDO INVÁLIDO\e[0m\n");

    }


    do{
      //system("clear");
      printf("\nPressione:\n");

       printf("(1) Para retornar ao menu principal (0) Para sair do jogo\n");
      scanf(" %d", &voltar);
      getchar();

    }while(voltar != 0 && voltar != 1);


  } while (voltar == 1);
  system("clear");
  printf("\n\e[0;35mOH que pena! o jogo foi encerrado!\e[0m \n\n");
return 0;
}                      