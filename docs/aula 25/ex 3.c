#include <stdio.h>

struct pessoa{
    char nome[50];
    double altura;
    int idade;

};

int main(){

    struct pessoa pessoas[10];
    //preenchendo vetor
    for(int i=0; i < 10; i++){
        printf("Preenchendo os dados da pessoa %d: ", i);
        printf("Informe seu nome:");
        scanf("%[^\n]s", pessoas[i].nome);
        printf("Informe sua altura:");
        scanf("lf", pessoas[i].altura);
        printf("Informe sua idade:");
        scanf("%d", pessoas[i].idade);
    }
    maior = pessoas[0].idade;
    pos = 0;

    for(int i = 0; i < 10; i++){
        if(maior < pessoas[i].idade){
            maior = pessoas[i].idade;
            pos = i;
        }
    }
    printf("Pessoa mais velha:\n Nome: %s\n Altura: %.2lf\n Idade: %d\n", pessoas[pos].nome, pessoas[pos].idade, pessoas[pos].altura)

    return 0;
}
