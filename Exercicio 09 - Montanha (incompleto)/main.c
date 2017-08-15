#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int num){
    int i, fat=1;

    for(i=num;i>0;i--){
        fat *= i;
    }

    return fat;
}

float cosse(int num){
    float cosseno = 1;
    int i, flag=0;

    for(i=2;i<21;i+=2){
        if(flag=0){
            cosseno -= pow(num,i)/fatorial(i);
            flag = 1;
        } else {
            cosseno += pow(num,i)/fatorial(i);
            flag = 0;
        }
    }

    return cosseno; 
}

int main(){
    float dist, dHorizontal, altura;
    double ang;

    printf("Informe da distancia: ");
    scanf("%f", &dist);
    printf("Informe o angulo: ");
    scanf("%lf", &ang);

    ang = (ang*M_PI)/180;
    dHorizontal =(float) dist*cos(ang);
    printf("%.2f Cosseno\n",cosse(ang) );
    altura = sqrt(pow(dist,2) - pow(dHorizontal,2));

    printf("\nA distancia horizontal eh: %.2f\n", dHorizontal);
    printf("A altura da montanha eh: %.2f\n", altura);

    return 0;
}