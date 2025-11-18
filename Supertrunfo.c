#include <stdio.h>

int main () {

    char estado[50];
    char codigoCidade[50];
    char nomeDaCidade[50];
    int populacao;
    float areaDaCidade;
    float pib;
    int pontosTuristicos;

    char estado1[50];
    char codigoCidade1[50];
    char nomeDaCidade1[50];
    int populacao1;
    float areaDaCidade1;
    float pib1;
    int pontosTuristicos1;


   //Carta 1

   printf("Primeira carta \n");
    printf("Digite o Estado: \n");
    scanf("%s", estado);

    printf("Digite o Codigo da Carta: ");
    scanf("%s", codigoCidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade);
       
     printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

     printf("Digite a área da cidade: \n");
    scanf("%f", &areaDaCidade);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Digite o numero dos pontos turisticos: \n");
    scanf("%d", &pontosTuristicos);


    //Carta 2

    printf("Segunda carta \n");

    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o Codigo da Carta: \n");
    scanf("%s", codigoCidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);

     printf("Digite a população da cidade: \n");
    scanf("%d", &populacao1);

     printf("Digite a área da cidade: \n");
    scanf("%f", &areaDaCidade1);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o numero dos pontos turisticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Resultado Carta 1
    printf("\n Primeira Carta: \n O Estado é: %s\n - O Codigo é: %s\n - Nome da Cidade é: %s\n - A area é: %f\n - A população é: %d\n - o Pib é: %f\n - Os pontos turisticos sao: %d\n", 
        estado, codigoCidade, nomeDaCidade, areaDaCidade, populacao,  pib, pontosTuristicos);

    //Resultado Carta 2
    printf("\n Segunda Carta: \n O Estado é: %s\n - O Codigo é: %s\n - Nome da Cidade é: %s\n - A area é: %f\n - A população é: %d\n - o Pib é: %f\n - Os pontos turisticos sao: %d\n", 
        estado1, codigoCidade1, nomeDaCidade, areaDaCidade1, populacao1, pib1, pontosTuristicos1);

    };
