#include <stdio.h>

int main() {
    
    int idade_irmao1, idade_irmao2, idade_irmao3;

    scanf("%d", &idade_irmao1);
    scanf("%d", &idade_irmao2);

    if (idade_irmao1 >= idade_irmao2) {
        idade_irmao3 = idade_irmao1 + (idade_irmao1 - idade_irmao2);
        printf("%d\n", idade_irmao3);
    }
    else {
        idade_irmao3 = idade_irmao2 + (idade_irmao2 - idade_irmao1);
        printf("%d\n", idade_irmao3);
    }

    return 0;
}