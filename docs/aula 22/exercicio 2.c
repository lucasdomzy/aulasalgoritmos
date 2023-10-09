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
          printf("Número não encontrado!\n");
    }
    else{
       printf("O número está na posição %d", pos) ;
    }

return 0;
}
