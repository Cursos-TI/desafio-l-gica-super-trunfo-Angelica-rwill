#include <stdio.h>

int main() {

    printf ("Tema 2 comparação de cartas.\n");

    printf("Desafio super trunfo\n");
    printf("\nCarta 1:\n");

    char Estado[20], Estado2[20]; 
    char Codigo[20], Codigo2[20];
    char Cidade[10], Cidade2[10];
    int Populacao, Populacao2;
    float Area, Area2;
    float PIB, PIB2;
    int PontosTuristicos, PontosTuristicos2;

    // Entrada para a Carta 1
    printf("Digite o Estado: \n");
    scanf("%s", Estado);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade);

    printf("Digite o número da População: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de PontosTuristicos: \n");
    scanf("%d", &PontosTuristicos);

    printf("Estado: %s - Codigo: %s - Cidade: %s\n", Estado, Codigo, Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f - PIB: %.2f\n", Area, PIB);
    printf("Pontos Turísticos: %d\n", PontosTuristicos);

    printf("\nDesafio super trunfo");
    printf("\nCarta 2:\n");

    // Entrada para a Carta 2
    printf("Digite o Estado2: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo2: \n");
    scanf("%s", Codigo2);

    printf("Digite a Cidade2: \n");
    scanf("%s", Cidade2);

    printf("Digite o número da População2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de Pontos Turísticos2: \n");
    scanf("%d", &PontosTuristicos2);

    printf("Estado2: %s - Codigo2: %s - Cidade2: %s\n", Estado2, Codigo2, Cidade2);
    printf("População2: %d\n", Populacao2);
    printf("Área2: %.2f - PIB2: %.2f\n", Area2, PIB2);
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    
    printf("\nComparação de cartas:\n");

    return 0;

}