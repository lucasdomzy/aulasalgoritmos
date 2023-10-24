#include <stdio.h>

int soma(int num1, int num2);

int main(){

    int num1, num2, result;

    printf("Informe dois números:");
    scanf("%d %d", &num1, &num2);
    result = soma(num1, num2);
    printf("A soma dos números é: %d", result);

   return 0;
}

int soma(int num1, int num2){
    int result = num1 + num2;

    return result;
}
