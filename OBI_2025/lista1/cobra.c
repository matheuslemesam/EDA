#include <stdio.h> 

int main() {

int numeros[4];

for (int loop=0; loop<4; loop ++){
    scanf("%d", &numeros[loop]);
}

if (numeros[1] == numeros[3] || numeros[0] == numeros[2])   
    printf("V\n");

else 
    printf("F\n");

    return 0;
}
