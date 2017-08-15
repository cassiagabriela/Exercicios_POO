#include <stdlib.h>
#include <stdio.h>

#define TAM 5

int main(){

    int i, posicao;
    float peso[TAM], menor;

    printf("IINFORME OS PESOS\n");

    printf("Peso da pessoa %d: ", i+1);
    scanf("%f", &peso[0]);
    menor = peso[0];
    for(i=1;i<TAM;i++){
        printf("Peso da pessoa %d: ", i+1);
        scanf("%f", &peso[i]);
        if(peso[i] < menor){
            menor = peso[i];
            posicao = i;
        }
    }

    printf("\nO menor peso está na posicao %d do vetor.\n", posicao);
    printf("Peso: %.3fKg\n", peso[posicao]);

    return 0;
}