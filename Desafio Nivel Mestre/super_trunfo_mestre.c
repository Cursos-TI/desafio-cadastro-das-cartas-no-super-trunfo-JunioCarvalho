#include <stdio.h>
 
 int main() {

        //Titulo do desafio
     printf("Bem Vindo ao >>Super Trunfo<<\n"); 

     printf("\n");
         //Especificando que é a primeira carta
     printf("Carta 1\n");

     
     char nome_estado[50]; // Apenas a inicial do Nome do Estado
     char codigo_estado[10]; // Será digitado uma letra do estado seguida de um número de 01 a 04
     char cidade[20]; // Nome da cidade
     unsigned long int populacao; // Quantidade da população
     float area; // Tamanho da quilometragem do Estado
     double pib; // Valor do PIB
     int ponto_turistico; // Quantidade de Pontos Turisticos no Estado */
     float densidade_populacional; //Densidade Populacional
     double pib_percapita; // PIB Per Capita
 
     printf("Digite o nome do Estado: \n");
     fgets(nome_estado, sizeof(nome_estado), stdin); // Lê o nome com espaços
 
     printf("Digite o codigo do seu Estado: \n");
     scanf("%s", &codigo_estado);
     
     printf("Digite o nome de alguma cidadade do Estado selecionado acima: \n");
     scanf("%s", &cidade);
     
     printf("Digite a quantidade da População da cidadade digitada acima: \n");
     scanf("%d", &populacao);
 
     printf("Digite a área da cidade em quilômetros quadrados: \n");
     scanf("%f", &area);
     
     printf("Digite o valor do PIB da cidadade digitada acima: \n");
     scanf("%lf", &pib);
     
     printf("Digite a quantidade de Pontos Turisticos da cidadade digitada acima: \n");
     scanf("%d", &ponto_turistico);
     printf("\n");

     //Equação calculando a divisão da População / Área e também do PIB por População.
     //Utilizei (float) devido está fazendo uma divisão de tipo int e float
     densidade_populacional = (float) populacao / area; 
     pib_percapita =  pib / populacao;
 

     printf("Estado: %s", nome_estado);
     printf("Código: %s \n", codigo_estado);
     printf("Cidade: %s \n", cidade);
     printf("População: %d \n", populacao);
     printf("Área: %.2f km² \n", area);
     printf("PIB: R$%.2f bilhões de reais \n", pib);
     printf("Número de Pontos Turísticos: %d \n", ponto_turistico);
     printf("A Densidade Populacional do (%s) é: %f hab/km² \n", codigo_estado, densidade_populacional);
     printf("O PIB Per Capita do (%s) é: %f reais \n", codigo_estado, pib_percapita);
     printf("\n");

     float superPoder1 = populacao + area + pib + ponto_turistico + pib_percapita + densidade_populacional;

     printf("Super poder Carta 1 é: %f \n", superPoder1);
     printf("\n");
 
     printf("Carta 2\n"); //Especificando que é a segunda carta
 
     char nome_estado1[50]; // Apenas a inicial do Nome do Estado
     char codigo_estado1[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
     char cidade1[20]; // Nome da cidade
     unsigned long int populacao1; // Quantidade da população
     float area1; // Tamanho da quilometragem do Estado
     double pib1; // Valor do PIB
     int ponto_turistico1; // Quantidade de Pontos Turisticos no Estado
     float densidade_populacional1;  //Densidade Populacional
     double pib_percapita1; // PIB Per Capita
     
     
     printf("Digite o nome do Estado: \n");
     scanf("%s", &nome_estado1);
     
     printf("Digite o codigo do seu Estado: \n");
     scanf("%s", &codigo_estado1);
     
     printf("Digite o nome de alguma cidadade do Estado selecionado acima: \n");
     scanf("%s", &cidade1);
     
     printf("Digite a quantidade da População da cidadade digitada acima: \n");
     scanf("%d", &populacao1);
     
     printf("Digite a área da cidade em quilômetros quadrados: \n");
     scanf("%f", &area1);
     
     printf("Digite o valor do PIB da cidadade digitada acima: \n");
     scanf("%lf", &pib1);
     
     printf("Digite a quantidade de Pontos Turisticos da cidadade digitada acima: \n");
     scanf("%d", &ponto_turistico1);
     printf("\n");

    //Equação calculando a divisão da População / Área e também do PIB por População.
    //Utilizei (float) devido está fazendo uma divisão de tipo int e float
     densidade_populacional1 = (float) populacao1 / area1;
     pib_percapita1 = (float) pib1 / populacao1;

     printf("Estado: %s \n", nome_estado1);
     printf("Código: %s \n", codigo_estado1);
     printf("Cidade: %s \n", cidade1);
     printf("População: %d \n", populacao1);
     printf("Área: %.2f km² \n", area1);
     printf("PIB: R$%.2f bilhões de reais \n", pib1);
     printf("Número de Pontos Turísticos: %d \n", ponto_turistico1);
     printf("A Densidade Populacional do (%s) é: %f hab/km² \n", codigo_estado1, densidade_populacional1);
     printf("O PIB Per Capita do (%s) é: %lf reais \n", codigo_estado1, pib_percapita1);
     printf("\n");

        //Calculo Supor Poder
        float superPoder2 = populacao1 + area1 + pib1 + ponto_turistico1 + pib_percapita1 + densidade_populacional1;

     printf("Super poder Carta 2 é: %f \n", superPoder2);
     printf("\n");
     

        //Comparação de Cartas:
     printf("Comparação de cartas: \n");

        //Comparação População 
     int resultadoPopulacao = populacao > populacao1;       
     printf("População: Carta 1 venceu  (%d) \n", resultadoPopulacao);

        //Comparação Área
     int comparacaoArea = area > area1;
     printf("Área: Carta 1 venceu  (%d) \n", comparacaoArea);

        //Comparação PIB
     int comparacaoPib = pib > pib1;
     printf("PIB: Carta 1 venceu (%d) \n", comparacaoPib);

        //Comparação Pontos Turísticos
     int comparacaoPontosTuristicos = ponto_turistico < ponto_turistico1;
     printf("Pontos Turisticos: Carta 2 venceu (%d) \n", comparacaoPontosTuristicos);

        //Comparação Densidade Populacional
     int comparacaoDensPopulac = densidade_populacional > densidade_populacional1;
     printf("Densidade Populacional Carta 2 venceu (%d) \n", comparacaoDensPopulac);

        //Comparação PIB per Capita
     int comparacaoPibPerCapita = pib_percapita < pib_percapita1;
     printf("PIB Per Capita: Carta 2 venceu (%d) \n", comparacaoPibPerCapita);

        //Comparação Super Poder
     int comparacaoSuperPoder = superPoder1 > superPoder2;
     printf("Super POder: Carta 1 venceu (%d) \n", comparacaoSuperPoder);

        


     return 0;

 }
    /*Carta 1                               //Carta 2
      Estado: Goias                         //Estado: Minas Gerais
      Codigo Estaddo: GO                    //Codigo Estado: MG
      Cidade: Goiania                       //Cidade: Contagem
      População: 1.494.599                  //População: 621.865
      Áre: 729,296                          //Áre: 195,045
      PIB:59.865.989,619                    //PIB: 36.479.764,96
      Pontos Turisticos: 40                 //Pontos Turisticos: 50
      Desindade Populacional: 2 049,4       //Desindade Populacional: 3 188,3
      PIB Per Capita: 38.483,54             //PIB Per Capita: 54.136,41
      */