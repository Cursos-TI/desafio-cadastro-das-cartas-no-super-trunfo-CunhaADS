#include <stdio.h>

int main(){

  // Definição de variaveis;
   char estado1[30], estado2[30], codigo1[5], codigo2[5], cidade1[20], cidade2[20];
   int pturisticos1, pturisticos2, pturisticos, superpoder,  area, pib, densidade, pcapita, populacao, carta1 = 1, carta2 = 0;
   float area1, area2, densidade1, densidade2, pcapita1, pcapita2;
   long int populacao1, populacao2, pib1, pib2;
   float espacohab1, espacohab2;
   double superpoder1, superpoder2;
     
      //coleta de dados da carta 1;
        printf("DIGITE O PRIMEIRO ESTADO: \n");
        scanf(" %[^\n]", estado1); 

        printf("DIGITE O CÓDIGO DO PRIMEIRO ESTADO: \n");
        scanf("%s", codigo1);
       
        printf("DIGITE O NOME DE UMA CIDADE QUE PERTENÇA AO PRIMEIRO ESTADO: \n");
        scanf(" %[^\n]", cidade1);

        printf("DIGITE A POPULAÇÃO DA CIDADE: \n");
        scanf("%ld", &populacao1);

        printf("DIGITE A ÁREA TOTAL DA CIDADE: \n");
        scanf("%f", &area1);

        printf("DIGITE O PIB DA CIDADE: \n");
        scanf("%ld", &pib1);

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
        scanf("%ld", &populacao2);

        printf("DIGITE A ÁREA TOTAL DA CIDADE: \n");
        scanf("%f", &area2);
        
        printf("DIGITE O PIB DA CIDADE: \n");
        scanf("%ld", &pib2);

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
        printf("POPULAÇÃO: %ld de Habitantes\n", populacao1);
        printf("ÁREA: %.2f km²\n", area1);
        printf("PIB: R$ %ld de Reais\n", pib1);
        printf("PONTOS TURÍSTICOS: %d\n", pturisticos1);
        printf("DENSIDADE DEMOGRÁFICA: %.2f de Hab/km²\n", densidade1);
        printf("PIB PER CAPITA: R$ %.2f de reais\n", pcapita1);
        printf("SUPER PODER: %lf\n", superpoder1);

      // Linha vazia para separação dos dados;
        printf("\n");

      // Apresentação dos dados coletados (CARTA 2);
          printf(">>>>>>> DADOS DA CARTA 2 <<<<<<<\n\n");

          printf("ESTADO: %s\n", estado2);
          printf("CÓDIGO: %s\n", codigo2);
          printf("CIDADE: %s\n", cidade2);
          printf("POPULAÇÃO: %ld de Habitantes\n", populacao2);
          printf("ÁREA: %.2f km²\n", area2);
          printf("PIB: R$ %ld de Reais\n", pib2);
          printf("PONTOS TURÍSTICOS: %d\n", pturisticos2);
          printf("DENSIDADE DEMOGRÁFICA: %.2f de Hab/km²\n", densidade2);
          printf("PIB PER CAPITA: R$ %.2f de reais\n", pcapita2);
          printf("SUPER PODER: %lf\n", superpoder2);

        // Linha vazia para separação dos dados;
          printf("\n");

        // Comparação entre as cartas ultilizando operador tenário;
          printf(">>>>>>> RESULTADO <<<<<<<\n\n");

          printf("POPULAÇÃO: %s\n", (populacao1 > populacao2) ? "CARTA 1 VENCEU!" : "CARTA 2 VENCEU!");
          printf("ÁREA: %s\n", (area1 > area2) ? "CARTA 1 VENCEU!" : "CARTA 2 VENCEU!");
          printf("PIB: %s\n", (pib1 > pib2) ? "CARTA 1 VENCEU!" : "CARTA 2 VENCEU!");
          printf("PONTOS TURÍSTICOS: %s\n", (pturisticos1 > pturisticos2) ? "CARTA 1 VENCEU!" : "CARTA 2 VENCEU!");
          printf("PIB PER CAPITA: %s\n", (pcapita1 > pcapita2) ? "CARTA 1 VENCEU!" : "CARTA 2 VENCEU!");
          printf("DENSIDADE: %s\n", (densidade1 < densidade2) ? "CARTA 1 VENCEU!" : "CARTA 2 VENCEU!");
          printf("SUPERPODER: %s\n", (superpoder1 > superpoder2) ? "CARTA 1 VENCEU!" : "CARTA 2 VENCEU!");

          
  return 0;


}