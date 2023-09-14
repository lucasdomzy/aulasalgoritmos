#include <stdio.h>

int main(){

    int n, media = 0, soma = 0, cont = 0;

    printf("Informe um número:");
    scanf("%d", &n);

    while(n != -99){
        soma += n;
        cont += 1;
        printf("Informe um número:");
        scanf("%d", &n);
    }
    media = soma/cont;
    printf("O resultado da soma e da média dos número é: %d e %d\n", soma, media);

return 0;
}
