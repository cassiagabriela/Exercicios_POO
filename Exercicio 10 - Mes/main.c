#include <stdlib.h>
#include <stdio.h>
#include "mes.h"

int main(){
    int mes;

    printf("Informe o numero de um mes: ");
    scanf("%d", &mes);

    while(mes > 12 || mes < 1){
        printf("Valor invalido, informe outro: ");
        scanf("%d", &mes);
    }

    //stringMes(mes);
    printf("O mes informado eh: %s\n", stringMes(mes));

    return 0;
}