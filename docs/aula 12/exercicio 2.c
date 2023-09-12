#include <stdio.h>

int main(){

    int n, cont = 1, numn;
    while (cont <= 5){
        printf("Informe o valor %d:", cont);
        scanf("%d", &n);
        cont++;
    }
            if (n < 0){
                printf("número total de números negativos: %d", numn);
            numn++;
        }
        else{
            printf("Não há nenhum número negativo!");
        }

return 0;
}
