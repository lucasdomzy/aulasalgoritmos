#include <stdio.h>

int main(){

    int n, fat = 1, cont = 1;

    printf("Informe um número:");
    scanf("%d", &n);
    if(n < 0){
        printf("Número inválido!");
    }
    else{
        while(cont <= n){
            fat *= cont;
            cont++;
        }
        printf("O fatorial de %d é %d", n, fat);
    }

return 0;
}
