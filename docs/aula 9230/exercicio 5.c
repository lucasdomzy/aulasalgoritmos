#include <stdio.h>

void calculoMedia (double n1, double n2, double n3, char m);

int main(){

    double n1, n2, n3;
    char tipoMedia;

    printf("Informe as tr�s notas do aluno:");
    scanf(" %lf %lf %lf", &n1, &n2, &n3);
    printf("Informe a m�dia que deseja(A - aritm�tica; P - ponderada):");
    scanf(" %c", &tipoMedia);

    calculoMedia(n1, n2, n3, tipoMedia);

return 0;
}

void calculoMedia (double n1, double n2, double n3, char media){

    double m;
    if(media == 'A'){
        m = (n1 + n2 + n3) / 3;
        printf("M�dia aritm�tica da nota: %.2lf\n", m);
    }
    else if(media == 'P'){
        m = (n1 * 5 + n2 * 3 + n3 * 2)/10;
        printf("M�dia ponderada da nota: %.2lf\n", m);
    }
    else{
        printf("Op��o de m�dia inv�lida!");
    }

}
