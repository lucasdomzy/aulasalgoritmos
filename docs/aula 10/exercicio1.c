#include <stdio.h>
#include <math.h>

int main(){

    int num, soma = 0,cont = 1;

    while(cont <= 10){
        printf("Informe o número %d:", cont);
        scanf("%d", &num);
        soma += num; //soma = soma + num;
        cont ++;
    }
    soma = soma/10;
    printf("A média é: %d", soma);

return 0;
}
