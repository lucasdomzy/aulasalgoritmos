#include <stdio.h>

void calculoMedia (double n1, double n2, double n3, char m);

int main(){

    double n1, n2, n3;
    char tipoMedia;

    printf("Informe as três notas do aluno:");
    scanf(" %lf %lf %lf", &n1, &n2, &n3);
    printf("Informe a média que deseja(A - aritmética; P - ponderada):");
    scanf(" %c", &tipoMedia);

    calculoMedia(n1, n2, n3, tipoMedia);

return 0;
}

void calculoMedia (double n1, double n2, double n3, char media){

    double m;
    if(media == 'A'){
        m = (n1 + n2 + n3) / 3;
        printf("Média aritmética da nota: %.2lf\n", m);
    }
    else if(media == 'P'){
        m = (n1 * 5 + n2 * 3 + n3 * 2)/10;
        printf("Média ponderada da nota: %.2lf\n", m);
    }
    else{
        printf("Opção de média inválida!");
    }

}
