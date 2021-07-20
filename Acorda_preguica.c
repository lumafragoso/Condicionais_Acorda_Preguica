#include <stdio.h>

int main(){

    //VARIAVEIS
    int hora, minuto;

    //LER VARIAVEIS
    scanf("%d:%d", &hora, &minuto);

    //CONDICOES DO HORÁRIO
    if (hora<12 || (hora==12 && minuto<01)){
        printf("Cedo demais!\n");
    }else if (hora>12 || (hora==12 && minuto>=01)){
        printf("Hora de acordar...\n");
    }
    
    return 0;

}