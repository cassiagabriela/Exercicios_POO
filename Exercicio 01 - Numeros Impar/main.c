#include <stdlib.h>
#include <stdio.h>

int main(){

    int i, num1, num2;

    printf("Informe o intervalo com numeros naturais:\n");
    scanf("%d %d", &num1, &num2);

    printf("\nDentro do intervalo os numeros impar sao:\n");
    for(i=num1+1;i<num2;i++){
        if(i%2 != 0)
            printf("O numero %d eh impar.\n", i);
    }

    return 0;
}