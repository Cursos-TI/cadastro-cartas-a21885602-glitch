#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área charpara definição das variáveis para armazenar as propriedades das cidades
// Dados da carta 1
    // Carta 1
    char estado1[30] = "Rio Grande do Norte";
    char cidade1[30] = "Natal";
    int populacao1 = 751300;

    // Carta 2
    char estado2[30] = "Pernambuco";
    char cidade2[30] = "Recife";
    int populacao2 = 1489000;

    printf("====================================\n");
    printf("       SUPER TRUNFO - NIVEL NOVATO\n");
    printf("====================================\n\n");

    printf("CARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n\n", populacao1);

    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n\n", populacao2);

    printf("====================================\n");
    printf("        COMPARACAO DAS CARTAS\n");
    printf("====================================\n");

    if (populacao1 > populacao2) {
        printf("Carta 1 venceu!\n");
        printf("%s possui maior populacao.\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("Carta 2 venceu!\n");
        printf("%s possui maior populacao.\n", cidade2);
    }
    else {
        printf("Empate!\n");
    }

    return 0;
}