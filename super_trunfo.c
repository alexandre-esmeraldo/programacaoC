#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char nome_estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    int nr_populacao1;
    float nr_area1;
    float vr_pib1;
    int nr_pontos_turisticos1;

    // Variáveis da carta 2
    char nome_estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    int nr_populacao2;
    float nr_area2;
    float vr_pib2;
    int nr_pontos_turisticos2;

    // Prompt para entrada de dados da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &nome_estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%d", &nr_populacao1);
    printf("Área (em km²): ");
    scanf("%f", &nr_area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &vr_pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nr_pontos_turisticos1);

    // Prompt para entrada de dados da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &nome_estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo_carta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: ");
    scanf("%d", &nr_populacao2);
    printf("Área (em km²): ");
    scanf("%f", &nr_area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &vr_pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nr_pontos_turisticos2);

    // Display the first card's information
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", nome_estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", nr_populacao1);
    printf("Área: %.2f km²\n", nr_area1);
    printf("PIB: %.2f bilhões de reais\n", vr_pib1);
    printf("Número de Pontos Turísticos: %d\n", nr_pontos_turisticos1);

    // Display the second card's information
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", nome_estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", nr_populacao2);
    printf("Área: %.2f km²\n", nr_area2);
    printf("PIB: %.2f bilhões de reais\n", vr_pib2);
    printf("Número de Pontos Turísticos: %d\n", nr_pontos_turisticos2);

    return 0;
}
