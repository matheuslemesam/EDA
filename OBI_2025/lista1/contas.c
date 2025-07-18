#include <stdio.h>

int main (){

    int saldo, acougue, farmacia, padaria, armazenar = 0;

    scanf("%d", &saldo);
    scanf("%d", &acougue);
    scanf("%d", &farmacia);
    scanf("%d", &padaria);

    if (saldo >= acougue) {
        armazenar++;
        saldo -= acougue;
    } 
    if (saldo >= farmacia) {
        armazenar++;
        saldo -= farmacia;
    }
    if (saldo >= padaria) {
        armazenar++;
        saldo -= padaria;
    }
    if (armazenar == 0) {
        printf("0\n");
    } else {
        printf("%d\n", armazenar);
    }


    return 0;
}