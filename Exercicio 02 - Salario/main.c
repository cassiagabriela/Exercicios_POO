#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    float salario, somaAtual=0, somaReaj=0;
    char nome[20];

    printf("Informe o nome do funcionario: ");
    scanf("%[^\n]s", &nome);

    while(strcmp(nome, "fim") != 0){
        printf("Informe o salario bruto: R$");
        setbuf(stdin,NULL);
        scanf("%f", &salario);
        somaAtual += salario;
        printf("\nRelatorio do funcionario\n");
        printf("Nome funcionario: %s\n", nome);
        printf("Salario Atual: R$%.2f\n", salario);

        if(salario <= 150){
            salario *= 1.25;
        } else if(salario <= 300){
            salario *= 1.20;
        } else if(salario <= 600){
            salario *= 1.15;
        } else {
            salario *= 1.10;
        }

        somaReaj += salario;
        printf("Salario reajustado: R$%.2f\n", salario);
        printf("\n-----------------------\n");

        setbuf(stdin,NULL);
        printf("Informe o nome do funcionario: ");
        scanf("%[^\n]s", &nome);
    }

    printf("\nRELATORIO DE REAJUSTES\n");
    printf("Soma de salarios atuais: R$%.2f\n", somaAtual);
    printf("Soma de salarios reajustados: R$%.2f\n", somaReaj);
    printf("Direfenca dos salarios: R$%.2f\n", somaReaj - somaAtual);

    return 0;
}