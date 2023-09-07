#include <stdio.h>

int main(){

    int n, cont = 1, soma = 0, neg = 0;
    do{
         printf("Informe um número:");
         scanf("%d", &n);
         if(n > 0){
            soma += n;
         }
         else if(n < 0){
            neg += 1;
         }
         cont++;
    }
    while(cont <= 15);
    printf("Soma dos positivos: %d\n", soma);
    printf("Quantidade de negativos: %d\n", neg);


return 0;
}
