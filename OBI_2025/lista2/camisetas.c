#include <stdio.h>

int main() {

    int numero_premiados, camisestasP, camisetasM, armazenaP = 0, armazenaM = 0;

    scanf("%d", &numero_premiados);

    int tamanhos[numero_premiados]; // 1 = P, 2 = M

    for (int i=0; i < numero_premiados; i++) {
        scanf("%d", &tamanhos[i]);
    }

    scanf("%d %d", &camisestasP, &camisetasM);

    for (int i=0; i < numero_premiados; i++) {
        if (tamanhos[i] == 1) armazenaP ++;
        else armazenaM ++;
    }

    if (camisestasP == armazenaP && camisetasM == armazenaM) printf("s\n");
    else printf("n\n");

    return 0;
}
