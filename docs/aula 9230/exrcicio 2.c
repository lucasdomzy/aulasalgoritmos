#include <stdio.h>

void soma (int n1, int n2);
int main(){

    int num1, num2;

    printf("Informe dois números:");
    scanf("%d %d", &num1, &num2);
    soma (num1, num2);

return 0;
}

void soma (int n1, int n2){
    int s = n1 + n2;
    printf("Soma: %d\n", s);
}
