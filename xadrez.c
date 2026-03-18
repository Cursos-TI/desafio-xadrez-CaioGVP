#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    char peca;
    int t = 1, b = 1, r = 1;

        printf("Escolha a peca: \n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    scanf(" %c", &peca);

    printf("\n");


    switch (peca)
    {

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    case 'T':
    case 't':
        
        printf("Voce escolheu a Torre\n\n");

        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("8 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("7 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("6 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("5 |   |   | T |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("4 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("3 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("2 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("1 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("    a   b   c   d   e   f   g   h\n\n");

        while (t <= 5)
        {
            printf("Direita\n\n");

            t++;
        }

        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("8 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("7 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("6 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("5 |   |   |   |   |   |   |   | T |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("4 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("3 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("2 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("1 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("    a   b   c   d   e   f   g   h\n\n");
    
        break;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    case 'B':
    case 'b':

        
        printf("Voce escolheu a Bispo\n\n");

        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("8 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("7 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("6 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("5 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("4 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("3 |   | B |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("2 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("1 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("    a   b   c   d   e   f   g   h\n\n");

        do
        {
            printf("Diagonal para cima e a direita\n\n");
            b++;

        } while (b <= 5);              
        
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("8 |   |   |   |   |   |   | B |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("7 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("6 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("5 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("4 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("3 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("2 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("1 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("    a   b   c   d   e   f   g   h\n\n");
    
        break;

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    case 'R':
    case 'r':
        
        printf("Voce escolheu a Rainha\n\n");

        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("8 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("7 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("6 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("5 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("4 |   |   |   |   |   |   |   | R |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("3 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("2 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("1 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("    a   b   c   d   e   f   g   h\n\n");
        
        for (;r <= 8; r++)
        {
            printf("Esquerda\n\n");
            
        }

        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("8 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("7 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("6 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("5 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("4 | R |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("3 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("2 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("1 |   |   |   |   |   |   |   |   |\n");
        printf("  +---+---+---+---+---+---+---+---+\n");
        printf("    a   b   c   d   e   f   g   h\n\n");        

        break;
    
    default:
        printf("Opcao invalida!\n");
        break;
    }

    


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

    return 0;
}
