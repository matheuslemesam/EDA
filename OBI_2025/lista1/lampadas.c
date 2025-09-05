#include <stdio.h>

int main() {

    //vetor 0, 1, 2, 3
    int vetor[4], interruptores = 0; // 2 operações

    scanf("%d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3]); // 1 operação

    if (vetor[0] != vetor[2] || vetor [0] != vetor[2] && vetor[1] != vetor[3]) interruptores ++;

    else if (vetor [1] != vetor[3]) interruptores = 2;

    printf("%d\n", interruptores);

    return 0;
}

