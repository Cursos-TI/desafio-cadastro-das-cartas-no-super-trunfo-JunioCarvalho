#include <stdio.h>
#include <stdlib.h>
 
 int main() {

        //Titulo do desafio
     printf("Bem Vindo ao >>Super Trunfo<<\n"); 

     printf("\n");
         //Especificando que é a primeira carta
     printf("Carta 1\n");

     
     char nome_estado[10]; // Apenas a inicial do Nome do Estado
     char codigo_estado[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
     char cidade[10]; // Nome da cidade
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
 
     char nome_estado1[10]; // Apenas a inicial do Nome do Estado
     char codigo_estado1[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
     char cidade1[10]; // Nome da cidade
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
     
        int opcao;
        //Menu de Comparação de Cartas:
        printf("Comparação de cartas: \n");
        printf("Digite 1 Para comparar (Atributo: População) \n");
        printf("Digite 2 Para comparar (Atributo: Area) \n");
        printf("Digite 3 Para comparar (Atributo: PIB) \n");
        printf("Digite 4 Para comparar (Atributo: Pontos Turisticos) \n");
        printf("Digite 5 Para comparar (Atributo: Densidade Populacional) \n");
        printf("Digite 6 Para comparar (Atributo: PIB Per Capita) \n");
        printf("Digite 7 Para comparar (Atributo: Super Poder) \n");
        scanf("%d", &opcao);

        //Logica feita com Switc If / Else
        switch (opcao)
        {
        case 1:
        if (populacao == populacao1){
        printf("### O Jogo empatou! ### \n");
        } else if (populacao > populacao1){
        printf("Carta 1 (Atributo: População) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &populacao);
        printf("Carta 2 (Atributo: População) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &populacao1);
        printf("Resultado: Carta 1 (Atributo: População) (%s) venceu! \n", nome_estado);
        } else {
            printf("Carta 1 (Atributo: População) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &populacao); 
            printf("Carta 2 (Atributo: População) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &populacao1);
            printf("Resultado: Carta 2 (Atributo: População) (%s) venceu! \n", nome_estado1);
        }   break;
        
        case 2: 
        if (area == area1){
        printf("### O Jogo empatou! ### \n");
        } else if (area > area1){
        printf("Carta 1 (Atributo: Area) - %s (%s):  %f \n" , &nome_estado, &codigo_estado, &area);
        printf("Carta 2 (Atributo: Area) - %s (%s):  %f \n" , &nome_estado1, &codigo_estado1, &area1);
        printf("Resultado: Carta 1 (Atributo: Area) (%s) venceu! \n", nome_estado);
        } else {
        printf("Carta 1 (Atributo: Area) - %s (%s):  %f \n" , &nome_estado, &codigo_estado, &area);
        printf("Carta 2 (Atributo: Area) - %s (%s):  %f \n" , &nome_estado1, &codigo_estado1, &area1);
        printf("Resultado: Carta 2 (Atributo: Area) (%s) venceu! \n", nome_estado1);    
        }   break;
        
        case 3:
        if (pib == pib1){
        printf("### O Jogo empatou! ### \n");
        } else if (pib > pib1){
        printf("Carta 1 (Atributo: PIB) - %s (%s):  %f \n" , &nome_estado, &codigo_estado, &pib);
        printf("Carta 2 (Atributo: PIB) - %s (%s):  %f \n" , &nome_estado1, &codigo_estado1, &pib1);
        printf("Resultado: Carta 1 (Atributo: PIB) (%s) venceu!", nome_estado);
        } else{
        printf("Carta 1 (Atributo: PIB) - %s (%s):  %f \n" , &nome_estado, &codigo_estado, &pib);
        printf("Carta 2 (Atributo: PIB) - %s (%s):  %f \n" , &nome_estado1, &codigo_estado1, &pib1);
        printf("Resultado: Carta 2 (Atributo: PIB) (%s) venceu! \n", nome_estado1);
        }   break;

        case 4:
        if (ponto_turistico == ponto_turistico1){
        printf("### O Jogo empatou! ### \n");
        } else if (ponto_turistico > ponto_turistico1){
        printf("Carta 1 (Atributo: Pontos Turisticos) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &ponto_turistico);
        printf("Carta 2 (Atributo: Pontos Turisticos) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &ponto_turistico1);
        printf("Resultado: Carta 1 (Atributo: Pontos Turisticos) (%s) venceu! \n", nome_estado);
        } else{
        printf("Carta 1 (Atributo: Pontos Turisticos) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &ponto_turistico);
        printf("Carta 2 (Atributo: Pontos Turisticos) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &ponto_turistico1);
        printf("Resultado: Carta 2 (Atributo: Pontos Turisticos) (%s) venceu! \n", nome_estado1);
        }   break;

        case 5:
        if (densidade_populacional == densidade_populacional1){
        printf("### O Jogo empatou! ### \n");   
        } else if (densidade_populacional < densidade_populacional1){
        printf("Carta 1 (Atributo: Densidade Populacional) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &densidade_populacional);
        printf("Carta 2 (Atributo: Densidade Populacional) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &densidade_populacional1);
        printf("Resultado: Carta 1 (Atributo: Densidade Populacional) (%s) venceu! \n", nome_estado);
        } else{
            printf("Carta 1 (Atributo: Densidade Populacional) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &densidade_populacional);
            printf("Carta 2 (Atributo: Densidade Populacional) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &densidade_populacional1);
            printf("Resultado: Carta 2 (Atributo: Densidade Populacional) (%s) venceu! \n", nome_estado1);
        } break;

        case 6:
        if (pib_percapita == pib_percapita1){
        printf("### O Jogo empatou! ### \n");
        } else if(pib_percapita > pib_percapita1){
            printf("Carta 1 (Atributo: PIB Per Capita) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &pib_percapita);
            printf("Carta 2 (Atributo: PIB Per Capita) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &pib_percapita1);
            printf("Resultado: Carta 1 (Atributo: PIB Per Capita) (%s) venceu! \n", nome_estado);
        } else{
            printf("Carta 1 (Atributo: PIB Per Capita) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &pib_percapita);
            printf("Carta 2 (Atributo: PIB Per Capita) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &pib_percapita1);
            printf("Resultado: Carta 2 (Atributo: PIB Per Capita) (%s) venceu! \n", nome_estado1);
        } break;

        case 7:
        if (superPoder1 > superPoder2){
        printf("### O Jogo empatou! ### \n");
        } else if(superPoder1 > superPoder2){
            printf("Carta 1 (Atributo: Super Poder) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &superPoder1);
            printf("Carta 2 (Atributo: Super Poder) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &superPoder2);
            printf("Resultado: Carta 1 (Atributo: Super Poder) (%s) venceu! \n", nome_estado);
        } else{
            printf("Carta 1 (Atributo: Super Poder) - %s (%s):  %d \n" , &nome_estado, &codigo_estado, &superPoder1);
            printf("Carta 2 (Atributo: Super Poder) - %s (%s):  %d \n" , &nome_estado1, &codigo_estado1, &superPoder2);
            printf("Resultado: Carta 2 (Atributo: Super Poder) (%s) venceu! \n", nome_estado1);
        } break;

        default:
        printf("Opção Invalida!!!");
            break;
        }

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