#include <stdio.h>

// Define uma estrutura para armazenar os dados de uma carta
typedef struct {
    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} CartaSuperTrunfo;

int main() {
    CartaSuperTrunfo carta1, carta2; // Duas cartas distintas

    printf("A seguir serao solicitadas algumas informacoes sobre duas Cartas do Super Trunfo.\n");

    // Solicita informacoes da primeira carta
    printf("\n-- Dados da Primeira Carta --\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", carta1.codigo_da_carta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nome_da_cidade);
    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a area: ");
    scanf("%f", &carta1.area);
    printf("Digite o pib: ");
    scanf("%f", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Solicita informacoes da segunda carta
    printf("\n-- Dados da Segunda Carta --\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Digite o codigo da carta: ");
    scanf(" %[^\n]", carta2.codigo_da_carta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nome_da_cidade);
    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a area: ");
    scanf("%f", &carta2.area);
    printf("Digite o pib: ");
    scanf("%f", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Imprime os dados das duas cartas ao final
    printf("\n-- Cartas --\n");

    printf("\n-- Primeira Carta --\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo da carta: %s\n", carta1.codigo_da_carta);
    printf("Nome da cidade: %s\n", carta1.nome_da_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n-- Segunda Carta --\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo da carta: %s\n", carta2.codigo_da_carta);
    printf("Nome da cidade: %s\n", carta2.nome_da_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontos_turisticos);

    printf("\nCartas do Super Trunfo!\n");
    return 0;
}