#include <stdio.h>

int main(){
    int vet[10], i, maior, soma = 0, j, aux, cont;
    double media;
    for(i=0;i < 10; i++){
        printf("Informe o valor da posição [%d]:", i);
        scanf("%d", &vet[i]);
    }
    maior = vet[0];
    for(i = 1; i < 10; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }
    printf("O maior número é: %d\n", maior);
    for(i = 0; i < 10; i++){
        soma += vet[i];
    }
    media = soma/10.0;
    printf("A media dos elementos é: %.2lf\n", media);
    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(vet[i] > vet[j]){
                aux=vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    printf("Vetor ordenado:\n");
    for(i = 0; i < 10; i++){
        printf("%d\t", vet[i]);
    }
    printf("\n");

    printf("Números primos:\n");
    for(i = 1; i < 10; i++){
        cont = 0;
        for(j = 1; j <= vet[i]; j++){
            if(vet[i] % j == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d\t", vet[i]);
        }
    }

return 0;
}
