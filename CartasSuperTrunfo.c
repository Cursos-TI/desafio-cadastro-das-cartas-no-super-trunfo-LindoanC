#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {    
    
    char nome[25];
    int populacao, PIB, pontosturisticos;
    float area, PIBpercapita, densidadepopulacional;

    //float quociente = populacao / area;
   // float quociente2 = PIB / populacao;

        
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a População: \n");
    scanf("%d", &populacao);
    
    printf("digite a Área: \n");
    scanf("%f", &area);

    printf("digite a PIB: \n");
    scanf("%d", &PIB);

    printf("digite o numero de Pontos turisticos: \n");
    scanf("%d", &pontosturisticos);

    densidadepopulacional = (float) (populacao / area);
    PIBpercapita = (float) (PIB / populacao);

    printf("--- Dados da cidade --- \n\n");

    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área da cidade : %.2f \n", area);
    printf("PIB : %d \n", PIB);
    printf("Números de pontos turísticos: %d \n", pontosturisticos);
    printf("A Densidade populacional é : %f \n", densidadepopulacional);
    printf("O PIB Per Capita é : %.2f \n\n\n", PIBpercapita);


    //printf("A densidade demografica é : %f \n", quociente);
   // printf("O PIB per capito é : %f \n", quociente2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

}
