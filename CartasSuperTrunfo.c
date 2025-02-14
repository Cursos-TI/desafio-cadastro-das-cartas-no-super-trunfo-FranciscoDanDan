#include <stdio.h>

int main() {
    char pais[50];
    int populacao;
    int area;
    float PIB;
    int pontos_turisticos;
    int opcao;

    do {
        printf("\nCadastro de Cartas\n");

        printf("País: ");
        scanf(" %49s", pais);

        printf("População: ");
        scanf("%d", &populacao);

        printf("Área: ");
        scanf("%d", &area);
        
        printf("PIB: ");
        scanf("%f", &PIB);

        printf("Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos);

        printf("\nPaís: %s\n - População: %d\n - Área: %d\n - PIB: %.2f\n - Pontos Turísticos: %d\n", 
               pais, populacao, area, PIB, pontos_turisticos);
        
        printf("\nDeseja cadastrar outra carta? (1 - Sim, 0 - Não): ");
        scanf("%d", &opcao);
    } while (opcao = 1);

    printf("\nEncerrando o programa...\n");
    return 0;
}
