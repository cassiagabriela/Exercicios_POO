#include <stdlib.h>
#include <stdio.h>

// Recebe num como parametro e retorna 0 se ele nao for um numero
// primo e retorna 1 se for numero primo
int numeroPrimo(int num){
    int i, cont=2;

    for(i=num-1;i>1;i--){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int num, cont=0, i=1;

    printf("Informe um numero natural: ");
    scanf("%d", &num);

    printf("\nOs %d primeiros numeros primos sao:\n", num);
    while(cont < num){
        if(numeroPrimo(i)){
            printf("%d eh primo\n", i);
            cont++;
        }
        i++;
    }

    return 0;
}
