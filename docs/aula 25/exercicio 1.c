#include <stdio.h>

struct banda{
    char nome[50];
    char estilo[20];
    int totalIntegrantes;
    int rank;
};

int main(){

    struct banda b1;
    printf("Informe o nome da banda: ");
    scanf(" %[^\n]s", b1.nome);
    printf("Informe o estilo musical: ");
    scanf(" %[^\n]s", b1.estilo);
    printf("Informe a quantidade de integrantes:");
    scanf("%d", &b1.totalIntegrantes);
    printf("Informe o rank:");
    scanf("%d", &b1.rank);

    printf("Dados da banda:\n");
    printf("%s\n%s\n%d\n%d\n", b1.nome, b1.estilo, b1.totalIntegrantes, b1.rank);

return 0;
}
