#include <stdio.h>

int main() {
    // Declaração das variáveis
    int idade;
    float altura;
    double peso;
    char conceito;

    // Leitura dos dados[cite: 8]
    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%lf", &peso);

    printf("Digite o conceito (um caractere): ");
    scanf(" %c", &conceito); // Espaco antes de %c para ignorar o 'enter' anterior[cite: 8]

    // Exibição dos dados formatados[cite: 8]
    printf("\n=== DADOS CADASTRADOS ===\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.1lf kg\n", peso);
    printf("Conceito: %c\n", conceito);

    return 0;
}