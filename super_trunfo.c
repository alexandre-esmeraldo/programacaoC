#include <stdio.h>

// Programa para o jogo Super Trunfo com comparação avançada de dois atributos escolhidos pelo usuário

int main() {
    // Variáveis da primeira carta
    char nome_estado1;
    char codigo_carta1[4];
    char nome_cidade1[50];
    unsigned long int qt_populacao1;
    float area1;
    float vr_pib1;
    int nr_pontos_turisticos1;
    float densidade1; // Densidade populacional (habitantes por km²)
    float vr_pib_per_capita1; // PIB per capita (em reais) - mantido por consistência, mas não usado na comparação

    // Variáveis da segunda carta
    char nome_estado2;
    char codigo_carta2[4];
    char nome_cidade2[50];
    unsigned long int qt_populacao2;
    float area2;
    float vr_pib2;
    int nr_pontos_turisticos2;
    float densidade2; // Densidade populacional (habitantes por km²)
    float vr_pib_per_capita2; // PIB per capita (em reais) - mantido por consistência, mas não usado na comparação

    int attr1, attr2; // Atributos escolhidos (1: População, 2: Área, 3: PIB, 4: Pontos Turísticos, 5: Densidade Demográfica)
    int opcao; // Opção temporária para menus

    // Entrada de dados da primeira carta
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

    // Calcula densidade e PIB per capita da primeira carta
    densidade1 = (float)qt_populacao1 / area1; // Densidade = População / Área
    vr_pib_per_capita1 = (vr_pib1 * 1000000000) / qt_populacao1; // PIB per capita = PIB (em reais) / População

    // Entrada de dados da segunda carta
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

    // Calcula densidade e PIB per capita da segunda carta
    densidade2 = (float)qt_populacao2 / area2; // Densidade = População / Área
    vr_pib_per_capita2 = (vr_pib2 * 1000000000) / qt_populacao2; // PIB per capita = PIB (em reais) / População

    // Menu para o primeiro atributo (completo: 1-5)
    do {
        printf("\nEscolha o primeiro atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        printf("Digite sua opção (1-5): ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: case 2: case 3: case 4: case 5:
                attr1 = opcao;
                break;
            default:
                printf("Opção inválida! Escolha um número entre 1 e 5.\n");
                attr1 = 0; // Marca como inválido para continuar o loop
                break;
        }
    } while (attr1 == 0); // Repete até escolha válida

    // Menu dinâmico para o segundo atributo (exclui o attr1)
    do {
        printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
        int contador = 1;
        int mapping[5] = {0}; // Mapeia números de menu (1-4) para atributos originais
        if (attr1 != 1) { printf("%d. População\n", contador); mapping[contador++] = 1; }
        if (attr1 != 2) { printf("%d. Área\n", contador); mapping[contador++] = 2; }
        if (attr1 != 3) { printf("%d. PIB\n", contador); mapping[contador++] = 3; }
        if (attr1 != 4) { printf("%d. Número de Pontos Turísticos\n", contador); mapping[contador++] = 4; }
        if (attr1 != 5) { printf("%d. Densidade Demográfica\n", contador); mapping[contador++] = 5; }
        printf("Digite sua opção (1-4): ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            attr2 = mapping[opcao];
        } else {
            printf("Opção inválida! Escolha um número entre 1 e 4.\n");
            attr2 = 0; // Marca como inválido para continuar o loop
        }
    } while (attr2 == 0); // Repete até escolha válida

    // Funções auxiliares para obter valores e nomes dos atributos
    // Obtém o valor do atributo para a Carta 1
    float get_valor_carta1(int attr) {
        switch (attr) {
            case 1: return (float)qt_populacao1;
            case 2: return area1;
            case 3: return vr_pib1;
            case 4: return (float)nr_pontos_turisticos1;
            case 5: return densidade1;
            default: return 0.0;
        }
    }

    // Obtém o valor do atributo para a Carta 2
    float get_valor_carta2(int attr) {
        switch (attr) {
            case 1: return (float)qt_populacao2;
            case 2: return area2;
            case 3: return vr_pib2;
            case 4: return (float)nr_pontos_turisticos2;
            case 5: return densidade2;
            default: return 0.0;
        }
    }

    // Obtém o nome do atributo
    const char* get_nome_atributo(int attr) {
        switch (attr) {
            case 1: return "População";
            case 2: return "Área";
            case 3: return "PIB";
            case 4: return "Número de Pontos Turísticos";
            case 5: return "Densidade Demográfica";
            default: return "Desconhecido";
        }
    }

    // Obtém a unidade do atributo para exibição
    const char* get_unidade_atributo(int attr) {
        switch (attr) {
            case 1: return "";
            case 2: return "km²";
            case 3: return "bilhões de reais";
            case 4: return "";
            case 5: return "hab/km²";
            default: return "";
        }
    }

    // Determina o vencedor de um atributo individual (usando operador ternário com exceção para densidade)
    const char* get_vencedor_atributo(int attr, float val1, float val2, const char* cidade1, const char* cidade2) {
        if (attr == 5) { // Densidade: menor vence
            return (val1 < val2) ? cidade1 : ((val2 < val1) ? cidade2 : "Empate");
        } else { // Maior vence
            return (val1 > val2) ? cidade1 : ((val2 > val1) ? cidade2 : "Empate");
        }
    }

    // Cálculo das somas
    float soma1 = get_valor_carta1(attr1) + get_valor_carta1(attr2);
    float soma2 = get_valor_carta2(attr1) + get_valor_carta2(attr2);

    // Exibição dos resultados
    printf("\nResultado da Comparação:\n");
    printf("Carta 1: %s (%c)\n", nome_cidade1, nome_estado1);
    printf("Carta 2: %s (%c)\n", nome_cidade2, nome_estado2);
    printf("\nAtributos escolhidos:\n");
    printf("1. %s\n", get_nome_atributo(attr1));
    printf("2. %s\n", get_nome_atributo(attr2));

    // Comparação individual
    printf("\nComparação Individual:\n");
    float val1_attr1 = get_valor_carta1(attr1);
    float val2_attr1 = get_valor_carta2(attr1);
    printf("%s:\n", get_nome_atributo(attr1));
    printf("Carta 1: %.2f %s\n", val1_attr1, get_unidade_atributo(attr1));
    printf("Carta 2: %.2f %s\n", val2_attr1, get_unidade_atributo(attr1));
    printf("Vencedor: %s\n", get_vencedor_atributo(attr1, val1_attr1, val2_attr1, nome_cidade1, nome_cidade2));

    float val1_attr2 = get_valor_carta1(attr2);
    float val2_attr2 = get_valor_carta2(attr2);
    printf("\n%s:\n", get_nome_atributo(attr2));
    printf("Carta 1: %.2f %s\n", val1_attr2, get_unidade_atributo(attr2));
    printf("Carta 2: %.2f %s\n", val2_attr2, get_unidade_atributo(attr2));
    printf("Vencedor: %s\n", get_vencedor_atributo(attr2, val1_attr2, val2_attr2, nome_cidade1, nome_cidade2));

    // Soma e vencedor final
    printf("\nSoma dos Atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);
    if (soma1 > soma2) {
        printf("Resultado Final: Carta 1 (%s) venceu!\n", nome_cidade1);
    } else if (soma2 > soma1) {
        printf("Resultado Final: Carta 2 (%s) venceu!\n", nome_cidade2);
    } else {
        printf("Resultado Final: Empate!\n");
    }

    return 0;
}
