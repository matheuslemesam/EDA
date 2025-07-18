#include <stdio.h>

int main (){

    int distancia, particula;

    scanf("%d", &distancia);

    particula = distancia - 3; // 3 é a distância percorrida inicialmente na reta

    if (particula%8 == 3){
        printf("1\n");
    } 
    else if (particula%8 == 4){
        printf("2\n");
    }
    else {
        printf("3\n");
    }


    return 0;
}