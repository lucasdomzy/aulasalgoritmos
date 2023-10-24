#include <stdio.h>

int fatorial(int n);

int main(){

    int n, resultado;
    printf("Informe um número:");
    scanf("%d", &n);
    fatorial(n);
    printf("O fatorial do número é: %d", resultado = fatorial(n));

return 0;
}

int fatorial(int n){
    int result = 1, i;
    for(i = 1; i <= n; i++){
        result*=i;
    }
    return result;
}
