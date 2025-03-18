#include <stdio.h>

int main() {

    printf ("Tema 2 comparação de cartas.\n");

    printf("Desafio super trunfo\n");
    

    char Estado[50], Estado2[50]; 
    char Codigo[20], Codigo2[20];
    char Cidade[50], Cidade2[50];
    int Populacao, Populacao2;
    float Area, Area2;
    float PIB, PIB2;
    int PontosTuristicos, PontosTuristicos2;

    printf ("Carta 1:\n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade);

    printf("Digite o numero da Populacao: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o numero de PontosTuristicos: \n");
    scanf("%d", &PontosTuristicos);

    printf("Estado: %s - Codigo: %s - Cidade: %s\n", Estado, Codigo, Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %f - PIB: %f\n", Area, PIB);
    printf("PontosTuristicos: %d\n", PontosTuristicos);

    printf("\nDesafio super trunfo. \n");
    printf("\nCarta n2:\n");

    printf("Digite o Estado2: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo2: \n");
    scanf("%s", Codigo2);

    printf("Digite a Cidade2: \n");
    scanf("%s", Cidade2);

    printf("Digite o numero da Populacao2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Area2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de PontosTuristicos2: \n");
    scanf("%d", &PontosTuristicos2);

    printf("Estado2: %s - Codigo2: %s - Cidade2: %s\n", Estado2, Codigo2, Cidade2);
    printf("Populacao2: %d\n", Populacao2);
    printf("Area2: %.2f - PIB2: %.2f\n", Area2, PIB2);
    printf("PontosTuristicos: %d\n", PontosTuristicos2);
    
    printf("\nComparacao de cartas:\n");

    printf("Comparacao Populacao\n");
    if (Populacao > Populacao2) {
        printf("Cidade 1 tem maior Populacao.\n");
    } else if (Populacao < Populacao2) {
        printf("Cidade 2 tem maior Populacao.\n");
    } else {
        printf("As duas cidades tem a mesma Populacao.\n");
    }

    
    printf("Comparacao Area\n");
    if (Area > Area2) {
        printf("Cidade 1 tem maior Area.\n");
    } else if (Area < Area2) {
        printf("Cidade 2 tem maior Area.\n");
    } else {
        printf("As duas cidades tem a mesma Area.\n");
    }

    printf("Comparação PIB\n");
    if (PIB > PIB2) {
        printf("Cidade 1 tem maior PIB.\n");
    } else if (PIB < PIB2) {
        printf("Cidade 2 tem maior PIB.\n");
    } else {
        printf("As duas cidades tem o mesmo PIB.\n");
    }

    return 0;
}