#include <stdio.h>

int main(){

    char vinho;
    int tinto= 0, branco = 0, rose = 0, total;

      do{
        printf("Informe o tipo do vinho(T = tinto; B = branco; R = rose; F = sair\n): ");
        scanf(" %c", &vinho);
        if(vinho == 'T' || vinho == 't'){
            tinto++;
        }
        else if(vinho == 'B'|| vinho == 'b'){
            branco++;
        }
        else if(vinho == 'r' || vinho == 'R'){
            rose++;
        }
        else if(vinho != 'F' && vinho != 'f'){
            printf("Opção inválida!");
        }
      }while(vinho != 'f' && vinho != 'F');
      total = tinto + branco + rose;
      printf("Total de vinhos: %d\n", total);
      printf("Total de vinhos tintos: %d\n", tinto);
      printf("Total de vinhos brancos: %d\n", branco);
      printf("Total de vinhos rose: %d\n", rose);


return 0;
}
