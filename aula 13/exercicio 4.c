#include <stdio.h>

int main(){

    int n, cont = 1, tn = 0;
    do{
            printf("Informe um valor:");
    scanf(" %d", &n);
        if(n < 0){
            tn++;
        }
        cont++;
    }while(cont <= 5);
    printf("Total de números negativos: %d\n", tn);

return 0;
}
