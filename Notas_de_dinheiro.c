#include <stdio.h>

int main(){

    //VARIAVEIS
    int valor, n100, n50, n20, n10, n5, n2;

    //LER VALOR
    scanf("%d", &valor);

    //CONDIÇÕES DAS NOTAS
    //CALCULAR NOTAS DE 100
    if (valor >= 100){
        n100 = valor/100;
        printf("%d nota(s) de 100\n", n100);
        valor = valor - (n100*100);
    }//CALCULAR NOTAS DE 50
    if (valor<100 && valor>=50){
        n50 = valor/50;
        printf("%d nota(s) de 50\n", n50);
        valor = valor - (n50*50);
    }//CALCULAR NOTAS DE 20
    if (valor<50 && valor>=20){
        n20= valor/20;
        printf("%d nota(s) de 20\n", n20);
        valor = valor - (n20*20);
    }//CALCULAR NOTAS DE 10
    if (valor<20 && valor>=10){
        n10 = valor/10;
        printf("%d nota(s) de 10\n", n10);
        valor = valor - (n10 *10);
    }//CALCULAR NOTAS DE 5
    if (valor<10 && valor>=5){
        n5 = valor/5;
        printf("%d nota(s) de 5\n", n5);
        valor = valor - (n5*5);
    }//CALCULAR NOTAS DE 2
    if (valor<5 && valor>=2){
        n2 = valor/2;
        printf("%d nota(s) de 2\n", n2);
        valor= valor - (n2*2);
    }//CALCULAR MOEDAS
    if (valor<2 && valor>=1){
        printf("%d moeda(s) de 1\n", valor);
    }
    return 0;

}