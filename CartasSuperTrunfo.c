#include <stdio.h>

int main(){


    printf("Jogo Super Trunfo\n"); //Titulo do desafio
    printf("CARTA 1\n"); //Especificando que é a primeira carta


char letra_estado[50]; // Apenas a inicial do Nome do Estado
char codigo_estado[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
char cidade[20]; // Nome da cidade
int populacao; // Quantidade da população
float area; // Tamanho da quilometragem do Estado
float pib; // Valor do PIB
int ponto_turistico; // Quantidade de Pontos Turisticos no Estado


printf("Digite o nome do seu do Estado: \n");
scanf("%s", &letra_estado);

printf("Digite o codigo do seu Estado: A letra inicial do nome do seu estado seguida de um número de 01 a 04 : \n");
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

printf("Estado: %s \n", letra_estado);
printf("Código: %s \n", codigo_estado);
printf("Cidade: %s \n", cidade);
printf("Densidade Populaçional: %d \n", populacao);
printf("Área: %f \n", area);
printf("PIB per capita: %f \n", pib);
printf("Número de Pontos Turísticos: %d \n", ponto_turistico);


printf("CARTA 2\n"); //Especificando que é a segunda carta

char letra_estado1[20]; // Apenas a inicial do Nome do Estado
char codigo_estado1[5]; // Será digitado uma letra do estado seguida de um número de 01 a 04
char cidade1[20]; // Nome da cidade
int populacao1; // Quantidade da população
float area1; // Tamanho da quilometragem do Estado
float pib1; // Valor do PIB
int ponto_turistico1; // Quantidade de Pontos Turisticos no Estado


printf("Digite o nome do seu do Estado: \n");
scanf("%s", &letra_estado1);

printf("Digite o codigo do seu Estado: A letra inicial do nome do seu estado seguida de um número de 01 a 04 : \n");
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

printf("Estado: %s \n" ,letra_estado1);
printf("Código: %s \n", codigo_estado1);
printf("Cidade: %s \n", cidade1);
printf("Densidade Populacional: %d \n", populacao1);
printf("Área: %f \n", area1);
printf("PIB per capita: %f \n", pib1);
printf("Número de Pontos Turísticos: %d \n", ponto_turistico1);
printf("Comparação de cartas (Atributo: População): \n"); // Informação sobre a proxima etapa do jogo:

if(populacao < populacao1){
    printf("Carta 1 - %s (%s):  %d \n" , &letra_estado, &codigo_estado, &populacao); //Carta 1 - Estado / Codigo Estado / Densidade Populacional
    printf("Carta 2 - %s (%s):  %d \n" , &letra_estado1, &codigo_estado1, &populacao1); //Carta 2 - Estado / Codigo Estado / Densidade Populacional
    printf("Resultado: Carta 1 (%s) venceu! \n", letra_estado); // Resultado caso a carta 1 saia como vencedora
}   else{
    printf("Carta 1 - %s (%s):  %d \n" , &letra_estado, &codigo_estado, &populacao); //Carta 1 - Estado / Codigo Estado / Densidade Populacional
    printf("Carta 2 - %s (%s):  %d \n" , &letra_estado1, &codigo_estado1, &populacao1); //Carta 2 - Estado / Codigo Estado / Densidade Populacional
    printf("Resultado: Carta 2 (%s) venceu! \n", letra_estado1); // Resultado caso a carta 2 saia como vencedora
}

printf("Comparação de cartas (Atributo: PIB): \n"); // Informação sobre a proxima etapa do jogo:


if(pib > pib1){
    printf("Carta 1 - %s (%s):  %f \n" , &letra_estado, &codigo_estado, &pib); //Carta 1 - Estado / Codigo Estado / PIB
    printf("Carta 2 - %s (%s):  %f \n" , &letra_estado1, &codigo_estado1, &pib1); //Carta 2 - Estado / Codigo Estado / PIB
    printf("Resultado: Carta 1 (%s) venceu! \n", letra_estado); // Resultado caso a carta 1 saia como vencedora
}   else{
    printf("Carta 1 - %s (%s):  %f \n" , &letra_estado, &codigo_estado, &pib); //Carta 1 - Estado / Codigo Estado / PIB
    printf("Carta 2 - %s (%s):  %f \n" , &letra_estado1, &codigo_estado1, &pib1); //Carta 2 - Estado / Codigo Estado / PIB
    printf("Resultado: Carta 2 (%s) venceu! \n", letra_estado); // Resultado caso a carta 2 saia como vencedora
}

printf("Comparação de cartas (Atributo: Area): \n"); // Informação sobre a proxima etapa do jogo:


if(area > area1){
    printf("Carta 1 - %s (%s):  %f \n" , &letra_estado, &codigo_estado, &area); //Carta 1 - Estado / Codigo Estado / Area
    printf("Carta 2 - %s (%s):  %f \n" , &letra_estado1, &codigo_estado1, &area1); //Carta 2 - Estado / Codigo Estado / Area
    printf("Resultado: Carta 1 (%s) venceu! \n", letra_estado); // Resultado caso a carta 1 saia como vencedora
}   else{
    printf("Carta 1 - %s (%s):  %f \n" , &letra_estado, &codigo_estado, &area); //Carta 1 - Estado / Codigo Estado / Area
    printf("Carta 2 - %s (%s):  %f \n" , &letra_estado1, &codigo_estado1, &area1); //Carta 2 - Estado / Codigo Estado / Area
    printf("Resultado: Carta 2 (%s) venceu! \n", letra_estado); // Resultado caso a carta 2 saia como vencedora
}

printf("Comparação de cartas (Atributo: Pontos Turisticos): \n"); // Informação sobre a proxima etapa do jogo:

if(ponto_turistico > ponto_turistico1){
    printf("Carta 1 - %s (%s):  %d \n" , &letra_estado, &codigo_estado, &ponto_turistico); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
    printf("Carta 2 - %s (%s):  %d \n" , &letra_estado1, &codigo_estado1, &ponto_turistico1); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
    printf("Resultado: Carta 1 (%s) venceu! \n", letra_estado); // Resultado caso a carta 1 saia como vencedora
}   else{
    printf("Carta 1 - %s (%s):  %d \n" , &letra_estado, &codigo_estado, &ponto_turistico); //Carta 1 - Estado / Codigo Estado / Ponto Turistico
    printf("Carta 2 - %s (%s):  %d \n" , &letra_estado1, &codigo_estado1, &ponto_turistico1); //Carta 2 - Estado / Codigo Estado / Ponto Turistico
    printf("Resultado: Carta 2 (%s) venceu! \n", letra_estado); // Resultado caso a carta 2 saia como vencedora
}

    return 0;
}