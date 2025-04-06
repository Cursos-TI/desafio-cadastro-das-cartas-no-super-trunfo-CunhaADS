#include <stdio.h>

int main(){

       // Definição de variaveis;

        char estado1[20], estado2[20], codigo1[5], codigo2[5], cidade1[20], cidade2[20];
        int populacao1, populacao2, pturisticos1, pturisticos2;
        float area1, area2, pib1, pib2, densidade1, densidade2, pcapita1, pcapita2;
        

        //coleta de dados da carta 1;

       printf("DIGITE O PRIMEIRO ESTADO: \n");
       scanf(" %[^\n]", estado1); 

       printf("DIGITE O CÓDIGO DO PRIMEIRO ESTADO: \n");
       scanf("%s", codigo1);
       
       printf("DIGITE O NOME DE UMA CIDADE QUE PERTENÇA AO PRIMEIRO ESTADO: \n");
       scanf(" %[^\n]", cidade1);
       
       printf("DIGITE A POPULAÇÃO DA CIDADE: \n");
       scanf("%d", &populacao1);
  
       printf("DIGITE A ÁREA TOTAL DA CIDADE: \n");
       scanf("%f", &area1);

       printf("DIGITE O PIB DA CIDADE: \n");
       scanf("%f", &pib1);

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
       scanf("%d", &populacao2);

       printf("DIGITE A ÁREA TOTAL DA CIDADE: \n");
       scanf("%f", &area2);
 
       printf("DIGITE O PIB DA CIDADE: \n");
       scanf("%f", &pib2);
 
       printf("DIGITE A QUANTIDADE DE PONTOS TURÍSTICOS DA CIDADE: \n");
       scanf("%d", &pturisticos2);

       // Cálculo de densidade demográfica e PIB per capita com conversão explícita;
       
         densidade1 = (float) populacao1 / area1;
         pcapita1 = (float) pib1 / populacao1;

         densidade2 = (float) populacao2 / area2;
         pcapita2 = (float) pib2 / populacao2;
        
        // Linha vazia antes da exibição dos dados coletados;

        printf("\n");

        // Apresentação dos dados coletados (CARTA 1);
 
       printf(">>>>>>> DADOS DA CARTA 1 <<<<<<<\n\n");

       printf("ESTADO: %s\n", estado1);
       printf("CÓDIGO: %s\n", codigo1);
       printf("CIDADE: %s\n", cidade1);
       printf("POPULAÇÃO: %d de Habitantes\n", populacao1);
       printf("ÁREA: %.2f km²\n", area1);
       printf("PIB: R$ %.2f de Reais\n", pib1);
       printf("PONTOS TURÍSTICOS: %d\n", pturisticos1);
       printf("DENSIDADE DEMOGRÁFICA: %.2f de Hab/km²\n", densidade1);
       printf("PIB PER CAPITA: R$ %.2f de reais\n", pcapita1);

       // Linha vazia para separação dos dados;

       printf("\n");

       // Apresentação dos dados coletados (CARTA 2);

       printf(">>>>>>> DADOS DA CARTA 2 <<<<<<<\n\n");

       printf("ESTADO: %s\n", estado2);
       printf("CÓDIGO: %s\n", codigo2);
       printf("CIDADE: %s\n", cidade2);
       printf("POPULAÇÃO: %d de Habitantes\n", populacao2);
       printf("ÁREA: %.2f km²\n", area2);
       printf("PIB: R$ %.2f de Reais\n", pib2);
       printf("PONTOS TURÍSTICOS: %d\n", pturisticos2);
       printf("DENSIDADE DEMOGRÁFICA: %.2f de Hab/km²\n", densidade2);
       printf("PIB PER CAPITA: R$ %.2f de reais\n", pcapita2);


       return 0;

    }