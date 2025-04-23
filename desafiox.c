#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Definição de variáveis
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    int opcao, opcao2;
    int resultado1, resultado2;

    // Dados da carta 1
    printf("Informe os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 * 1e9 / populacao1;

    // Superpoder carta 1
    super_poder1 = (float)populacao1 + area1 + pib1 * 1e9 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Dados da carta 2
    printf("\nInforme os dados da segunda carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: B03): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 * 1e9 / populacao2;

    // Superpoder carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 * 1e9 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Menu de comparação
    printf("Escolha 1 atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: // Comparar População
            printf("Você escolheu a opção população!\n");
            resultado1  = populacao1 > populacao2 ? 1 : 0;
            break;
       
        case 2: // Comparar Área
            printf("Você escolheu a opção área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        
        case 3: // Comparar PIB
            printf("Você escolheu a opção PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        
        case 4: // Comparar Pontos Turísticos
            printf("Você escolheu a opçao pontos turisticos!\n");
            resultado1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
            break;
        
        case 5: // Comparar Densidade Populacional
            printf("Você escolheu a densidade populacional!\n");
            resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
            break;
        
        case 6: // Comparar Super Poder
            printf("Você escolheu o super poder!\n");
            resultado1 = super_poder1 > super_poder2 ? 1 : 0;
            break;
        
        default:
            printf("Opção inválida!\n");
            break;
    }
    printf("Escolha 1 atributo\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Super Poder\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);

    if (opcao == opcao2)\
    {
        printf("Você escolheu o mesmo valor!!");
    } else {
    switch (opcao2) 
    {
         case 1: // Comparar População
            printf("Você escolheu a população!\n");
            resultado2 = populacao2 > populacao1 ? 1 : 0;
             break;
        
        case 2: // Comparar Área
            printf("Você escolheu a área!\n");
            resultado2 = area2 > area1 ? 1 : 0;
            break;
        
        case 3: // Comparar PIB
            printf("Você escolheu o pib!\n");
            resultado2 = pib2 > pib1 ? 1 : 0;
            break;
        
        case 4: // Comparar Pontos Turísticos
            printf("Você escolheu os pontos turisticos!\n");
            resultado2 = pontos_turisticos2 > pontos_turisticos1 ? 1 : 0;
            break;
        
        case 5: // Comparar Densidade Populacional
            printf("Você escolheu a densidade populacional!\n");
            resultado2 = densidade_populacional2 < densidade_populacional1 ? 1 : 0;
            break;
        
        case 6: // Comparar Super Poder
            printf("Você escolheu o super pooder!\n");
            resultado2 = super_poder1 > super_poder2 ? 1 : 0;
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }

    if (resultado1 && resultado2)
    {
        printf("O jogador 1 venceu!\n");
    }else if (resultado1 != resultado2){
        printf("empatou!!");
    }else{
        printf("O jogador 2 venceu!\n");
    }
    

    return 0;
}}
