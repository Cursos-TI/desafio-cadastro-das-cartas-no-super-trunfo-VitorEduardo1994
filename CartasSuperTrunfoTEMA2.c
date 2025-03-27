// Entrega trabalho Tema 2 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo
#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado[50], nome[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_cap1, super_poder1;
    int codigo_area1, pontos_turisticos1;

    // Variáveis da carta 2
    char estado2[50], nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_cap2, super_poder2;
    int codigo_area2, pontos_turisticos2;

    // Variáveis do jogo
    int escolha1, escolha2, escolha3;
    int resultado1 = 0, resultado2 = 0;

    // MENU 1: Introdução ou começar o jogo
    printf("#### BEM VINDO AO SUPER TRUNFO! ####\n");
    printf("1. Instruções\n");
    printf("2. Começar\n");
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1:
            // Exibir instruções
            printf("\n===== INSTRUÇÕES DO SUPER TRUNFO =====\n");
            printf("Compare as características das cartas e determine o vencedor.\n");
            printf("Características: População, Área, PIB, Densidade Populacional, Pontos Turísticos e Super Poder!.\n");
            printf("Você fará duas comparações e a soma dos resultados determinará o vencedor geral.\n");
            printf("Boa sorte!\n");
            return 0;

        case 2:
            // Configuração das cartas
            printf("\n#### INFORMAÇÕES CARTA 1 ####\n");
            printf("Digite o estado (ex.: SP): ");
            scanf(" %[^\n]", estado);
            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", nome);
            printf("Digite o código de área: ");
            scanf("%d", &codigo_area1);
            printf("Digite a população: ");
            scanf("%lu", &populacao1);
            printf("Digite a área (em km²): ");
            scanf("%f", &area1);
            printf("Digite o PIB (em bilhões): ");
            scanf("%f", &pib1);
            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &pontos_turisticos1);

            printf("\n#### INFORMAÇÕES CARTA 2 ####\n");
            printf("Digite o estado (ex.: RJ): ");
            scanf(" %[^\n]", estado2);
            printf("Digite o nome da cidade: ");
            scanf(" %[^\n]", nome2);
            printf("Digite o código de área: ");
            scanf("%d", &codigo_area2);
            printf("Digite a população: ");
            scanf("%lu", &populacao2);
            printf("Digite a área (em km²): ");
            scanf("%f", &area2);
            printf("Digite o PIB (em bilhões): ");
            scanf("%f", &pib2);
            printf("Digite o número de pontos turísticos: ");
            scanf("%d", &pontos_turisticos2);

            // Cálculos combinados para densidade, PIB per capita e super poder
            densidade1 = populacao1 / area1;
            pib_cap1 = pib1 / populacao1;
            super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_cap1 + (1.0 / densidade1);

            densidade2 = populacao2 / area2;
            pib_cap2 = pib2 / populacao2;
            super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_cap2 + (1.0 / densidade2);

            // MENU 2: Escolher a primeira característica
            printf("\n#### ESCOLHA PRIMEIRA CARACTERÍSTICA ####\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Densidade Populacional\n");
            printf("5. Pontos Turísticos\n");
            printf("6. Super Poder\n");
            printf("Escolha: ");
            scanf("%d", &escolha2);

            // Primeira comparação
            switch (escolha2) {
                case 1: // População
                    if (populacao1 > populacao2) {
                        printf("Carta 1 venceu! Cidade: %s com população: %lu\n", nome, populacao1);
                        resultado1 = 1;
                    } else if (populacao2 > populacao1) {
                        printf("Carta 2 venceu! Cidade: %s com população: %lu\n", nome2, populacao2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm a mesma população: %lu\n", populacao1);
                    }
                    break;

                case 2: // Área
                    if (area1 > area2) {
                        printf("Carta 1 venceu! Cidade: %s com área: %.2f\n", nome, area1);
                        resultado1 = 1;
                    } else if (area2 > area1) {
                        printf("Carta 2 venceu! Cidade: %s com área: %.2f\n", nome2, area2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm a mesma área: %.2f\n", area1);
                    }
                    break;

                case 3: // PIB
                    if (pib1 > pib2) {
                        printf("Carta 1 venceu! Cidade: %s com PIB: %.2f\n", nome, pib1);
                        resultado1 = 1;
                    } else if (pib2 > pib1) {
                        printf("Carta 2 venceu! Cidade: %s com PIB: %.2f\n", nome2, pib2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm o mesmo PIB: %.2f\n", pib1);
                    }
                    break;

                case 4: // Densidade
                    if (densidade1 < densidade2) {
                        printf("Carta 1 venceu! Cidade: %s com densidade menor de: %.2f\n", nome, densidade1);
                        resultado1 = 1;
                    } else if (densidade2 < densidade1) {
                        printf("Carta 1 venceu! Cidade: %s com densidade menor de: %.2f\n", nome, densidade2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm a mesma densidade: %.2f\n", densidade1);
                    }
                    break;

                case 5: // Pontos turisticos
                    if (pontos_turisticos1 > pontos_turisticos2) {
                        printf("Carta 1 venceu! Cidade: %s com maior numero de pontos turisticos: %d\n", nome, pontos_turisticos1);
                        resultado1 = 1;
                    } else if (densidade2 > densidade1) {
                        printf("Carta 1 venceu! Cidade: %s com maior numero de pontos turisticos: %d\n", nome, pontos_turisticos2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm a mesma quantidade de pontos turisticos!: %d\n", pontos_turisticos1);
                    }
                    break;
                    
                case 6: // Super poder!
                    if (super_poder1 > super_poder2) {
                        printf("Carta 1 venceu! Cidade: %s O super poder dela é maior!: %.2f\n", nome, super_poder1);
                        resultado1 = 1;
                    } else if (super_poder2 > super_poder1) {
                        printf("Carta 1 venceu! Cidade: %s O super poder dela é maior!: %.2f\n", nome, super_poder2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas tem o mesmo super poder: %.2f", super_poder1);
                    }
                    break;


                // Outros casos seguem o mesmo padrão
            }

            // MENU 3: Escolher a segunda característica
            printf("\n#### ESCOLHA SEGUNDA CARACTERÍSTICA ####\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. PIB\n");
            printf("4. Densidade Populacional\n");
            printf("5. Pontos Turísticos\n");
            printf("6. Super Poder\n");
            printf("Escolha: ");
            scanf("%d", &escolha3);

            // Segunda comparação
            switch (escolha3) {
                case 1: // População
                    if (populacao1 > populacao2) {
                        printf("Carta 1 venceu! Cidade: %s com população: %lu\n", nome, populacao1);
                        resultado2 = 1;
                    } else if (populacao2 > populacao1) {
                        printf("Carta 2 venceu! Cidade: %s com população: %lu\n", nome2, populacao2);
                        resultado2 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm a mesma população: %lu\n", populacao1);
                    }
                    break;

                case 2: // Área
                    if (area1 > area2) {
                        printf("Carta 1 venceu! Cidade: %s com área: %.2f\n", nome, area1);
                        resultado2 = 1;
                    } else if (area2 > area1) {
                        printf("Carta 2 venceu! Cidade: %s com área: %.2f\n", nome2, area2);
                        resultado2 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm a mesma área: %.2f\n", area1);
                    }
                    break;
                case 3: // PIB
                    if (pib1 > pib2) {
                        printf("Carta 1 venceu! Cidade: %s com PIB: %.2f\n", nome, pib1);
                        resultado1 = 1;
                    } else if (pib2 > pib1) {
                        printf("Carta 2 venceu! Cidade: %s com PIB: %.2f\n", nome2, pib2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm o mesmo PIB: %.2f\n", pib1);
                    }
                    break;

                case 4: // Densidade
                    if (densidade1 < densidade2) {
                        printf("Carta 1 venceu! Cidade: %s com densidade menor de: %.2f\n", nome, densidade1);
                        resultado1 = 1;
                    } else if (densidade2 < densidade1) {
                        printf("Carta 1 venceu! Cidade: %s com densidade menor de: %.2f\n", nome, densidade2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm a mesma densidade: %.2f\n", densidade1);
                    }
                    break;

                case 5: // Pontos turisticos
                    if (pontos_turisticos1 > pontos_turisticos2) {
                        printf("Carta 1 venceu! Cidade: %s com maior numero de pontos turisticos: %d\n", nome, pontos_turisticos1);
                        resultado1 = 1;
                    } else if (densidade2 > densidade1) {
                        printf("Carta 1 venceu! Cidade: %s com maior numero de pontos turisticos: %d\n", nome, pontos_turisticos2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas as cidades têm a mesma quantidade de pontos turisticos!: %d\n", pontos_turisticos1);
                    }
                    break;
                    
                case 6: // Super poder!
                    if (super_poder1 > super_poder2) {
                        printf("Carta 1 venceu! Cidade: %s O super poder dela é maior!: %.2f\n", nome, super_poder1);
                        resultado1 = 1;
                    } else if (super_poder2 > super_poder1) {
                        printf("Carta 1 venceu! Cidade: %s O super poder dela é maior!: %.2f\n", nome, super_poder2);
                        resultado1 = 2;
                    } else {
                        printf("Empate! Ambas tem o mesmo super poder: %.2f", super_poder1);
                    }
                    break;



            }

            printf("\n#### RESULTADO FINAL ####\n");
            if (resultado1 == 1 && resultado2 == 1) {
                printf("Carta 1 venceu! Cidade: %s\n", nome);
            } else if (resultado1 == 2 && resultado2 == 2) {
                printf("Carta 2 venceu! Cidade: %s\n", nome2);
            } else {
                printf("Empate entre as cartas!\n");
            }
        default:
            // Opção inválida no menu principal
            printf("Opção inválida!\n");
            return 0;
    }
}
