#include <stdlib.h>
#include <stdio.h>

int main(){

    int numF, cont=0, i;

    printf("Informe o numero de funcionarios: ");
    scanf("%d", &numF);

    float salarios[numF], media=0;
    printf("\n---------------------------\n");
    for(i=0;i<numF;i++){
        printf("%d salario: R$", i+1);
        scanf("%f", &salarios[i]);
        media += salarios[i];
    }
    
    media = (float) media/numF;

    for(i=0;i<numF;i++){
        if(salarios[i]>media)
            cont++;
    }

    printf("---------------------------\n");
    printf("%d funcionarios possuem salarios acima da media.\nMedia: %.2f\n", cont, media);

    return 0;
}