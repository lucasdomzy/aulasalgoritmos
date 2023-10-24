#include <stdio.h>

int maiorN(int n1, int n2, int n3);

int main(){

    int n1, n2, n3, maior;
    printf("Informe tres valores:");
    scanf("%d %d %d", &n1, &n2, &n3);
    maior = maiorN(n1, n2, n3);
    printf("Maior número: %d", maior);

return 0;
}

int maiorN(int n1, int n2, int n3){
    if(n1 < n2 && n2 > n3){
        return n2;

    }
    else if(n1>n2 && n1>n3){
        return n1;
    }
    else if(n3>n1 && n3>n2){
        return n3;
    }

}


