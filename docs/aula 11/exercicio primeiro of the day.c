#include <stdio.h>

int main(){

    int n, ma, me;
    printf("informe um número (adicione um zero(0) para finalizar):");
    scanf("%d", &n);
    ma = n;
    me = n;
    while (n != 0){
        if(n > ma){
            ma = n;
        }
        else if(n < me){
            me = n;
        }
        printf("Informe um número:");
        scanf("%d", &n);
    }
    printf("Maior: %d\n", ma);
    printf("Menor: %d\n", me);

return 0;
}
