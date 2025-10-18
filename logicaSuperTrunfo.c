#include <stdio.h>

int main()
{
    // Variáveis carta 1
    char estado1;                                 // Estado representado por uma letra (A-H)
    char codigo1[10];                             // Código da carta (ex: A01)
    char nomeCidade1[41];                         // Nome da cidade (até 40 caracteres )
    int populacao1;                               // População da cidade (números grandes)
    float area1;                                  // Área em km²
    float pib1;                                   // PIB em bilhões de reais
    int pontosTuristicos1;                        // Número de pontos turísticos
    float densidade1, pibPerCapita1, superPoder1; // Variáveis calculadas

    // Variáveis carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[41];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    int comparacao1, comparacao2; // variável para menu
    int resultado1, resultado2;

    // Entrada de dados - Carta 1
    printf("Digite o estado da carta 1 (A-H): \n");
    scanf(" %s", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %s", nomeCidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da carta 1 (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados - Carta 2
    printf("\nDigite o estado da carta 2 (A-H): \n");
    scanf(" %s", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %s", nomeCidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da carta 2 (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Cálculos carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Exibição das cartas
    printf("\n Dados da Carta 1 \n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade1, pibPerCapita1, superPoder1);

    printf("\n Dados da Carta 2 \n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade2, pibPerCapita2, superPoder2);

    // menu interativo
    printf("\n===== Escolha o primeiro atributo! =====\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("D - Densidade Demográfica\n");

    printf("Escolha o primeiro atributo para comparar: ");
    scanf(" %c", &comparacao1);

    switch (comparacao1)
    {
    case 'P': // População
    case 'p':

        printf("Atributo escolhido: População\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;

        break;

    case 'A': // Área
    case 'a':

        printf("Atributo escolhido: Área\n");
        resultado1 = area1 > area2 ? 1 : 0;

        break;

    case 'D': // Densidade (regra invertida)
    case 'd':

        printf("Atributo escolhido: Densidade Demográfica\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;

        break;

    default:
        printf("Opção inválida! Tente novamente.\n");

        break;
    }

    printf("\n===== Escolha o segundo atributo! =====\n");
    printf(" %c", &comparacao2);
    printf("Atenção: O segundo atributo não pode ser da mesma cidade, porém precisa ser igual ao primeiro.\n");
    printf("P - População\n");
    printf("A - Área\n");
    printf("D - Densidade Demográfica\n");

    switch (comparacao2)
    {
    case 'P': // População
    case 'p':

        printf("Atributo escolhido: População\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;

        break;

    case 'A': // Área
    case 'a':

        printf("Atributo escolhido: Área\n");
        resultado2 = area1 > area2 ? 1 : 0;

        break;

    case 'D': // Densidade (regra invertida)
    case 'd':

        printf("Atributo escolhido: Densidade Demográfica\n");
        resultado2 = densidade1 < densidade2 ? 1 : 0;

        break;

    default:
        printf("Opção inválida! Tente novamente.\n");

        break;
    }

    if (resultado1 && resultado2)
    {
        printf("Parabéns, você venceu!\n");
    }
    else if (resultado1 == resultado2)
    {
        printf("Empatou!\n");
    }
    else
    {
        printf("Infelizmente, você perdeu!\n");
    }

    return 0;
}
