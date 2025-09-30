#include <stdio.h>

   

int main() {
     // Variáveis carta 1
    char estado1;                 
    char codigo1[5];              
    char nomeCidade1[41];         
    unsigned long int populacao1; 
    float area1;                  
    float pib1;                   
    int pontosTuristicos1;        
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[41];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

     // Entrada de dados - Carta 1
    printf("Digite o estado da carta 1 (A-H): \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população da carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da carta 1 (km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da carta 1: \n");
    scanf("%d", &pontosTuristicos1);

       // Entrada de dados - Carta 2
    printf("\nDigite o estado da carta 2 (A-H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população da carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da carta 2 (km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta 2: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos carta 1
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    float  superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Cálculos carta 2
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

  // comparação das cartas

  

    return 0;
}
