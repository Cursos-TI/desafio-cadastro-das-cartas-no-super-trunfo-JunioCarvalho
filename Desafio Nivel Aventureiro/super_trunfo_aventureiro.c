#include <stdio.h>
 
 int main() {

        //Titulo do desafio
     printf("Bem Vindo ao >>Super Trunfo<<\n"); 
         //Especificando que é a primeira carta
    printf("Carta 1\n");

     
     char letra_estado[50]; // Apenas a inicial do Nome do Estado
     char codigo_estado[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
     char cidade[20]; // Nome da cidade
     int populacao; // Quantidade da população
     float area; // Tamanho da quilometragem do Estado
     float pib; // Valor do PIB
     int ponto_turistico; // Quantidade de Pontos Turisticos no Estado */
     float densidade_populacional; //Densidade Populacional
     float pib_percapita; // PIB Per Capita
 
     printf("Digite o nome do Estado: \n");
     scanf("%s", &letra_estado);
 
     printf("Digite o codigo do seu Estado: \n");
     scanf("%s", &codigo_estado);
     
     printf("Digite o nome de alguma cidadade do Estado selecionado acima: \n");
     scanf("%s", &cidade);
     
     printf("Digite a quantidade da População da cidadade digitada acima: \n");
     scanf("%d", &populacao);
 
     printf("Digite a área da cidade em quilômetros quadrados: \n");
     scanf("%f", &area);
     
     printf("Digite o valor do PIB da cidadade digitada acima: \n");
     scanf("%f", &pib);
     
     printf("Digite a quantidade de Pontos Turisticos da cidadade digitada acima: \n");
     scanf("%d", &ponto_turistico);

     //Equação calculando a divisão da População / Área e também do PIB por População.
     //Utilizei (float) devido está fazendo uma divisão de tipo int e float
     densidade_populacional = (float) populacao / area; 
     pib_percapita = (float) pib / populacao;
 

     printf("Estado: %s \n", letra_estado);
     printf("Código: %s \n", codigo_estado);
     printf("Cidade: %s \n", cidade);
     printf("População: %d \n", populacao);
     printf("Área: %.2f km² \n", area);
     printf("PIB: R$%.2f bilhões de reais \n", pib);
     printf("Número de Pontos Turísticos: %d \n", ponto_turistico);
     printf("A Densidade Populacional do (%s) é: %f hab/km² \n", codigo_estado, densidade_populacional);
     printf("O PIB Per Capita do (%s) é: %f reais \n", codigo_estado, pib_percapita);
 
 
     printf("Carta 2\n"); //Especificando que é a segunda carta
 
     char letra_estado1[5]; // Apenas a inicial do Nome do Estado
     char codigo_estado1[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
     char cidade1[20]; // Nome da cidade
     int populacao1; // Quantidade da população
     float area1; // Tamanho da quilometragem do Estado
     float pib1; // Valor do PIB
     int ponto_turistico1; // Quantidade de Pontos Turisticos no Estado
     float densidade_populacional1;  //Densidade Populacional
     float pib_percapita1; // PIB Per Capita
     
     
     printf("Digite o nome do Estado: \n");
     scanf("%s", &letra_estado1);
     
     printf("Digite o codigo do seu Estado: \n");
     scanf("%s", &codigo_estado1);
     
     printf("Digite o nome de alguma cidadade do Estado selecionado acima: \n");
     scanf("%s", &cidade1);
     
     printf("Digite a quantidade da População da cidadade digitada acima: \n");
     scanf("%d", &populacao1);
     
     printf("Digite a área da cidade em quilômetros quadrados: \n");
     scanf("%f", &area1);
     
     printf("Digite o valor do PIB da cidadade digitada acima: \n");
     scanf("%f", &pib1);
     
     printf("Digite a quantidade de Pontos Turisticos da cidadade digitada acima: \n");
     scanf("%d", &ponto_turistico1);

    //Equação calculando a divisão da População / Área e também do PIB por População.
    //Utilizei (float) devido está fazendo uma divisão de tipo int e float
     densidade_populacional1 = (float) populacao1 / area1;
     pib_percapita1 = (float) pib1 / populacao1;

     printf("Estado: %s \n", letra_estado1);
     printf("Código: %s \n", codigo_estado1);
     printf("Cidade: %s \n", cidade1);
     printf("População: %d \n", populacao1);
     printf("Área: %.2f km² \n", area1);
     printf("PIB: R$%.2f bilhões de reais \n", pib1);
     printf("Número de Pontos Turísticos: %d \n", ponto_turistico1);
     printf("A Densidade Populacional do (%s) é: %f hab/km² \n", codigo_estado1, densidade_populacional1);
     printf("O PIB Per Capita do (%s) é: %f reais \n", codigo_estado1, pib_percapita1);




     return 0;

 }