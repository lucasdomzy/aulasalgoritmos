#include <stdio.h>
#include <math.h>

int main(){

    int voto;

    double pC1, pC2, pC3, pC4, c1 = 0, c2 = 0, c3 = 0, c4 = 0, branco = 0, nulo = 0, tV;

    while(voto != -1){
        printf("Informe seu voto:\n 1 - Candidato 1\n 2 - Candidato 2\n 3 - Candidato 3\n 4 - Candidato 4\n 5 - Branco\n -1 - Sair\n");
        scanf("%d", &voto);
        switch(voto){
        case 1 :{
        c1++;
        break;
        }
        case 2:{
        c2++;
        break;
        }
        case 3:{
        c3++;
        break;
        }
        case 4:{
        c4++;
        break;
        }
        case 5:{
        branco++;
        break;
        }
        case -1:{
        printf("Votaão finalizada!\n");
        break;
        }
        default:{
        nulo++;
        break;
        }
        }
    }
    tV = c1 + c2 + c3 + c4 + branco + nulo;
    pC1 = (c1/tV)*100;
    pC2 = (c2/tV)*100;
    pC3 = (c3/tV)*100;
    pC4 = (c4/tV)*100;
    printf("Total de votos para o candidato 1: %.0lf\n", c1);
    printf("Porcentagem de votos para o primeiro candidato: %.2lf %%\n", pC1);
    printf("Total de votos para o candidato 2: %.0lf\n", c2);
    printf("Porcentagem de votos para o primeiro candidato: %.2lf %%\n", pC2);
    printf("Total de votos para o candidato 3: %.0lf\n", c3);
    printf("Porcentagem de votos para o primeiro candidato: %.2lf %%\n", pC3);
    printf("Total de votos para o candidato 4: %.0lf\n", c4);
    printf("Porcentagem de votos para o primeiro candidato: %.2lf %%\n", pC4);
    printf("Total de votos brancos: %.0lf\n", branco);
    printf("Total de votos nulos: %.0lf\n", nulo);
    printf("Quantidade total de votos: %.0lf\n", tV);

return 0;
}
