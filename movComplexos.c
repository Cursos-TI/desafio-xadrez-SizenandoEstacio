#include <stdio.h>

/* ------------------------------
   Funções recursivas
   ------------------------------ */

// Torre: movimento vertical (exemplo: 3 casas para cima)
void moverTorre(int casas, char *direcao) {
    if (casas == 0) return; // condição de parada
    printf("%s\n", direcao);
    moverTorre(casas - 1, direcao); // chamada recursiva
}

// Bispo: movimento diagonal (vertical + horizontal)
// Aqui uso recursão e loops aninhados
void moverBispo(int verticais, int horizontais, char *dirVert, char *dirHoriz) {
    if (verticais == 0 || horizontais == 0) return; // condição de parada

    // loop externo controla vertical
    for (int i = 0; i < 1; i++) {
        printf("%s\n", dirVert);

        // loop interno controla horizontal
        for (int j = 0; j < 1; j++) {
            printf("%s\n", dirHoriz);
        }
    }

    // chamada recursiva pra próxima casa diagonal
    moverBispo(verticais - 1, horizontais - 1, dirVert, dirHoriz);
}

// Rainha: combinação de movimentos (aqui só vertical para simplificar)
void moverRainha(int casas, char *direcao) {
    if (casas == 0) return;
    printf("%s\n", direcao);
    moverRainha(casas - 1, direcao);
}

/* ------------------------------
   Movimento do Cavalo (loops complexos)
   Cavalo se move em "L": duas casas para cima e uma para a direita
   ------------------------------ */
void moverCavalo() {
    int movimentosVert = 2;  // duas casas para cima
    int movimentosHor = 1;   // uma casa para a direita

    printf("Movimento do Cavalo:\n");

    // Loop aninhado com múltiplas variáveis e controle via break/continue
    for (int i = 0, j = 0; i <= movimentosVert || j < movimentosHor; ) {
        if (i < movimentosVert) {
            printf("Cima\n");
            i++;
            continue; // volta pro loop sem incrementar j ainda
        }

        // quando terminar de subir, move horizontal
        while (j < movimentosHor) {
            printf("Direita\n");
            j++;
            break; // sai do while pra respeitar o formato de "L"
        }

        // condição de saída
        if (i >= movimentosVert && j >= movimentosHor) break;
    }
}

/* ------------------------------
   Programa Principal
   ------------------------------ */
int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(3, "Cima");
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(2, 2, "Cima", "Direita");
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(2, "Esquerda");
    printf("\n");

    // Cavalo
    moverCavalo();

    return 0;
}
