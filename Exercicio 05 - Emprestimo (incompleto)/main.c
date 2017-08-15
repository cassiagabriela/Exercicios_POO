#include <stdlib.h>
#include <stdio.h>

int main(){
    float emprestimo, mens, juros, valorJuro;
    int i;

    printf("Informe o valor do emprestimo: R$");
    scanf("%f", &emprestimo);
    printf("Informe o valor da menslidade: R$");
    scanf("%f", &mensalidade);
    printf("Informe o juros a.m : ");
    scanf("%f", &juros);

    valorJuro = emprestimo * juros;

    for(i=0;i<12;i++){
        printf("Mês 1:\n")
    }

    return 0;
}