#include <stdio.h>


void mover_torre(int casas) {
    if (casas > 0)
    {
        printf("Direita\n");
        mover_torre(casas - 1);
    }    
}

void mover_bispo(int casas) {
    if (casas > 0)
    {
        printf("Diagonal para cima e a direita\n");
        mover_bispo(casas - 1);
    }    
}

void mover_rainha(int casas) {
    if (casas > 0)
    {
        printf("Esquerda\n");
        mover_rainha(casas - 1);
    }    
}

int main() {

    char peca;
    int t = 1, b = 1, r = 1, c = 1;
    int direcao_cavalo;

    printf("Escolha a peca: \n");
    printf("T. Torre\n");
    printf("B. Bispo\n");
    printf("R. Rainha\n");
    printf("C. Cavalo\n");
    scanf(" %c", &peca);

    printf("\n");


    switch (peca)
    {
    case 'T':
    case 't':
        
        printf("Voce escolheu a Torre\n\n");
        mover_torre(5);

        break;

    case 'B':
    case 'b':
   
        printf("Voce escolheu a Bispo\n\n");
        mover_bispo(5);             
            
        break;

    case 'R':
    case 'r':
        
        printf("Voce escolheu a Rainha\n\n");
        mover_rainha(8); 

        break;

    case 'C':
    case 'c':

    printf("Voce escolheu o Cavalo\n\n");

    printf("Agora escolha a direcao: \n");
    printf("1. 2 para cima e 1 para direita\n");
    printf("2. 2 para cima e 1 para esquerda\n");
    printf("3. 2 para baixo e 1 para direita\n");
    printf("4. 2 para baixo e 1 para esquerda\n");    
    scanf("%d", &direcao_cavalo);

    printf("\n");

    int passos_verticais = 2;
    int passos_horizontais = 1;

    while (c > 0)
    {
        c--;

        for (int v = 0, h = 0; v < passos_verticais || h < passos_horizontais; )
        {
            // Movimento vertical primeiro
            if (v < passos_verticais)
            {
                if (direcao_cavalo == 1 || direcao_cavalo == 2)
                    printf("Cima\n");
                else
                    printf("Baixo\n");

                v++;

                continue;
            }

            // Movimento horizontal depois
            if (h < passos_horizontais)
            {
                if (direcao_cavalo == 1 || direcao_cavalo == 3)
                    printf("Direita\n");
                else
                    printf("Esquerda\n");

                h++;

                break; // termina o movimento em L
            }
        }

        printf("\n"); // separa cada movimento
    }

    break;

    default:
        printf("Opcao invalida!\n");
        break;
    }

    


    return 0;
}