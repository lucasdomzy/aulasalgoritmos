#include <stdio.h>

void primo(int n1);

int main(){

    int n1;
    printf("Informe um número:");
    scanf("%d", &n1);
    primo(n1);

return 0;
}

void primo(int n1){
    int div = 0;
    for(int i = 1; i <= n1; i++){
        if(n1 % i == 0){
            div++;
        }
    }
    if(div == 2){
        printf("Número primo!");
    }
    else {
        printf("O número não é primo!");
    }
}
