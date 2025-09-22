#include <stdio.h>

int main() {
    // ======================
    // Simulação da Torre
    // ======================
    int casasTorre = 5; // número de casas que a torre vai andar
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // ======================
    // Simulação do Bispo
    // ======================
    int casasBispo = 5; // número de casas que o bispo vai andar
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // ======================
    // Simulação da Rainha
    // ======================
    int casasRainha = 8; // número de casas que a rainha vai andar
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
