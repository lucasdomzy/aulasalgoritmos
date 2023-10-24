#include <stdio.h>

int maiorN(int n1, int n2);
int maiorNdeTres(int n1, int n2, int n3);

int main(){

    int n1, n2, n3, maior;
    printf("Informe tres valores:");
    scanf("%d %d %d", &n1, &n2, &n3);
    maior = maiorNdeTres(n1, n2, n3);
    printf("Maior número: %d", maior);

return 0;
}

int maiorN(int n1, int n2){
    if(n1 < n2){
        return n2;

    }
    else{
        return n1;
    }

}

int maiorNdeTres(int n1, int n2, int n3){
    int maior = maiorN(n1,n2);
    maior = maiorN(maior, n3);

}
