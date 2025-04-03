#include <stdio.h>

int main() {
    printf("Desafio super trunfo\n");

    // Declaração de variáveis
    char Estado1[50], Estado2[50]; 
    char Codigo1[20], Codigo2[20];
    char Cidade1[50], Cidade2[50];
    unsigned long int Populacao1, Populacao2;  
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float PIBperCapita1, PIBperCapita2;
    float DensidadePopulacional1, DensidadePopulacional2; 
    float SuperPoder1, SuperPoder2;

    // Dados para a Carta 1 (Salvador)
    printf("\nCarta 1:\n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo1); 

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite o número da População: \n");
    scanf("%lu", &Populacao1);  

    printf("Digite a Area (em km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &PIB1);  

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    // Calculando PIB per capita e Densidade Populacional da Carta 1
    PIBperCapita1 = PIB1 * 1e9 / Populacao1;  // Convertemos para reais por pessoa
    DensidadePopulacional1 = Populacao1 / Area1;

    // Calculando Super Poder para a Carta 1
    SuperPoder1 = Populacao1 + Area1 + PIB1 + PontosTuristicos1 + PIBperCapita1 + (1 / DensidadePopulacional1);

    // Dados para a Carta 1
    printf("\n***Carta 1***\n");
    printf("Estado: %s - Codigo: %s - Cidade: %s\n", Estado1, Codigo1, Cidade1);
    printf("População: %lu\n", Populacao1);  
    printf("Área: %.2f km² - PIB: %.2f bilhões\n", Area1, PIB1);  // Exibindo PIB em bilhões
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);  // Exibindo PIB per capita com 2 casas decimais
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Dados para a Carta 2 (Curitiba)
    printf("\nCarta 2:\n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo2); 

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite o número da População: \n");
    scanf("%lu", &Populacao2);  

    printf("Digite a Área (em km²): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

    // Calculando PIB per capita e Densidade Populacional para Carta 2
    PIBperCapita2 = PIB2 * 1e9 / Populacao2;  
    DensidadePopulacional2 = Populacao2 / Area2;

    // Calculando Super Poder para a Carta 2
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBperCapita2 + (1 / DensidadePopulacional2);

    // Dados para a Carta 2
    printf("\n***Carta 2***\n");
    printf("Estado: %s - Codigo: %s - Cidade: %s\n", Estado2, Codigo2, Cidade2);
    printf("População: %lu\n", Populacao2);  
    printf("Área: %.2f km² - PIB: %.2f bilhões\n", Area2, PIB2);  // Exibindo PIB em bilhões
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);  // Exibindo PIB per capita com 2 casas decimais
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparação dos Atributos
    printf("\nComparações:\n");

    // Comparação da População
    printf("População: %lu > %lu %d\n", Populacao1, Populacao2, Populacao1 > Populacao2);

    // Comparação da Área
    printf("Área: %.2f > %.2f %d\n", Area1, Area2, Area1 > Area2);

    // Comparação do PIB
    printf("PIB: %.2f > %.2f %d\n", PIB1, PIB2, PIB1 > PIB2);

    // Comparação dos Pontos Turísticos
    printf("Pontos Turísticos: %d > %d %d\n", PontosTuristicos1, PontosTuristicos2, PontosTuristicos1 > PontosTuristicos2);

    // Comparação do PIB per Capita
    printf("PIB per Capita: %.2f > %.2f %d\n", PIBperCapita1, PIBperCapita2, PIBperCapita1 > PIBperCapita2);

    // Comparação da Densidade Populacional (menor é melhor)
    printf("Densidade Populacional: %.2f < %.2f %d\n", DensidadePopulacional1, DensidadePopulacional2, DensidadePopulacional1 < DensidadePopulacional2);

    // Comparação do Super Poder
    printf("Super Poder: %.2f > %.2f %d\n", SuperPoder1, SuperPoder2, SuperPoder1 > SuperPoder2);

    //***Comparando cartas super trunfo utilizando estruturas de decisão (if e if-else)***
    printf ("Comparação entre duas cartas. \n");

    // Comparação atributo população
    printf ("Atributo populacao: \n");

    printf ("Carta1 - Curitiba: 1829000 \n");
    printf ("Carta2 - Salvador: 2400000 \n");
    if (Populacao1 > Populacao2){
        printf ("Resultado: Carta 1 Curitiba venceu!\n");
    } else {
        printf(" Resultado: Carta 2 Salvador venceu!\n");
    }

    // Comparação atributo Area
    printf ("Atributo Area: \n");

    printf ("Curitiba - Area1: 435.28 \n");
    printf ("Salvador - Area2: 693.442 \n");
    if (Area1 > Area2){
        printf ("Area 1 Curitiba venceu!\n");
    } else {
        printf("Area 2 Salvador venceu!\n");
    }

    return 0;
}




