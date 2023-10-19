#include <stdio.h>

void parIpar(int n1);

int main(){

    int n1;
    printf("Informe um número:");
    scanf("%d", &n1);
    parImpar(n1);

return 0;
}

void parImpar (int n1){
    if(n1 % 2 == 0){
        printf("Número par!");
    }
    else if(n1 % 2 != 0){
        printf("Número ímpar!");
    }
}
