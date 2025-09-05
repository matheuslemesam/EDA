#include <stdio.h>

int main () {

    int ValorDiaria, AumentoDiaria, ChegadaHotel, ValorTotal;

    scanf("%d %d %d", &ValorDiaria, &AumentoDiaria, &ChegadaHotel);

    if (ChegadaHotel == 1)
        ValorTotal = 31*ValorDiaria;

    else if (ChegadaHotel >= 16 )
        ValorTotal = ValorDiaria + 16*AumentoDiaria;

    else
        ValorTotal = ValorDiaria + ChegadaHotel*AumentoDiaria;
    

    printf("%d\n", ValorTotal);

    return 0;
}

/*

    A diária do hotel para cada quem chegar no dia 1 é D Reais. Assim, quem chegar no dia 1 vai pagar um total de 31×D Reais.
    A diária do hotel aumenta A reais por dia. Ou seja, a diária é D+A Reais para quem chegar no dia 2; D+2×A Reais no dia 3; D+3×A Reais no dia 4 e assim por diante.
    A partir do dia 16 a diária não aumenta mais.

Note que quem chegar no dia 2 vai pagar um total de 30×(D+A) reais; quem chegar no dia 3 vai pagar um total de 29×(D+2×A) reais, e assim por diante.

*/