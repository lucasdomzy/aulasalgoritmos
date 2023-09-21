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
        printf("A ordem de colocação é: A B C\n");
    }
       else if(a < b && a < c && b > c){
        printf("A ordem de colocação é: A C B\n");
    }
     else if(b < a && b < c && a < c){
        printf("A ordem de colocação é: B A C\n");
    }
    else if(b < a && b < c && a > c){
        printf("A ordem de colocação é: B C A\n");
    }
    else if(c < a && c < b && a < b){
        printf("A ordem de colocação é: C A B\n");
    }
    else if(c < a && c < b && a > b){
        printf("A ordem de colocação é: C B A\n");
    }
     media = (a + b + c) / 3;
     printf("A média é: %.1lf\n", media);
return 0;
}
