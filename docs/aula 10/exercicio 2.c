#include <stdio.h>

int main(){

    int n, cont = 0, soma = 0;
    printf("Informe o limite:");
    scanf("%d", &n);
    while(cont <= n){
        soma += cont;
        cont++;
    }
    printf("A soma dos números é: %d", soma);

return 0;
}
