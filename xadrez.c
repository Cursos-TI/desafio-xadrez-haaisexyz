#include <stdio.h>

// Trabalho movimento das peças de xadrez - Murillo :)

int main()
{

    int torre = 0; // Movimento da Torre (5 casas para a direita usando o for)

    for (int torre = 0; torre < 5; torre++)
    {

        printf("Direita (Torre) \n");
    }

    int bispo = 0; // Movimento do Bispo (5 casas diagonais usando o while-do)

    do
    {
        printf("Esquerda, Cima (Bispo)\n");
        bispo++;

    } while (bispo < 5);

    int rainha = 0; // Movimento da Rainha (8 Casas para a esquerda usando o while)

    while (rainha < 8)

    {
        rainha++;
        printf("Esquerda (Rainha) \n");
    }

    return 0;
}