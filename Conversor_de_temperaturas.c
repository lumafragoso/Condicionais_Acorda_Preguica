#include <stdio.h>

int main(){

    //VARIAVEIS
    float temperatura, C, F, K;
    char escala;

    //LER A TEMPERATURA E ESCALA
    scanf("%f %s", &temperatura, &escala);

    //CASOS PARA AS ESCALAS
    switch (escala){
    case 'C':
        K = temperatura + 273.15;
        F = temperatura * 1.8 + 32;
        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f\n", temperatura, F, K);
        break;
    case 'F':
        C = (temperatura - 32)/1.8;
        K = C + 273.15;
        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f\n", C, temperatura, K);
        break;
    case 'K':
        C = temperatura - 273.15;
        F = C * 1.8 + 32;
        printf("Celsius: %.2f\nFarenheit: %.2f\nKelvin: %.2f\n", C, F, temperatura);
        break;
    default:
        printf("Escala inválida! Tente novamente.");
        break;
    }

    return 0;
}