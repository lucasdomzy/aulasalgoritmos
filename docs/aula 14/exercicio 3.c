#include <stdio.h>

int main(){

    double a, b, c, media;
    printf("Informe o tempo do corredor A:");
    scanf("%lf", &a);
    printf("Informe o tempo do corredor B:");
    scanf("%lf", &b);
    printf("Informe o tempo do corredor C:");
    scanf("%lf", &c);

    if(a < b && a < c && b < c){
        printf("A ordem de coloca��o �: A B C\n");
    }
       else if(a < b && a < c && b > c){
        printf("A ordem de coloca��o �: A C B\n");
    }
     else if(b < a && b < c && a < c){
        printf("A ordem de coloca��o �: B A C\n");
    }
    else if(b < a && b < c && a > c){
        printf("A ordem de coloca��o �: B C A\n");
    }
    else if(c < a && c < b && a < b){
        printf("A ordem de coloca��o �: C A B\n");
    }
    else if(c < a && c < b && a > b){
        printf("A ordem de coloca��o �: C B A\n");
    }
     media = (a + b + c) / 3;
     printf("A m�dia �: %.1lf\n", media);
return 0;
}
