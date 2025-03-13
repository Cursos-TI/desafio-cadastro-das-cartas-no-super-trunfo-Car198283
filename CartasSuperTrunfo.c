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

    return 0;
}

#include <stdio.h>

int main(){
    char estado [50];
    char cidade [50];
    char código_da_carta [20];
    int população;
    int numero_de_pontos_turisticos;
    float área_em_km;
    float pib; 

    printf("digite o estado: \n");
    scanf("%s", &estado);

    printf("digitea cidade: \n");
    scanf("%s", &cidade);

    printf("digite o Código_da_carta: \n");
    scanf("%s", &código_da_carta);

    printf("digite a populaçaõ: \n");
    scanf("%d", &população);

    printf("digite o numero_de_pontos_turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("digite a área_em_km: \n");
    scanf("%s", &área_em_km);

    printf("digite o pib: \n");
    scanf("%s", &pib);

    printf("digite o estado: \n");
    scanf("%s", &estado);

    printf("digitea cidade: \n");
    scanf("%s", &cidade);

    printf("digite o Código_da_carta: \n");
    scanf("%s", &código_da_carta);

    printf("digite a populaçaõ: \n");
    scanf("%d", &população);

    printf("digite o numero_de_pontos_turisticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    printf("digite a área_em_km: \n");
    scanf("%s", &área_em_km);

    printf("digite o pib: \n");
    scanf("%s", &pib);
}
