#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // definição variaveis
    char codigo[3];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    int total_cartas;

    // entrada de dados

    printf("Quantas cartas voçê quer cadastrar?");
    scanf("%d", &total_cartas);

    printf("Insira codigo da carta: (Ex: A01, B02)");
    scanf("%s", &codigo);

    printf("Área da cidade (km²):");
    scanf("%f", &area);

    printf("população:");
    scanf("%d", &populacao);

    // Calculo do PIB
    pib = (float)populacao / area;

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // exibição dos dados
    printf("\n===== CARTAS CADASTRADAS =====\n");
    printf("\nCidade cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
