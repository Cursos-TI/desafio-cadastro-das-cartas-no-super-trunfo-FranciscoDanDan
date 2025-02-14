#include <stdio.h>

int main(){
 char pais[50];
 int populacao;
 int area;
 float PIB;
 int pontos_turisticos;

    printf("Cadastro de Cartas\n");

    printf("País:\n");
    scanf("%s", &pais);

    printf("População:\n");
    scanf("%d", &populacao);

    printf("Área:\n");
    scanf("%d", &area);
    
    printf("PIB:\n");
    scanf("%f", &PIB);

    printf("Pontos Turisticos:\n");
    scanf("%d", &pontos_turisticos);

    printf("País: %s\n - População: %d\n - Área: %d\n - PIB: %f\n - Pontos Turisticos: %d\n", pais, populacao, area, PIB, pontos_turisticos);






return 0;

}