#include <stdio.h>

int main(){

    // variáveis cartas do supertrunfo:

    char letra_estado[50];
    char codigo_carta[50];
    char nome_cidade[50];
    int populacao_cidade;
    float area_cidade;
    float pib_bruto_cidade;
    int pontos_turisticos;

    // Carta 1:

    printf("Carta 1: \n Escolha uma letra entre A-H: \n");
    scanf("%s", &letra_estado);

    printf("Escolha um número entre '01-04': \n");
    scanf("%s", &codigo_carta);

    printf("Escolha o nome de uma cidade:  \n");
    scanf("%s", &nome_cidade);

     printf("Diga o número de habitantes da cidade: \n");
    scanf("%i", &populacao_cidade);

    printf("Diga a área da cidade, em  quilômetros quadrados: \n");
    scanf("%f", &area_cidade);

     printf("Diga o  produto Interno Bruto da cidade: \n");
    scanf("%f", &pib_bruto_cidade);

    printf("Diga a quantidade de pontos turísticos na cidade: \n");
    scanf("%i", &pontos_turisticos);  

    //impressão na tela dos dados da carta 1
    printf("\n *Carta 1: \n -Estado é: %s \n -O Código é: %s%s\n -O nome da cidade é: %s \n -População: %i\n -Área:%f \n -Pib: %f \n -Números de pontos turísticos: %i \n ",letra_estado, letra_estado,codigo_carta, nome_cidade, populacao_cidade, area_cidade, pib_bruto_cidade, pontos_turisticos);

    // Carta 2:
     
    printf("\n Carta 2: \n Escolha uma letra entre A-H: \n");
     scanf("%s", &letra_estado);
 
     printf("Escolha um número entre '01-04': \n");
     scanf("%s", &codigo_carta);
 
     printf("Escolha o nome de uma cidade:  \n");
     scanf("%s", &nome_cidade);
 
      printf("Diga o número de habitantes da cidade: \n");
     scanf("%i", &populacao_cidade);
 
     printf("Diga a área da cidade, em  quilômetros quadrados: \n");
     scanf("%f", &area_cidade);
 
      printf("Diga o  produto Interno Bruto da cidade: \n");
     scanf("%f", &pib_bruto_cidade);
 
     printf("Diga a quantidade de pontos turísticos na cidade: \n");
     scanf("%i", &pontos_turisticos);  
 
    //impressão na tela dos dados da carta 1
     printf("*Carta 2: \n -Estado é: %s \n -O Código é: %s%s\n -O nome da cidade é: %s \n -População: %i\n -Área:%f \n -Pib: %f \n -Números de pontos turísticos: %i \n ",letra_estado, letra_estado,codigo_carta, nome_cidade, populacao_cidade, area_cidade, pib_bruto_cidade, pontos_turisticos);
  
  
    return 0;
}