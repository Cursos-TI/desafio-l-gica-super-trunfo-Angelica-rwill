#include <stdio.h>

int main() {

    printf("Tema 2 comparação de cartas.\n");
    printf("Desafio super trunfo\n");

    // Informações das cartas
    char Estado1[50], Estado2[50]; 
    char Codigo1[20], Codigo2[20];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;

    // Dados para a Carta 1
    printf("Carta 1:\n");
    printf("Digite o Estado1: \n");
    scanf("%s", Estado1);  

    printf("Digite o Codigo1: \n");
    scanf("%s", Codigo1);  

    printf("Digite o Cidade 1: \n");
    scanf("%s", Cidade1);  

    printf("Digite o numero da Populacao1: \n");
    scanf("%d", &Populacao1);  

    printf("Digite a Area1: \n");
    scanf("%f", &Area1);  

    printf("Digite o PIB1: \n");
    scanf("%f", &PIB1);  

    printf("Digite o numero de PontosTuristicos1: \n");
    scanf("%d", &PontosTuristicos1);  

    // Dados para a Carta 2
    printf("\nDesafio super trunfo. \n");
    printf("\nCarta 2:\n");

    printf("Digite o Estado2: \n");
    scanf("%s", Estado2);  

    printf("Digite o Codigo2: \n");
    scanf("%s", Codigo2);  

    printf("Digite o Cidade 2: \n");
    scanf("%s", Cidade2);  

    printf("Digite o numero da Populacao2: \n");
    scanf("%d", &Populacao2);  

    printf("Digite a Area2: \n");
    scanf("%f", &Area2);  

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);  

    printf("Digite o número de PontosTuristicos2: \n");
    scanf("%d", &PontosTuristicos2); 

    // Comparação das cartas
    printf("\nComparacao de cartas:\n");

    // Comparação População
    printf("Comparacao Populacao\n");
    if (Populacao1 > Populacao2) {
        printf("Cidade 1 tem maior Populacao.\n");
    } else if (Populacao1 < Populacao2) {
        printf("Cidade 2 tem maior Populacao.\n");
    } 

    // Comparação PIB
    printf("Comparacao PIB\n");
    if (PIB1 > PIB2) {
        printf("Cidade 1 tem maior PIB.\n");
    } else if (PIB1 < PIB2) {
        printf("Cidade 2 tem maior PIB.\n");
    } 

    // Comparação Pontos Turísticos
    printf("Comparacao Pontos Turisticos\n");
    if (PontosTuristicos1 > PontosTuristicos2) {
        printf("Cidade 1 tem maior numero de PontosTuristicos.\n");
    } else if (PontosTuristicos1 < PontosTuristicos2) {
        printf("Cidade 2 tem maior numero de PontosTuristicos.\n");
    } 

    return 0;
}
