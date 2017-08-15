#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAM 20

void merge(char (*vetor1)[TAM], int tam1, char (*vetor2)[TAM], int tam2, char (*vetor3)[TAM]);

int main(){
    int tam1, tam2, tam3, i;

    printf("Informe quantas linhas as listas terao:\n");
    scanf("%d %d", &tam1, &tam2);

    tam3 = tam1 + tam2;
    char vetor1[tam1][TAM], vetor2[tam2][TAM], vetor3[tam3][TAM];

    printf("\nPreencha o primeiro vetor:\n");
    for(i=0;i<tam1;i++){
        setbuf(stdin,NULL);
        scanf("%s", vetor1[i]);
    }

    printf("\nPreencha o segundo vetor:\n");
    for(i=0;i<tam2;i++){
        setbuf(stdin,NULL);
        scanf("%s", vetor2[i]);
    }

    printf("-----------------------------------\n");
    printf("A lista concatenada eh:\n");
    merge(vetor1, tam1, vetor2, tam2, vetor3);
        
    for(i=0;i<tam3;i++){
        printf("%s\n", vetor3[i]);
    }

    return 0;
}

void merge(char (*vetor1)[TAM], int tam1, char (*vetor2)[TAM], int tam2, char (*vetor3)[TAM]){
    int tam3, i, menor, k=0, l=0, retorno;

    tam3 = tam1 + tam2;

    if(tam1 < tam2){
        menor = tam1;
    } else {
        menor = tam2;
    }

    for(i=0;i<tam3;i++){
        // Compara os vetores
        retorno = strcmp(vetor1[k], vetor2[l]);

        // Encontra o menor vetor
        if(retorno < 0){
            strcpy(vetor3[i], vetor1[k]);
            k++;
        } else if(retorno > 0){
            strcpy(vetor3[i], vetor2[l]);
            l++;
        } else {
            strcpy(vetor3[i], vetor2[l]);
            l++;

            i++;

            strcpy(vetor3[i], vetor1[k]);
            k++;
        }

        // Preenche o vetor3 com o restante das palavras que restaram
        // no vetor ainda nao terminado
        if(k == menor){
            for(i+=1;i<tam3;i++){
                strcpy(vetor3[i], vetor2[l]);
                l++;
            }
        } else if(l == menor){
            for(i+=1;i<tam3;i++){
                strcpy(vetor3[i], vetor1[k]);
                k++;
            }
        }
    }
}