#include <stdio.h>

int main(){

    int n, cont;
    printf("Informe um número:");
    scanf("%d", &n);
    for(cont = 0; cont <= n; cont += 3){
        printf("%d\n", cont);
    }

return 0;
}
