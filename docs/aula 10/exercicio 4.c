#include <stdio.h>

int main(){

    int n, num, somaP = 0, somaI = 0, cont = 1, impares = 0;

    printf("Informe a quantidade de números:");
    scanf("%d", &n);

    while (cont <= n){
        printf("informe o número %d:", cont);
        scanf("%d", &num);
        if(num % 2 == 0){
            somaP += num;
        }
        else{
            somaI +=num;
            impares++;
        }
        printf("SomaP: %d\n", somaP);
        cont++;
    }
    somaI /= impares;
    printf("Soma dos pares: %d\n", somaP);
    printf("Média dos impares: %d\n", somaI);

return 0;
}
