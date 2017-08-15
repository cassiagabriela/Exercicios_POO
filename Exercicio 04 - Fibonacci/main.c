#include <stdlib.h>
#include <stdio.h>

// Calcula o numero de Fibonacci na posicao num
int numFibonacci(int num){
    if(num <= 2){
        return 1;
    }
    // O numero de Fibonacci e a soma dos numero antecessores
    return numFibonacci(num-1) + numFibonacci(num-2);
}

int main(){
    int num, i, numFib, flag=0;

    printf("Informe um numero natural: ");
    scanf("%d", &num);

    if(num > 0){
        for(i=1;flag == 0;i++){
            // Calcula o numero de Fibonacci na posicao i
            numFib = numFibonacci(i);
            // Se o numero de Fibonacci for igual ao digirado pelo
            // usuario, e mostrado a mensagem e o programa e encerrado
            if(numFib == num){
                printf("Este numero faz parte da sequencia de Fibonacci\n");
                return 0;
            } else if(numFib > num){
                flag = 1;
            }
        }
    }
    printf("Este numero nao faz parte da sequencia de Fibonacci\n");

    return 0;
}
