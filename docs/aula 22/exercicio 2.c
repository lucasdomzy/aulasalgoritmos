#include <stdio.h>

int main(){

    int vet[10], i, n, pos = -1;

    for(i=0; i<10; i++){
        printf("informe um valor:");
        scanf("%d", &vet[i]);
    }
    printf("Informe o valor que deseja encontrar:");
    scanf("%d", &n);
    for(i=0;i<10;i++){
        if(vet[i] == n){
           pos = i;
           break;
        }
    }

    if(pos == -1){
          printf("N�mero n�o encontrado!\n");
    }
    else{
       printf("O n�mero est� na posi��o %d", pos) ;
    }

return 0;
}
