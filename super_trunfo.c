#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char nome_estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int qt_populacao1;
    float area1;
    float vr_pib1;
    int nr_pontos_turisticos1;
    float densidade1; // densidade da população (habitantes por km²)
    float vr_pib_per_capita1; // vr_pib per capita (em reais)
    float super_poder1; // Super Poder para a carta 1

    // Variáveis da segunda carta
    char nome_estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int qt_populacao2;
    float area2;
    float vr_pib2;
    int nr_pontos_turisticos2;
    float densidade2; // densidade da população (habitantes por km²)
    float vr_pib_per_capita2; // vr_pib per capita (em reais)
    float super_poder2; // Super Poder para a carta 2

    // Prompt para entrada de dados da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &nome_estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("População: ");
    scanf("%lu", &qt_populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &vr_pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nr_pontos_turisticos1);

    // Calcula densidade da população, vr_pib per capita, e Super Poder da primeira carta
    densidade1 = (float)qt_populacao1 / area1;
    vr_pib_per_capita1 = (vr_pib1 * 1000000000) / qt_populacao1; // Convert vr_pib from billions to reais
    super_poder1 = (float)qt_populacao1 + area1 + vr_pib1 + (float)nr_pontos_turisticos1 + vr_pib_per_capita1 + (1.0 / densidade1);

    // Prompt para entrada de dados da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A a H): ");
    scanf(" %c", &nome_estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo_carta2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("População: ");
    scanf("%lu", &qt_populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &vr_pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nr_pontos_turisticos2);

    // Calcula densidade da população, vr_pib per capita, e Super Poder da segunda carta
    densidade2 = (float)qt_populacao2 / area2;
    vr_pib_per_capita2 = (vr_pib2 * 1000000000) / qt_populacao2; // Convert vr_pib from billions to reais
    super_poder2 = (float)qt_populacao2 + area2 + vr_pib2 + (float)nr_pontos_turisticos2 + vr_pib_per_capita2 + (1.0 / densidade2);

    // Imprime informações da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", nome_estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", qt_populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", vr_pib1);
    printf("Número de Pontos Turísticos: %d\n", nr_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", vr_pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Imprime informações da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", nome_estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", qt_populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", vr_pib2);
    printf("Número de Pontos Turísticos: %d\n", nr_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", vr_pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Compara atributos e imprime resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (qt_populacao1 > qt_populacao2) ? 1 : 2, qt_populacao1 > qt_populacao2);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (vr_pib1 > vr_pib2) ? 1 : 2, vr_pib1 > vr_pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (nr_pontos_turisticos1 > nr_pontos_turisticos2) ? 1 : 2, nr_pontos_turisticos1 > nr_pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (vr_pib_per_capita1 > vr_pib_per_capita2) ? 1 : 2, vr_pib_per_capita1 > vr_pib_per_capita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, super_poder1 > super_poder2);

    return 0;

}
