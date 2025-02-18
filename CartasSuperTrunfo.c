#include <stdio.h>

int main() {
    char pais[50];
    int populacao;
    int area;
    float PIB;
    int pontos_turisticos;

    float densidade;
    float PIBpercapita;

    int opcao;

    do {
        printf("Cadastro de Cartas\n");

        printf("País: ");
        scanf(" %49s", pais);

        printf("População:\n");
        scanf("%d", &populacao);

        printf("Área: ");
        scanf("%d", &area);
        
        printf("PIB: ");
        scanf("%f", &PIB);

        printf("Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos);

        densidade = populacao / area;
        PIBpercapita = PIB / populacao;

        printf("\nPaís: %s\n - População: %d\n - Área: %d\n - PIB: %.2f\n - Pontos Turísticos: %d\n - Densidade Populacional: %2.f\n - PiB per capita: %2.f\n", 
               pais, populacao, area, PIB, pontos_turisticos, densidade, PIBpercapita);
        
        printf("\nDeseja cadastrar outra carta? (1 - Sim, 0 - Não): ");
        scanf("%d", &opcao);
    } while (opcao = 1);

    printf("\nEncerrando o programa...\n");
    
    return 0;
}