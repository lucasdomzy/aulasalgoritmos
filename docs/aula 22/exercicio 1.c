#include <stdio.h>

int main(){

    int vet[20], i, imp =0, mp7 = 0,neg = 0;
    for(i=0;i<20;i++){
        printf("Informe um número:");
        scanf("%d", &vet);
        if(vet[i] % 2 != 0){
            imp++;
        }
        if(vet[i] % 7 == 0){
            mp7++;
        }
        if(vet[i] < 0){
            neg++;
        }
    }
    printf("Quatidade de números ímpares: %d\n", imp);
    printf("Quantidade de números multiplos de 7: %d\n", mp7);
    printf("Quantidade de números negativos: %d\n", neg);



return 0;
}
