#include <stdio.h>

int main(){

   int idade, peso, cont = 1, somam = 0, somaf = 0, mediai, mediap, somap = 0, somai = 0;
   char sexo;
   do{
    printf("Informe o sexo, a idade e o peso da pessoa %d:", cont);
    scanf(" %c %d %d", &sexo, &idade, &peso);
    if(sexo == 'f' || sexo == 'F'){
        somaf++;
        somap = somap + peso;
        mediap = somap/somaf;
    }
    else if(sexo == 'm' || sexo == 'M'){
        somam++;
        somai += idade;
        mediai = somai/somam;
    }
    cont++;
   }
   while(cont<=4);
       printf("O total de mulheres é: %d\n", somaf);
       printf("O total de homens é: %d\n", somam);
       printf("A soma e média de peso das mulheres é: %d e %d\n", somap, mediap);
       printf("A soma e a média da idade dos homens é: %d e %d\n", somai, mediai);

return 0;
}
