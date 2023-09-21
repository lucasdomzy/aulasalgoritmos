#include <stdio.h>

int main(){

    int cod;

    printf("Informe o código:");
    scanf("%d", &cod);

    switch(cod){
      case 1:{
      printf("Alimento não perecível");
      break;
      }
      case 2:{printf("Alimento precível");
      break;
      }
      case 3:{
      printf("Vestuário");
      break;
      }
      case 4:{
      printf("Limpeza");
      break;
      }
      default:{
      printf("Código inválido!");
      break;
      }
    }

return 0;
}
