#include <stdio.h>

int main(){

    int n, cont;
    printf("Informe um número:");
    scanf("%d", &n);
    for(cont = n; cont >= 0; cont--){
        printf("%d\n", cont);
    }


return 0;
}
