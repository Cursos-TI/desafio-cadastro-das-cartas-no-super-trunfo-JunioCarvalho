#include <stdio.h>
 
 int main() {

        //Titulo do desafio
     printf("Bem Vindo ao >>Super Trunfo<<\n"); 

     printf("\n");
         //Especificando que é a primeira carta
     printf("Carta 1\n");

     
     char nome_estado[50]; // Apenas a inicial do Nome do Estado
     char codigo_estado[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
     char cidade[20]; // Nome da cidade
     unsigned long int populacao; // Quantidade da população
     float area; // Tamanho da quilometragem do Estado
     float pib; // Valor do PIB
     int ponto_turistico; // Quantidade de Pontos Turisticos no Estado */
     float densidade_populacional; //Densidade Populacional
     float pib_percapita; // PIB Per Capita
 
     printf("Digite o nome do Estado: \n");
     scanf("%s", &nome_estado);

     printf("Digite o codigo do seu Estado: \n");
     scanf("%s", &codigo_estado);
     
     printf("Digite o nome de alguma cidadade do Estado selecionado acima: \n");
     scanf("%s", &cidade);
     
     printf("Digite a quantidade da População da cidadade digitada acima: \n");
     scanf("%u", &populacao);
 
     printf("Digite a área da cidade em quilômetros quadrados: \n");
     scanf("%f", &area);
     
     printf("Digite o valor do PIB da cidadade digitada acima: \n");
     scanf("%f", &pib);
     
     printf("Digite a quantidade de Pontos Turisticos da cidadade digitada acima: \n");
     scanf("%d", &ponto_turistico);
     printf("\n");

     //Equação calculando a divisão da População / Área e também do PIB por População.
     //Utilizei (float) devido está fazendo uma divisão de tipo int e float
     densidade_populacional = (float) populacao / area; 
     pib_percapita = (float) pib / populacao;
 

     printf("Estado: %s \n", nome_estado);
     printf("Código: %s \n", codigo_estado);
     printf("Cidade: %s \n", cidade);
     printf("População: %u \n", populacao);
     printf("Área: %.2f km² \n", area);
     printf("PIB: R$%.2f bilhões de reais \n", pib);
     printf("Número de Pontos Turísticos: %d \n", ponto_turistico);
     printf("A Densidade Populacional do (%s) é: %f hab/km² \n", codigo_estado, densidade_populacional);
     printf("O PIB Per Capita do (%s) é: %f reais \n", codigo_estado, pib_percapita);
     printf("\n");

     float superPoder1 = populacao + area + pib + ponto_turistico + pib_percapita + densidade_populacional;

     printf("Super poder Carta 1 é: %.2f \n", superPoder1);
     printf("\n");
 
     printf("Carta 2\n"); //Especificando que é a segunda carta
 
     char nome_estado1[50]; // Apenas a inicial do Nome do Estado
     char codigo_estado1[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
     char cidade1[20]; // Nome da cidade
     unsigned long int populacao1; // Quantidade da população
     float area1; // Tamanho da quilometragem do Estado
     float pib1; // Valor do PIB
     int ponto_turistico1; // Quantidade de Pontos Turisticos no Estado
     float densidade_populacional1;  //Densidade Populacional
     float pib_percapita1; // PIB Per Capita
     
     
     printf("Digite o nome do Estado: \n");
     scanf("%s", &nome_estado1);
     
     printf("Digite o codigo do seu Estado: \n");
     scanf("%s", &codigo_estado1);
     
     printf("Digite o nome de alguma cidadade do Estado selecionado acima: \n");
     scanf("%s", &cidade1);
     
     printf("Digite a quantidade da População da cidadade digitada acima: \n");
     scanf("%u", &populacao1);
     
     printf("Digite a área da cidade em quilômetros quadrados: \n");
     scanf("%f", &area1);
     
     printf("Digite o valor do PIB da cidadade digitada acima: \n");
     scanf("%f", &pib1);
     
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
     printf("O PIB Per Capita do (%s) é: %f reais \n", codigo_estado1, pib_percapita1);
     printf("\n");

        //Calculo Supor Poder
        float superPoder2 = populacao1 + area1 + pib1 + ponto_turistico1 + pib_percapita1 + densidade_populacional1;

        printf("Super poder Carta 2 é: %.2f \n", superPoder2);
        printf("\n");
     

        //Comparação de Cartas:
        printf("Comparação de cartas: \n");

        //Comparação População 
        printf("Comparação de cartas (Atributo: População): \n");

        if(populacao < populacao1){
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &populacao); //Carta 1 - Estado / Codigo Estado / Densidade Populacional
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &populacao1); //Carta 2 - Estado / Codigo Estado / Densidade Populacional
        printf("Resultado: Carta 1 (%s) venceu! \n", nome_estado); // Resultado caso a carta 1 saia como vencedora
    }   else{
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &populacao); //Carta 1 - Estado / Codigo Estado / Densidade Populacional
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &populacao1); //Carta 2 - Estado / Codigo Estado / Densidade Populacional
        printf("Resultado: Carta 2 (%s) venceu! \n", nome_estado1); // Resultado caso a carta 2 saia como vencedora
    }
        printf("\n");
        
        
        //Comparação Área
        printf("Comparação de cartas (Atributo: Area): \n");    
    
        if(area > area1){
         printf("Carta 1 - %s (%s):  %f \n" , &nome_estado, &codigo_estado, &area); //Carta 1 - Estado / Codigo Estado / Area
         printf("Carta 2 - %s (%s):  %f \n" , &nome_estado1, &codigo_estado1, &area1); //Carta 2 - Estado / Codigo Estado / Area
         printf("Resultado: Carta 1 (%s) venceu! \n", nome_estado); // Resultado caso a carta 1 saia como vencedora
     }   else{
         printf("Carta 1 - %s (%s):  %f \n" , &nome_estado, &codigo_estado, &area); //Carta 1 - Estado / Codigo Estado / Area
         printf("Carta 2 - %s (%s):  %f \n" , &nome_estado1, &codigo_estado1, &area1); //Carta 2 - Estado / Codigo Estado / Area
         printf("Resultado: Carta 2 (%s) venceu! \n", nome_estado1); // Resultado caso a carta 2 saia como vencedora
     }
        printf("\n");

        //Comparação PIB
        printf("Comparação de cartas (Atributo: PIB): \n");
       
        if(pib > pib1){
        printf("Carta 1 - %s (%s):  %f \n" , &nome_estado, &codigo_estado, &pib); //Carta 1 - Estado / Codigo Estado / PIB
        printf("Carta 2 - %s (%s):  %f \n" , &nome_estado1, &codigo_estado1, &pib1); //Carta 2 - Estado / Codigo Estado / PIB
        printf("Resultado: Carta 1 (%s) venceu!", nome_estado); // Resultado caso a carta 1 saia como vencedora
    }   else{
        printf("Carta 1 - %s (%s):  %f \n" , &nome_estado, &codigo_estado, &pib); //Carta 1 - Estado / Codigo Estado / PIB
        printf("Carta 2 - %s (%s):  %f \n" , &nome_estado1, &codigo_estado1, &pib1); //Carta 2 - Estado / Codigo Estado / PIB
        printf("Resultado: Carta 2 (%s) venceu! \n", nome_estado1); // Resultado caso a carta 2 saia como vencedora
    }
        printf("\n");

        //Comparação Pontos Turísticos
        printf("Comparação de cartas (Atributo: Pontos Turisticos): \n"); // Informação sobre a proxima etapa do jogo:
    
        if(ponto_turistico > ponto_turistico1){
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &ponto_turistico); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &ponto_turistico1); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
        printf("Resultado: Carta 1 (%s) venceu! \n", nome_estado); // Resultado caso a carta 1 saia como vencedora
    }   else{
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &ponto_turistico); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &ponto_turistico1); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
        printf("Resultado: Carta 2 (%s) venceu! \n", nome_estado1); // Resultado caso a carta 2 saia como vencedora
    }
        printf("\n");

        //Comparação Densidade Populacional
        printf("Comparação de cartas (Atributo: Densidade Populacional): \n");

        if(densidade_populacional < densidade_populacional1){
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &densidade_populacional); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &densidade_populacional1); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
        printf("Resultado: Carta 1 (%s) venceu! \n", nome_estado); // Resultado caso a carta 1 saia como vencedora
    }   else{
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &densidade_populacional); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &densidade_populacional1); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
        printf("Resultado: Carta 2 (%s) venceu! \n", nome_estado1); // Resultado caso a carta 2 saia como vencedora
    }
        printf("\n");

        //Comparação PIB per Capita
        printf("Comparação de cartas (Atributo: PIB Per Capita): \n");

        if(pib_percapita > pib_percapita1){
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &pib_percapita); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &pib_percapita1);
        printf("Resultado: Carta 1 (%s) venceu! \n", nome_estado); // Resultado caso a carta 1 saia como vencedora
    }   else{
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &pib_percapita); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &pib_percapita1); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
        printf("Resultado: Carta 2 (%s) venceu! \n", nome_estado1); // Resultado caso a carta 2 saia como vencedora
    }
        printf("\n");

        //Comparação Super Poder
        printf("Comparação de cartas (Atributo: Super Poder): \n");

        if(superPoder1 > superPoder2){
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &superPoder1); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &superPoder2); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
        printf("Resultado: Carta 1 (%s) venceu! \n", nome_estado); // Resultado caso a carta 1 saia como vencedora
    }   else{
        printf("Carta 1 - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &superPoder1); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
        printf("Carta 2 - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &superPoder2); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
        printf("Resultado: Carta 2 (%s) venceu! \n", nome_estado1); // Resultado caso a carta 2 saia como vencedora
    }
        printf("\n");
        return 0;

 }
    /*Carta 1                               //Carta 2
      Estado: Goias                         //Estado: Minas
      Codigo Estaddo: GO                    //Codigo Estado: MG
      Cidade: Goiania                       //Cidade: Contagem
      População: 1.494.599                  //População: 621.865
      Áre: 729,296                          //Áre: 195,045
      PIB:59.865.989,619                    //PIB: 36.479.764,96
      Pontos Turisticos: 40                 //Pontos Turisticos: 50
      Desindade Populacional: 2 049,4       //Desindade Populacional: 3 188,3
      PIB Per Capita: 38.483,54             //PIB Per Capita: 54.136,41
      */