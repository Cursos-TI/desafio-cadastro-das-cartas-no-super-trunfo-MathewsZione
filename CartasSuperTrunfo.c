#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int codigoCidade;
    char nomeCidade[50]; 
    int populacao;
    float area;
    double pib;
    int pontosTuristicos;
    
    printf("Digite o codigo da cidade: ");
    scanf("%d", &codigoCidade);
    while(getchar() != '\n');

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);

    printf("Digite populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%lf", &pib);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n===== DADOS DA CIDADE =====\n");
    printf("Codigo da cidade: %d\n", codigoCidade);
    printf("Nome da cidade: %s", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}
