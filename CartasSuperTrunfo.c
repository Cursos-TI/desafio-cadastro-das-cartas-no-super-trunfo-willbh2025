#include <stdio.h>

int main() {
    // Variáveis carta 1
    char estado1;
    char codigo1[20];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis carta 2
    char estado2;
    char codigo2[20];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Instruções para o usuário
    printf("Cadastro da carta 1:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o codigo da carta (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Informe o nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("Informe a populacão da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a Área da cidade (em km2): ");
    scanf("%f", &area1);

    printf("Informe o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o número de pontos turistícos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da carta 2:\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Informe a Populacao da Cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a Area da Cidade (em km2): ");
    scanf("%f", &area2);

    printf("Informe o PIB da Cidade (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d pessoas\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turistícos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d pessoas\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turistícos: %d\n", pontosTuristicos2);

    return 0;
}

