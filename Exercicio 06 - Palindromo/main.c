#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){    
    int i, tam, k=0;
    char palavra[20];
    
    printf("Informe um nome: ");
    scanf("%s", palavra);

    // Strlen retorna o tamanho da palavra informada 
    // como parametro
    tam = strlen(palavra);
    char inversa[tam];
    // Escreve a palavra ao contrario
    for(i=tam-1;i>=0;i--){
        inversa[k] = palavra[i];
        k++;
    }

    // Strcmp retorna zero se as palavras informadas 
    // como parametro forem iguais
    if(strcmp(palavra, inversa) == 0){
        printf("A palavra informada eh um Palindromo.\n");
    } else {
        printf("A palavra informada nao eh um Palindromo.\n");
    }

    return 0;
}