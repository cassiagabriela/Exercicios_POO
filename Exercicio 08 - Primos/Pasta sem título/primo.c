#include <stdlib.h>
#include <stdio.h>
#include "primo.h"

int numeroPrimo(int num){
    int i, cont=2;

    for(i=num-1;i>1;i--){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}