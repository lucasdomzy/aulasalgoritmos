#include <stdio.h>

int main(){

    int cod;

    printf("Informe o c�digo:");
    scanf("%d", &cod);

    switch(cod){
      case 1:{
      printf("Alimento n�o perec�vel");
      break;
      }
      case 2:{printf("Alimento prec�vel");
      break;
      }
      case 3:{
      printf("Vestu�rio");
      break;
      }
      case 4:{
      printf("Limpeza");
      break;
      }
      default:{
      printf("C�digo inv�lido!");
      break;
      }
    }

return 0;
}
