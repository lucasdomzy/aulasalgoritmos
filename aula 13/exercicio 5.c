#include <stdio.h>

int main(){

    int n, cont, soma = 0;
    for(cont = 1; cont <= 10; cont++){
    printf("Informe um número;");
    scanf("%d", &n);
    if(n % 2 != && n % 3 == 0 && n >= 1 && n <= 500){
        soma+=n;
    }
    }
    printf("Soma: %d", soma);
return 0;
}
