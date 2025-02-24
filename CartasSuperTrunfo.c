#include <stdio.h>

int main() {
    char pais[50];
    unsigned long int populacao;
    int area, pontos_turisticos;
    float PIB, densidade, PIBpercapita;

    printf("Cadastro de Cartas\n");

    printf("País:\n");
    scanf("%s", pais);

    printf("População:\n");
    scanf("%lu", &populacao);
    printf("Área (km²):\n");
    scanf("%d", &area);
    
    printf("PIB:\n");
    scanf("%f", &PIB);

    printf("Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita
    densidade = (area) ? (float)populacao / area : 0;
    PIBpercapita = (populacao) ? PIB / populacao : 0;

    // Exibição dos dados
    printf("\nPaís: %s\nPopulação: %lu\nÁrea: %d km²\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\n", 
           pais, populacao, area, PIB, pontos_turisticos, densidade, PIBpercapita);

    return 0;
}
