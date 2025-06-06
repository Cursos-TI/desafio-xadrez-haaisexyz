#include <stdio.h>

// Trabalho movimento das peças de xadrez - Murillo :)


void torre(int direita) { //  Torre indo pra direita usando recursividade
    if (direita <= 0) {
        return;
    }

    printf("Direita\n");
    torre(direita - 1); 
}


void bispo(int sobe) { // Bispo subindo em diagonal
    if (sobe == 0)
        return;

    printf("Esquerda, Cima\n");
    bispo(sobe - 1);
}


void bispo2(int bispo) {
    for (int i = 0; i <= bispo; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Esquerda, Cima\n"); 
        }
    }
}


void rainha3(int esquerda) { // Rainha indo pra esquerda
    if (esquerda < 1) return;
    printf("Esquerda\n");
    rainha3(esquerda - 1); 
}


void cavalo2() { // Cavalo se mexendo em L
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            printf("Cima\n");
        }
        else if (i == 1) {
            printf("Cima\n"); 
        }
        else {
            printf("Direita\n"); 
        }
    }
}

int main() {

    // Variaveis
    int torrecasas = 5;
    int bispoqtd = 5;
    int rainhacontas = 8;

    
    printf("Movimento Da Torre:\n"); // Movimento Da Torre
    torre(torrecasas);
    printf("\n");

    
    bispo(bispoqtd); // Movimento do bispo
    printf("\n");

    
    printf("Bispo Com For Aninhado:\n");
    bispo2(bispoqtd);
    printf("\n");

    
    printf("Rainha Se Movendo:\n"); // Movimento da Rainha
    rainha3(rainhacontas);
    printf("\n");

    
    printf("Movimento Do Cavalo:\n"); // Movimento do cavalo em L 
    cavalo2();
    printf("\n");

    return 0;
}
