#include <stdlib.h>
#include <stdio.h>

int main(){
    int *binario, num, k, i;

    printf("Informe um numero natural: ");
    scanf("%d", &num);
    // Aloca um vetor de 1 posicoes para o numero binario
    binario = (int*) malloc(1*sizeof(int));
    for(k=0;num>=2;k++){
        // Caso o vetor tenha atinjido o seu limite mais memoria sera alocada
        if(k >= 2){
            binario = (int*) realloc(binario, (k+1)*sizeof(int));
        }
        // Captura o resto da divisao e divide o numero por 2
        binario[k] = num%2;
        num /= 2;
    }
    // Pega o ultimo 1 da sequencia em binario
    binario[k] = num;
    printf("O numero convertido em binario eh:\n");
    for(i=k;i>=0;i--){
        printf("%d", binario[i]);
    }
    printf("\n");
    return 0;
}