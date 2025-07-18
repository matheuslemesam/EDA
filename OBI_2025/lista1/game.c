#include <stdio.h>

int main(){

    int numero_posicoes, posicao_disco, posicao_aviao, min_jogadas = 0;

    scanf("%d %d %d", &numero_posicoes, &posicao_disco, &posicao_aviao);

        while (posicao_aviao != numero_posicoes){
            if (posicao_aviao <= numero_posicoes){
            min_jogadas = posicao_aviao + min_jogadas;
            min_jogadas++;
            }
        
            else {
                min_jogadas = numero_posicoes - posicao_aviao + min_jogadas;
                min_jogadas++;

            }
    }



    printf("%d\n", min_jogadas);
    
    return 0;
}