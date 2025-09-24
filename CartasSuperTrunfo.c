#include <stdio.h>

int main(){
    char estado, estado2;
    char codigo_carta[5], codigo_carta2[5], cidade[50], cidade2[50];
    int populacao, populacao2, pTuristico, pTuristico2;
    float area, pib, area2, pib2;

    //Dados da carta 1:
    printf("Carta 1:\n");
    printf("Escolha uma letra entre A a H para representar seu estado: ");
    scanf(" %c", &estado);
    
    printf("Escolha o código da carta usando a Letra do estado + 01/04.(ex: A04, D01): ");
    scanf("%s", codigo_carta);

    getchar(); //consome espaço extra.

    printf("Escolha o nome da cidade: ");
    fgets(cidade, 50, stdin);

    printf("População da cidade: ");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pTuristico);

    printf("Digite a área da cidade em quilometros quadrados a cidade tem: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    //Dados da carta 2:
    printf("Carta 2:\n");
    printf("Escolha uma letra entre A a H para representar seu estado: ");
    scanf(" %c", &estado2);
    
    printf("Escolha o código da carta usando a Letra do estado + 01/04.(ex: A04, D01): ");
    scanf("%s", codigo_carta2);

    getchar(); //consome espaço extra.

    printf("Escolha o nome da cidade: ");
    fgets(cidade2, 50, stdin);

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pTuristico2);

    printf("Digite a área da cidade em quilometros quadrados a cidade tem: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    //Imprime carta 1: 
    printf("\n\nCarta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s", cidade);
    printf("\nPopulação: %d\n", populacao);
    printf("Área: %fkm²\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", pTuristico);

    //Imprime carta 2:
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da cidade: %s", cidade2);
    printf("\nPopulação: %d\n", populacao2);
    printf("Área: %fkm²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d", pTuristico2);

    return 0;
}