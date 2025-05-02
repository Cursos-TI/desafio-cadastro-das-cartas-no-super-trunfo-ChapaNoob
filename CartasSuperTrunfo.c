#include <stdio.h>

int main() {
    // ---------- DECLARAÇÃO DE VARIÁVEIS ----------
    // Carta 1
    char estado1[3];
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Carta 2
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // ---------- ENTRADA DE DADOS ----------

    // Carta 1
    printf("Digite o estado da Carta 1 (ex: SP): ");
    scanf("%s", estado1);

    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %s", nomeCidade1); // Lê até a nova linha

    printf("Digite a população da Carta 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Carta 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    // Carta 2
    printf("\nDigite o estado da Carta 2 (ex: RJ): ");
    scanf("%s", estado2);

    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %s", nomeCidade2); // Lê até a nova linha

    printf("Digite a população da Carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Carta 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // ---------- ESCOLHA DOS ATRIBUTOS PARA COMPARAÇÃO ----------

    int atributo1, atributo2;
    int soma1 = 0, soma2 = 0;

    // Escolha do primeiro atributo para comparação
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
    printf("Escolha (1-4): ");
    scanf("%d", &atributo1);

    // Garantir que o primeiro atributo seja válido
    if (atributo1 < 1 || atributo1 > 4) {
        printf("Opção inválida! Atribuindo o valor 1 (População) como padrão.\n");
        atributo1 = 1;
    }

    // Escolha do segundo atributo, que não pode ser igual ao primeiro
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
    printf("Escolha (1-4): ");
    scanf("%d", &atributo2);

    if (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1) {
        printf("Opção inválida ou o mesmo atributo escolhido! Atribuindo o valor 2 (Área) como padrão.\n");
        // Atribui um valor padrão (que não seja o mesmo que atributo1)
        atributo2 = (atributo1 == 2) ? 3 : 2;
    }

    // ---------- COMPARAÇÃO E CÁLCULO DOS ATRIBUTOS ----------

    // Comparação do primeiro atributo
    switch (atributo1) {
        case 1: // População
            printf("\nComparando População:\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2: // Área
            printf("\nComparando Área:\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            soma1 += area1;
            soma2 += area2;
            break;
        case 3: // PIB
            printf("\nComparando PIB:\n");
            printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", nomeCidade2, estado2, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4: // Densidade Demográfica
            printf("\nComparando Densidade Demográfica:\n");
            printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", nomeCidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", nomeCidade2, estado2, densidade2);
            soma1 += densidade1;
            soma2 += densidade2;
            break;
    }

    // Comparação do segundo atributo
    switch (atributo2) {
        case 1: // População
            printf("\nComparando População:\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %d habitantes\n", nomeCidade2, estado2, populacao2);
            soma1 += populacao1;
            soma2 += populacao2;
            break;
        case 2: // Área
            printf("\nComparando Área:\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidade2, estado2, area2);
            soma1 += area1;
            soma2 += area2;
            break;
        case 3: // PIB
            printf("\nComparando PIB:\n");
            printf("Carta 1 - %s (%s): R$ %.2f bilhões\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%s): R$ %.2f bilhões\n", nomeCidade2, estado2, pib2);
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4: // Densidade Demográfica
            printf("\nComparando Densidade Demográfica:\n");
            printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", nomeCidade1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", nomeCidade2, estado2, densidade2);
            soma1 += densidade1;
            soma2 += densidade2;
            break;
    }

    // ---------- RESULTADOS FINAIS ----------

    printf("\nSoma dos Atributos:\n");
    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, estado1, soma1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, estado2, soma2);

    // Verifica quem ganhou
    if (soma1 > soma2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate! Ambas as cartas têm o mesmo valor total.\n");
    }

    return 0;
}
