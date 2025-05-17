#include <stdio.h>

int main() {
    // Variáveis para atributos calculados
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Variáveis carta 1
    char estado1;
    char codigo1[20];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;

    // Variáveis carta 2
    char estado2;
    char codigo2[20];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;

    // Entrada de dados carta 1
    printf("Cadastro da carta 1:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o codigo da carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Informe o nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("Informe a populacao da cidade: ");
    scanf("%lu", &populacao1);

    printf("Informe a Area da cidade (em km2): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados carta 2
    printf("\nCadastro da carta 2:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Informe a populacao da cidade: ");
    scanf("%lu", &populacao2);

    printf("Informe a Area da cidade (em km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB da cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Informe o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + densidade1;
    
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + densidade2;

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu pessoas\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %lu pessoas\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Area: %s\n", (area1 > area2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Pontos Turisticos: %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade Populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per Capita: %s\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Super Poder: %s\n", (superPoder1 > superPoder2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    return 0;
}
