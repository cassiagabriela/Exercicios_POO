#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "raizes.h"

static int raizes[3];

int *raizesEquacao(int a, int b, int c){
    int delta, i;

    delta = (b*b) - (4*a*c);

    if(delta == 0){
        raizes[0] = -b + sqrt(delta);
        raizes[1] = 0;
        raizes[2] = 1;
    } else if(delta > 0){
        raizes[0] = (-b + sqrt(delta)) / (2*a);
        raizes[1] = (-b - sqrt(delta)) / (2*a);
        raizes[2] = 2;
    } else {
        for(i=0;i<3;i++)
            raizes[i] = 0;
    }

    return raizes;
}