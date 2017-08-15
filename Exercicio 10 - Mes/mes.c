#include <stdlib.h>
#include <stdio.h>
#include "mes.h"

static char *string;

char *stringMes(int num){
    switch(num){
        case 1:
            string = "Janeiro";
            break;
        case 2:
            string = "Fevereiro";
            break;
        case 3:
            string = "Marco";
            break;
        case 4:
            string = "Abril";
            break;
        case 5:
            string = "Maio";
            break;
        case 6:
            string = "Junho";
            break;
        case 7:
            string = "Julho";
            break;
        case 8:
            string = "Agosto";
            break;
        case 9:
            string = "Setembro";
            break;
        case 10:
            string = "Outubro";
            break;
        case 11:
            string = "Novembro";
            break;
        case 12:
            string = "Dezembro";
            break;
    }
    return string;
}

