#include <stdlib.h>
#include <stdio.h>
#include "raizes.h"

int main(){
    int a, b, c, i, *raizes;

    printf("Informe as constantes da equacao:\n");
    scanf("%d %d %d", &a, &b, &c);

    raizes = raizesEquacao(a,b,c);

    printf("As raizes a equacao eh:\n");
    if(raizes[2] == 0){
        printf("Esta fucao nao possui raizes.\n");
    } else {
        printf("%d %d\n", raizes[0], raizes[1]);
    }

    return 0;
}