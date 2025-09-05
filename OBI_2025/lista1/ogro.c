#include <stdio.h>

int main () {

    int maoEsquerda, maoDireita, soma;

    scanf("%d %d", &maoEsquerda, &maoDireita);

    if (maoEsquerda > maoDireita)
        soma = maoEsquerda + maoDireita;
    else 
        soma = 2 * (maoDireita - maoEsquerda);

    printf ("%d\n", soma);

    return 0;
}