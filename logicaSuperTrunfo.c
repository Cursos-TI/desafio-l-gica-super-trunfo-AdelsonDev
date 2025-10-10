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

    int opcao; // variável para menu

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
    printf("Estado: %c\nCódigo: %s\nCidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", populacao1, area1, pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade1, pibPerCapita1, superPoder1);

    printf("\n Dados da Carta 2 \n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f\nPIB per Capita: %.2f reais\nSuper Poder: %.2f\n", densidade2, pibPerCapita2, superPoder2);

    // menu interativo
    printf("\n### MENU DE COMPARAÇÃO ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n### Resultado da compração ###");

    switch (opcao)
    {
    case 1: // popiulação

        printf("Atributo escolhido população\n");
        printf("%s: %d habitantes\n", nomeCidade1, populacao1);
        printf("%s: %d habitantes\n", nomeCidade2, populacao2);

        if (populacao1 > populacao2)
        {
            printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (populacao2 > populacao1)
        {
            printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2: // Área

        printf("Atributo escolhido: Área\n");
        printf("%s: %.2f km²\n", nomeCidade1, area1);
        printf("%s: %.2f km²\n", nomeCidade2, area2);

        if (area1 > area2)
        {
            printf("carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (area2 > area1)
        {
            printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
    case 3: // PIB

        printf("Atributo escolhido: PIB\n");
        printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
        printf("%s: %.2f bilhões\n", nomeCidade2, pib2);

        if (pib1 > pib2)
        {
            printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (pib2 > pib1)
        {
            printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 4: // Pontos turísticos

        printf("Atributo escolhido: Pontos Turísticos\n");
        printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
        printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);

        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("Carta 1 (%s) venceu!\n", nomeCidade1);
        }
        else if (pontosTuristicos2 > pontosTuristicos1)
        {
            printf("Carta 2 (%s) venceu!\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5: // Densidade 

        printf("Atributo escolhido: Densidade Demográfica\n");
        printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
        printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
        
        if (densidade1 < densidade2)
        {
            printf("Carta 1 (%s) venceu! (menor densidade)\n", nomeCidade1);
        }
        else if (densidade2 < densidade1)
        {
            printf("Carta 2 (%s) venceu! (menor densidade)\n", nomeCidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    default:
        printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
