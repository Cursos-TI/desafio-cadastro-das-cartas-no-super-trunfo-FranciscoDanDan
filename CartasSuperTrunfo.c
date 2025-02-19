#include <stdio.h>

int main() {
    char pais[50];
    int populacao, area, pontos_turisticos, opcao;
    float PIB, densidade, PIBpercapita;

    do {
        printf("\nCadastro de Cartas\n");

        printf("País:\n");
        scanf(" %49[^\n]", pais); // Lê o nome do país com espaços

        printf("População: ");
        scanf("%d", &populacao);

        printf("Área: ");
        scanf("%d", &area);
        
        printf("PIB: ");
        scanf("%f", &PIB);

        printf("Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos);

        densidade = (area > 0) ? (float)populacao / area : 0;
        PIBpercapita = (populacao > 0) ? PIB / populacao : 0;

        printf("\nPaís: %s\nPopulação: %d\nÁrea: %d km²\nPIB: %.2f\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per capita: %.2f\n", 
               pais, populacao, area, PIB, pontos_turisticos, densidade, PIBpercapita);
        
        printf("\nDeseja cadastrar outra carta? (1 - Sim, 0 - Não): ");
        scanf("%d", &opcao);
    } while (opcao == 1);

    printf("\nEncerrando o programa...\n");
    
    return 0;
}