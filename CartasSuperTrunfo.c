int main() {
    // Variáveis da carta 1
    char estado[50], nome[50];
    int codigo, pontos;
    unsigned long int populacao; // Alterado para unsigned long int
    float area, pib, densidade, pib_cap, super_poder1;

    // Variáveis da carta 2
    char estado2[50], nome2[50];
    int codigo2, pontos2;
    unsigned long int populacao2; // Alterado para unsigned long int
    float area2, pib2, densidade2, pib_cap2, super_poder2;

    //--------------------------CARTA 1-----------------------------

    // Entrada de dados
    printf("Digite as siglas do estado 1:\n");
    scanf(" %[^\n]", estado);  // Permite capturar nomes com espaços

    printf("Digite o código da cidade 1:\n");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade 1:\n");
    scanf(" %[^\n]", nome);  // Permite capturar nomes com espaços

    printf("Digite a populacao da cidade 1:\n");
    scanf("%lu", &populacao); // Tipo unsigned long int

    printf("Digite a área da cidade 1:\n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade 1:\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos 1:\n");
    scanf("%d", &pontos);

    // Cálculos para a carta 1
    densidade = populacao / area;         // Densidade populacional
    pib_cap = pib / populacao;            // PIB per capita
    super_poder1 = populacao + area + pib + pontos + pib_cap + (1.0 / densidade);

    //--------------------------CARTA 2-----------------------------

    // Entrada de dados
    printf("Digite as siglas do estado 2:\n");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da cidade 2:\n");
    scanf("%d", &codigo2);

    printf("Digite o nome da cidade 2:\n");
    scanf(" %[^\n]", nome2);

    printf("Digite a populacao da cidade 2:\n");
    scanf("%lu", &populacao2); // Tipo unsigned long int

    printf("Digite a área da cidade 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos 2:\n");
    scanf("%d", &pontos2);

    // Cálculos para a carta 2
    densidade2 = populacao2 / area2;      // Densidade populacional
    pib_cap2 = pib2 / populacao2;         // PIB per capita
    super_poder2 = populacao2 + area2 + pib2 + pontos2 + pib_cap2 + (1.0 / densidade2);

    //--------------------------RESULTADOS-----------------------------

    // Exibição dos resultados para a carta 1
    printf("\n===== Informações da Cidade 1 =====\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %lu\n", populacao); 
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);
    printf("Densidade populacional: %.2f (hab/km²)\n", densidade);
    printf("PIB per capita: %.2f\n", pib_cap);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos resultados para a carta 2
    printf("\n===== Informações da Cidade 2 =====\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %d\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2); 
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f (hab/km²)\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_cap2);
    printf("Super Poder: %.2f\n", super_poder2);

    //---------------------------VERIFICAÇÃO----------------------------

    // Comparação de Super Poderes
    printf("\n===== RESULTADO DO DESAFIO =====\n");
    int resultadoF1 = super_poder1 > super_poder2;
    int resultadoF2 = super_poder2 > super_poder1;

    printf("Se carta vencedora for a carta 1, veremos o numero 1 aqui: %d\n", resultadoF1);

    printf("Se carta vencedora for a carta 2, veremos o numero 1 aqui: %d\n", resultadoF2);

    return 0;
}