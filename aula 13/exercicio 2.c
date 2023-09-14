#include <stdio.h>

int main(){

    int idade, sexo, th = 0, tm = 0, somai = 0, cont = 0;
    double peso, somap = 0, mediap, mediai;
    for(cont = 1; cont <= 10; cont++){
        printf("Infome a idade da pessoa:");
        scanf("%d", &idade);
        printf("Informe o peso:");
        scanf("%lf", &peso);
        printf("Informe o sexo (1 para homem, 2 para mulher):");
        scanf("%d", &sexo);
        if(sexo == 1){
            th++;
            somai += idade;
        }
        else if (sexo == 2){
            tm++;
            somap += peso;
        }
        else{
            printf("Opção inválida! Informe navamente!\n");
            cont--;
        }
    }
    mediai = somai/th;
    mediap = somap/tm;
    printf("Total de homens: %d\n", th);
    printf("Total de mulheres: %d\n", tm);
    printf("Soma da idade de todos os homens: %d\n", somai);
    printf("Média da idade dos homens: %.2lf", mediai);
    printf("Soma do peso das mulhres: %.2lf", somap);
    printf("Média do peso das mulheres: %.2lf", mediap);



return 0;
}
