#include <stdio.h>

int main(){

    int n, cont = 1;
    printf("Informe um número:");
    scanf("%d", &n);
    do{
        printf("%d x %d: %d\n", n, cont, (n*cont));
        cont++;

    }while (cont <= 10);

return 0;
}
