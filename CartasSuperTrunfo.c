#include <stdio.h>

int main() {

    char estado [50];
    char codigo [50];
    char cidade [50];
    float populacao;
    float areakm2;
    float PIB;
    int pontos;
    
    printf("==== Dados da Primeira carta ==== \n");
    printf("O estado da carta é [De 'A-H']: ");
    scanf("%s", estado); 
    printf("O Codigo é : ");
    scanf("%s", codigo);
    printf("Nome da cidade : ");
    scanf("%s", cidade);
    printf("A população é [Em milhões de Habitantes]: ");
    scanf("%f", &populacao);
    printf("A area é [Em KM2]: ");
    scanf("%f", &areakm2);
    printf("O PIB é [Em bilhões de Reais]: " );
    scanf("%f", &PIB);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos);

    //Declaração das varíaveis da segunda carta

    char estado2 [50];
    char codigo2 [50];
    char cidade2 [50];
    float populacao2;
    float areakm22;
    float PIB2;
    int pontos2;

    // preenchimento dos dados da segunda carta

    printf("-----------------------------------------------------------\n");
    printf("==== Dados da Segunda carta ====\n");
    printf("O estado da carta é [De 'A-H']: ");
    scanf(" %s", estado2); 
    printf("O Codigo é : ");
    scanf("%s", codigo2);
    printf("Nome da cidade : ");
    scanf("%s", cidade2);
    printf("A população é [Em milhões de Habitantes]: ");
    scanf("%f", &populacao2);
    printf("A area é [Em KM2]: ");
    scanf("%f", &areakm22);
    printf("O PIB é [Em bilhões de Reais]: " );
    scanf("%f", &PIB2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    // saída do programa
    printf("-----------------------------------------------------------\n");
    printf("------------ DADOS DE SAÍDA -------------------------------\n");
    printf("-----------------------------------------------------------\n");
    
    printf("-----------------------------------------------------------\n");
    printf("------------ PRIMEIRA CARTA -------------------------------\n");
    printf("-----------------------------------------------------------\n");
    printf("Estado: %s\n", estado); 
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f km2\n" ,areakm2);
    printf("PIB: %f bilhões de reais\n" ,PIB);
    printf("Numero de pontos turísticos: %d\n", pontos);
    printf("-----------------------------------------------------------\n");
    printf("-----------------------------------------------------------\n");
    
    printf("-----------------------------------------------------------\n");
    printf("------------ SEGUNDA CARTA --------------------------------\n");
    printf("-----------------------------------------------------------\n");
    printf("Estado: %s\n", estado2); 
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %f km2\n" ,areakm22);
    printf("PIB: %f bilhões de reais\n" ,PIB2);
    printf("Numero de pontos turísticos: %d\n", pontos2);
    printf("-----------------------------------------------------------\n");
    printf("-----------------------------------------------------------\n");
    printf("-----------------------------------------------------------\n");

}