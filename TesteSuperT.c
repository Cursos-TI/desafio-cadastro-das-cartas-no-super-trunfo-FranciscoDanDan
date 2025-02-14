#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_CARTAS 5
#define NUM_ATRIBUTOS 3

// Estrutura para representar uma carta
typedef struct {
    char nome[30];
    int atributos[NUM_ATRIBUTOS];
} Carta;

// Função para exibir uma carta
void exibirCarta(Carta c) {
    printf("Nome: %s\n", c.nome);
    printf("1 - Força: %d\n", c.atributos[0]);
    printf("2 - Velocidade: %d\n", c.atributos[1]);
    printf("3 - Inteligência: %d\n", c.atributos[2]);
}

// Função para determinar o vencedor da rodada
void jogarRodada(Carta p1, Carta p2, int atributoEscolhido) {
    printf("\nJogador 1 escolheu %s\n", p1.nome);
    exibirCarta(p1);
    printf("\nJogador 2 escolheu %s\n", p2.nome);
    exibirCarta(p2);

    if (p1.atributos[atributoEscolhido] > p2.atributos[atributoEscolhido]) {
        printf("\nJogador 1 vence a rodada!\n");
    } else if (p1.atributos[atributoEscolhido] < p2.atributos[atributoEscolhido]) {
        printf("\nJogador 2 vence a rodada!\n");
    } else {
        printf("\nEmpate!\n");
    }
}

int main() {
    // Criando algumas cartas
    Carta baralho[NUM_CARTAS] = {
        {"Dragão", {90, 60, 50}},
        {"Cavaleiro", {70, 80, 60}},
        {"Mago", {40, 50, 90}},
        {"Fera", {85, 75, 40}},
        {"Robo", {95, 50, 70}}
    };

    int escolha1, escolha2, atributo;
    printf("Escolha uma carta para o Jogador 1 (0-4): ");
    scanf("%d", &escolha1);
    printf("Escolha uma carta para o Jogador 2 (0-4): ");
    scanf("%d", &escolha2);
    
    printf("Escolha um atributo para competir (1-Força, 2-Velocidade, 3-Inteligência): ");
    scanf("%d", &atributo);

    jogarRodada(baralho[escolha1], baralho[escolha2], atributo - 1);
    
    return 0;
}
