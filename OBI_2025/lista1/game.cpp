#include <cstdio>

int main(){

    int numero_posicoes, posicao_disco, posicao_aviao, min_jogadas = 0;

    scanf("%d %d %d", &numero_posicoes, &posicao_disco, &posicao_aviao);

        while (posicao_aviao != numero_posicoes){
            if (posicao_aviao > numero_posicoes){
                min_jogadas = numero_posicoes + posicao_disco - posicao_aviao;
                break;
            }
            else{
                while(posicao_aviao ){
                    if (posicao_aviao == posicao_disco){
                        break;
                    }
                    min_jogadas++;
                }
            }
    }

    printf("%d\n", min_jogadas);
    
    return 0;
}