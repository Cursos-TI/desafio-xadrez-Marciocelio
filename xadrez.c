#include <stdio.h>

int main() {

    printf("*** Desafio de Xadrez *** \n");
    
        int Torre = 5;   // Move-se 5 casas para a direita
        int Bispo = 5;   // Move-se 5 casas na diagonal (cima, direita)
        int Rainha = 8;  // Move-se 8 casas para a esquerda
    
        // Movimentação do Bispo
        // Utiliza estrutura de repetição while
        printf("Movimento do Bispo:\n");
        int i = 1;
        while (i <= Bispo) {
            printf("Cima, direita\n");
            i++;
        }
    
        // Movimentação da Torre
        // Utiliza estrutura de repetição for
        printf("\nMovimento da Torre:\n");
        for (int i = 1; i <= Torre; i++) {
            printf("Direita\n");
        }
    
        // Movimentação da Rainha
        // Utiliza estrutura de repetição do-while
        printf("\nMovimento da Rainha:\n");
        int i = 1;
        do {
            printf("Esquerda\n");
            i++;
        } while (i <= Rainha);
    
        return 0;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


