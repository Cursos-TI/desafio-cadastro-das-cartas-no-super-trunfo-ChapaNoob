/*
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
*/

#include <stdio.h>

int main() {
    char estado [50];
    char codcarta [] = "A01";
    char nomecidade [] = "são paulo";
    int populacao;
    int pontosturi;
    float area;
    float pib;

    char estado2 [50];
    char codcarta2 [] = "A01";
    char nomecidade2 [] = "são paulo";
    int populacao2;
    int pontosturi2;
    float area2;
    float pib2;


    printf("Digite o nome do estado: ");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codcarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomecidade);

    printf("Digite o numero da população: ");
    scanf("%d", &populacao);  

    printf("Digite a Área em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontosturi);

    
   
    printf("Agora informe sobre a segunda carta \n");

    
    printf("Digite o nome do estado: ");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", &codcarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nomecidade2);

    printf("Digite o numero da população: ");
    scanf("%d", &populacao2);  

    printf("Digite a Área em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem a cidade: ");
    scanf("%d", &pontosturi2);  



    printf("Carta 1: \n");
    printf("Estado: %s \n Codigo: %s \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Numero de Pontos Turisticos: %d \n", estado, codcarta, nomecidade, populacao, area, pib, pontosturi);

    printf("Carta 2: \n");
    printf("Estado: %s \n Codigo: %s \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Numero de Pontos Turisticos: %d ", estado2, codcarta2, nomecidade2, populacao2, area2, pib2, pontosturi2);






}
