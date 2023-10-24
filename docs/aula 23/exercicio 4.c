#include <stdio.h>

void calculaIMC(double peso, double altura);

int main(){

    double peso, altura;
    printf("Informe o peso e a altura:");
    scanf("%lf %lf", &peso, &altura);
    calculaIMC(peso, altura);

return 0;
}

void calculaIMC(double peso, double altura){
    double imc = peso/(altura*altura);
    if (imc < 18.5){
        printf("Abaixo do peso!");
    }
    else if(imc >= 18.5 && imc <=25){
        printf("Peso normal!");
    }
    else if(imc > 25 && imc <= 30){
        printf("Acima do peso!");
    }
    else{
        printf("Obeso!");
    }
}
