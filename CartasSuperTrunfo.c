#include <stdio.h>

int main(){

    // variáveis cartas 1 e 2 do supertrunfo:

    char letra_estado[2], letra_estado2[2];
    char codigo_carta[3], codigo_carta2[3];
    char nome_cidade[50], nome_cidade2[50];
    int populacao_cidade, populacao_cidade2 ;
    float area_cidade, area_cidade2 ;
    float pib_cidade, pib_cidade2;
    int pontos_turisticos, pontos_turisticos2;
    
   
    // Carta 1:
    //momento entrada de dados

    printf(" *Carta 1: \n Escolha uma letra entre A-H: \n");
    scanf("%s", &letra_estado);

    printf("Escolha um número entre '01-04': \n");
    scanf("%s", &codigo_carta);

    printf("Escolha o nome de uma cidade:  \n");
    scanf("%s", &nome_cidade);

    printf("Diga o número de habitantes da cidade: \n");
    scanf("%d", &populacao_cidade);

    printf("Diga a área da cidade, em  quilômetros quadrados: \n");
    scanf("%f", &area_cidade);

    printf("Diga o  produto Interno Bruto da cidade: \n");
    scanf("%f", &pib_cidade);

    printf("Diga a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &pontos_turisticos);  

    float densidade_populacional =   (float)  populacao_cidade / area_cidade  ;
    float pib_per_capta =  (float) pib_cidade / populacao_cidade;

    // Carta 2:
    //momento entrada de dados
     
    printf("\n*Carta 2: \n Escolha uma letra entre A-H: \n");
     scanf("%s", &letra_estado2);
 
     printf("Escolha um número entre '01-04': \n");
     scanf("%s", &codigo_carta2);
 
     printf("Escolha o nome de uma cidade:  \n");
     scanf("%s", &nome_cidade2);
 
     printf("Diga o número de habitantes da cidade: \n");
     scanf("%d", &populacao_cidade2);
 
     printf("Diga a área da cidade, em  quilômetros quadrados: \n");
     scanf("%f", &area_cidade2);
 
     printf("Diga o  produto Interno Bruto da cidade: \n");
     scanf("%f", &pib_cidade2);
 
     printf("Diga a quantidade de pontos turísticos na cidade: \n");
     scanf("%d", &pontos_turisticos2);  

     float densidade_popu_carta2 =   (float)  populacao_cidade2 / area_cidade2  ;
     float pib_per_capta_carta2 =  (float) pib_cidade2 / populacao_cidade2 ;
     
 
     //impressão na tela dos dados da carta 1
     printf("\n *Carta 1: \n -Estado é: %s \n -O Código é: %s%s\n -O nome da cidade é: %s \n -População: %d\n -Área:%f \n -Pib: %f \n -Números de pontos turísticos: %d \n",letra_estado, letra_estado, codigo_carta, nome_cidade, populacao_cidade, area_cidade, pib_cidade, pontos_turisticos);
     printf(" -A densidade populacional é de: %.2f \n -E o pib percapto é de:  %.2f \n", densidade_populacional, pib_cidade);

    //impressão na tela dos dados da carta 2
     printf("\n*Carta 2: \n -Estado é: %s \n -O Código é: %s%s\n -O nome da cidade é: %s \n -População: %i\n -Área:%f \n -Pib: %f \n -Números de pontos turísticos: %d \n ",letra_estado2, letra_estado2, codigo_carta2, nome_cidade2, populacao_cidade2, area_cidade2, pib_cidade2, pontos_turisticos2);
     printf("-A densidade populacional é de:  %.2f \n -O pib per capto é de:   %.2f ", densidade_popu_carta2, pib_per_capta_carta2);
  
  
    return 0;
}
