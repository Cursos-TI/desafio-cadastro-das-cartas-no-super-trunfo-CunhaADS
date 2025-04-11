#include <stdio.h>

int main(){

  // Definição de variaveis;
   char estado1[30], estado2[30], codigo1[5], codigo2[5], cidade1[20], cidade2[20];
   int pturisticos1, pturisticos2;
   float area1, area2, densidade1, densidade2, pcapita1, pcapita2;
   float espacohab1, espacohab2;
   long long int populacao1, populacao2, pib1, pib2;
   double superpoder1, superpoder2;
     
  //coleta de dados da carta 1;
        printf("DIGITE O PRIMEIRO ESTADO: \n");
        scanf(" %[^\n]", estado1); 

        printf("DIGITE O CÓDIGO DO PRIMEIRO ESTADO: \n");
        scanf("%s", codigo1);
       
        printf("DIGITE O NOME DE UMA CIDADE QUE PERTENÇA AO PRIMEIRO ESTADO: \n");
        scanf(" %[^\n]", cidade1);

        printf("DIGITE A POPULAÇÃO DA CIDADE: \n");
        scanf("%lld", &populacao1);

        printf("DIGITE A ÁREA TOTAL DA CIDADE: \n");
        scanf("%f", &area1);

        printf("DIGITE O PIB DA CIDADE: \n");
        scanf("%lld", &pib1);

        printf("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS DA CIDADE: \n");
        scanf("%d", &pturisticos1);

  //coleta de dados da carta 2;
        printf("DIGITE O SEGUNDO ESTADO: \n");
        scanf(" %[^\n]", estado2); 

        printf("DIGITE O CÓDIGO DO SEGUNDO ESTADO: \n");
        scanf("%s", codigo2);
                
        printf("DIGITE O NOME DE UMA CIDADE QUE PERTENÇA AO SEGUNDO ESTADO: \n");
        scanf(" %[^\n]", cidade2);

        printf("DIGITE A POPULAÇÃO DA CIDADE: \n");
        scanf("%lld", &populacao2);

        printf("DIGITE A ÁREA TOTAL DA CIDADE: \n");
        scanf("%f", &area2);
        
        printf("DIGITE O PIB DA CIDADE: \n");
        scanf("%lld", &pib2);

        printf("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS DA CIDADE: \n");
        scanf("%d", &pturisticos2);

  // Cálculo de densidade demográfica e PIB per capita com conversão explícita;
              densidade1 = (float) populacao1 / area1;
              pcapita1 = (float) pib1 / (float) populacao1;

              densidade2 = (float) populacao2 / area2;
              pcapita2 = (float) pib2 / (float) populacao2;

  // fórmula para o inverso da densidade
              espacohab1 = area1 / (float) populacao1;
              espacohab2 = area2 / (float) populacao2;

  // Cálculo de super poder;
              superpoder1 = (float) populacao1 + area1 +(float) pib1 + (float) pturisticos1 + pcapita1 + espacohab1;
              superpoder2 = (float) populacao2 + area2 + (float) pib2 + (float) pturisticos2 + pcapita2 + espacohab2;

  // Linha vazia antes da exibição dos dados coletados;
        printf("\n");

  // Apresentação dos dados coletados (CARTA 1);
        printf(">>>>>>> DADOS DA CARTA 1 <<<<<<<\n\n");

        printf("ESTADO: %s\n", estado1);
        printf("CÓDIGO: %s\n", codigo1);
        printf("CIDADE: %s\n", cidade1);
        printf("POPULAÇÃO: %lld de Habitantes\n", populacao1);
        printf("ÁREA: %.2f km²\n", area1);
        printf("PIB: R$ %lld de Reais\n", pib1);
        printf("PONTOS TURÍSTICOS: %d\n", pturisticos1);
        printf("DENSIDADE DEMOGRÁFICA: %f de Hab/km²\n", densidade1);
        printf("PIB PER CAPITA: R$ %f de reais\n", pcapita1);
        printf("SUPER PODER: %lf\n", superpoder1);

  // Linha vazia para separação dos dados;
        printf("\n");

  // Apresentação dos dados coletados (CARTA 2);
          printf(">>>>>>> DADOS DA CARTA 2 <<<<<<<\n\n");

          printf("ESTADO: %s\n", estado2);
          printf("CÓDIGO: %s\n", codigo2);
          printf("CIDADE: %s\n", cidade2);
          printf("POPULAÇÃO: %lld de Habitantes\n", populacao2);
          printf("ÁREA: %.2f km²\n", area2);
          printf("PIB: R$ %lld de Reais\n", pib2);
          printf("PONTOS TURÍSTICOS: %d\n", pturisticos2);
          printf("DENSIDADE DEMOGRÁFICA: %f de Hab/km²\n", densidade2);
          printf("PIB PER CAPITA: R$ %f de reais\n", pcapita2);
          printf("SUPER PODER: %lf\n", superpoder2);

   // Linha vazia para separação dos dados;
          printf("\n");

   // Comparação entre as cartas ultilizando IF-ELSE;
          printf(">>>>>>> RESULTADO <<<<<<<\n\n");

          printf("POPULAÇÃO:\n");

            if(populacao1 > populacao2){
             printf("Carta 1 Venceu!\n");
             printf("Pontuação: %lld\n\n", populacao1);
             }else {
             printf("Carta 2 Venceu!\n");
             printf("Pontuação: %lld\n\n", populacao2);
            }

          printf("ÁREA:\n");

            if(area1 > area2){
             printf("Carta 1 Venceu!\n");
             printf("Pontuação: %.2f\n\n", area1);
             }else {
             printf("Carta 2 Venceu!\n");
             printf("Pontuação: %.2f\n\n", area2);
            }

          printf("PIB:\n");

            if(pib1 > pib2){
             printf("Carta 1 Venceu!\n");
             printf("Pontuação: %lld\n\n", pib1);
             }else {
             printf("Carta 2 Venceu!\n");
             printf("Pontuação: %lld\n\n", pib2);
            }

          printf("PONTOS TURÍSTICOS:\n");

          if(pturisticos1 > pturisticos2){
            printf("Carta 1 Venceu!\n");
            printf("Pontuação: %d\n\n", pturisticos1);
           }else {
            printf("Carta 2 Venceu!\n");
            printf("Pontuação: %d\n\n", pturisticos2);
          }

          printf("DENSIDADE DEMOGRÁFICA:\n");

          if(densidade1 < densidade2){ // A menor densidade vence.
            printf("Carta 1 Venceu!\n");
            printf("Pontuação: %.2f\n\n", densidade1);
           }else {
            printf("Carta 2 Venceu!\n");
            printf("Pontuação: %.2f\n\n", densidade2);
          }

          printf("PIB PER CAPITA:\n");

          if(pcapita1 > pcapita2){
            printf("Carta 1 Venceu!\n");
            printf("Pontuação: %.2f\n\n", pcapita1);
           }else {
            printf("Carta 2 Venceu!\n");
            printf("Pontuação: %.2f\n\n", pcapita2);
          }

          printf("SUPERPODER\n");

          if(superpoder1 > superpoder2){
            printf("Carta 1 Venceu!\n");
            printf("Pontuação: %.2lf\n\n", superpoder1);
           }else {
            printf("Carta 2 Venceu!\n");
            printf("Pontuação: %.2lf\n\n", superpoder2);
          }
       
return 0;
 }