#include <stdio.h>

int main() {
    // --- Movimentos básicos de exemplo (nível anterior) ---
    printf("Movimentos básicos:\n");
    printf("Cima\n");
    printf("Direita\n");
    printf("Baixo\n");
    printf("Esquerda\n");

    // Linha em branco para separar
    printf("\n");

    // --- Movimento do Cavalo ---
    printf("Movimento do Cavalo:\n");

    // Quantidade de casas a percorrer
    int casasBaixo = 2;
    int casasEsquerda = 1;

    // Loop externo (for): para descer duas casas
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");  
    }

    // Loop interno (while): para mover uma casa para a esquerda
    int j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
