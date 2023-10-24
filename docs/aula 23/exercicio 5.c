#include <stdio.h>

int somaInf(int n1);

int main(){

    int n1, resultado;
    printf("informe um número:");
    scanf("%d", &n1);
    resultado = somaInf(n1);
    printf("Resultado da soma: %d", resultado);

}

int somaInf(int n1){

    int cont = 0, soma = 0;

    while(cont <= n1){

        soma += cont;
        cont++;

    }

   return soma;
}
