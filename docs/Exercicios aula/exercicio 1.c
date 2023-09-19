#include <stdio.h>
#include <math.h>

int main(){

    double mI, cont = 0, inicial, horas, minutos, segundos;
    printf("Informe a massa do material em gramas:");
    scanf("%lf", &mI);
    inicial = mI;
    while(mI > 0.5){
        mI = mI/2;
        cont++;
    }
    cont *= 50;
    segundos = cont;
    minutos = segundos / 60;
    horas = minutos / 60;
    printf("Massa inicial: %.2lf\n", inicial);
    printf("Valor final: %.2lf\n", mI);
    printf("O tempo até a massa ser menor do que 0.5 é de:\n %.2lf h\n %.2lf m\n %.2lf s\n", horas, minutos, segundos);


return 0;
}
