#include <stdio.h>
#include <stdlib.h>
 
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
     
        int atributos1, atributos2, resultado1, resultado2;
        
        //Menu de Comparação de Cartas:
        printf("###Comparação de cartas###\n\n");
        printf("Escolha o Primeiro Atributo.\n");
        printf("Digite 1 Para comparar (Atributo: População) \n");
        printf("Digite 2 Para comparar (Atributo: Area) \n");
        printf("Digite 3 Para comparar (Atributo: PIB) \n");
        printf("Digite 4 Para comparar (Atributo: Pontos Turisticos) \n");
        printf("Digite 5 Para comparar (Atributo: Densidade Populacional) \n");
        printf("Digite 6 Para comparar (Atributo: PIB Per Capita) \n");
        printf("Digite 7 Para comparar (Atributo: Super Poder) \n\n");

        printf("Digite a opção a qual deseja comparar: ");
        scanf("%d", &atributos1);

        //Logica feita com Switc e Operadores Ternario
        switch (atributos1)
        {
        case 1:
        printf("Você escolheu a opção População!\n\n");
        resultado1 = populacao > populacao1 ? 1 : 0;
           break;
        
        case 2: 
        printf("Você escolheu a opção Àrea\n\n");
        resultado1 = area > area1 ? 1 : 0;
            break;
        
        case 3:
        printf("Você escolheu a opção PIB\n\n");
        resultado1 = pib > pib1 ? 1 : 0;
            break;

        case 4:
        printf("Você escolheu a opção Ponto Turistico\n\n");
        resultado1 = ponto_turistico > ponto_turistico1 ? 1 : 0;
           break;

        case 5:
        printf("Você escolheu a opção Densidade Populacional\n\n");
        resultado1 = densidade_populacional < densidade_populacional1 ? 1 : 0;
            break;

        case 6:
        printf("Você escolheu a opção PIB Per Capita\n\n");
        resultado1 = pib_percapita > pib_percapita1 ? 1 : 0;
            break;

        case 7:
        printf("Você escolheu a opção Super Poder\n\n");
        resultado1 = superPoder1 > superPoder2 ? 1 : 0;
           break;

        default:
        printf("Opção Invalida!!!\n\n");
            break;
        }

        //Menu de Comparação de Cartas:
        printf("Escolha o Segundo Atributo.\n\n");
        printf("***Atenção você deve escolher um Abtributo diferente do Primeiro:***\n\n");
        printf("Digite 1 Para comparar (Atributo: População) \n");
        printf("Digite 2 Para comparar (Atributo: Area) \n");
        printf("Digite 3 Para comparar (Atributo: PIB) \n");
        printf("Digite 4 Para comparar (Atributo: Pontos Turisticos) \n");
        printf("Digite 5 Para comparar (Atributo: Densidade Populacional) \n");
        printf("Digite 6 Para comparar (Atributo: PIB Per Capita) \n");
        printf("Digite 7 Para comparar (Atributo: Super Poder) \n\n");

        printf("Digite a opção a qual deseja comparar: ");
        scanf("%d", &atributos2);

        if (atributos1 == atributos2)
        {
        printf("Você escolheu o mesmo Atributo!!!\n");
        } else {
            switch (atributos2) ////Logica feita com Switc e Operadores Ternario
            {
                case 1:
                printf("Você escolheu a opção População!\n\n");
                resultado2 = populacao > populacao1 ? 1 : 0;
                   break;
                
                case 2: 
                printf("Você escolheu a opção Àrea\n\n");
                resultado2 = area > area1 ? 1 : 0;
                    break;
                
                case 3:
                printf("Você escolheu a opção PIB\n\n");
                resultado2 = pib > pib1 ? 1 : 0;
                    break;
        
                case 4:
                printf("Você escolheu a opção Ponto Turistico\n\n");
                resultado2 = ponto_turistico > ponto_turistico1 ? 1 : 0;
                   break;
        
                case 5:
                printf("Você escolheu a opção Densidade Populacional\n\n");
                resultado2 = densidade_populacional < densidade_populacional1 ? 1 : 0;
                    break;
        
                case 6:
                printf("Você escolheu a opção PIB Per Capita\n\n");
                resultado2 = pib_percapita > pib_percapita1 ? 1 : 0;
                    break;
        
                case 7:
                printf("Você escolheu a opção Super Poder\n\n");
                resultado2 = superPoder1 > superPoder2 ? 1 : 0;
                   break;
        
                default:
                printf("Opção Invalida!!!\n\n");
                    break;
            }

        if (resultado1 && resultado2) {
        printf("%s Você Venceu!!!\n", nome_estado);

        } else if (resultado1 != resultado2)
        {
        printf("Empatou!!!\n");

        } else {
        printf("%s Você Venceu \n", nome_estado1);
        }
        
        }
        
        return 0;

 }