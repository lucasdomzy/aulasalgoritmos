#include <stdio.h>

int main(){

    int n, n1, n2;

    printf("Informe a opera��o que deseja:\n 1 = soma\n 2 = subitra��o\n 3 = divis�o\n 4 = multiplica��o\n");
    scanf("%d", &n);

    while(n != 5){
        switch(n){
        case 1:{
        printf("Informe o primeiro n�mero:");
        scanf("%d", &n1);
        printf("Informe o segundo n�mero:");
        scanf("%d", &n2);
        n1+=n2;
        printf("O resultado �: %d\n", n1);
        break;
        }
                case 2:{
        printf("Informe o primeiro n�mero:");
        scanf("%d", &n1);
        printf("Informe o segundo n�mero:");
        scanf("%d", &n2);
        n1-=n2;
        printf("O resultado �: %d\n", n1);
        break;
                }
                        case 3:{
        printf("Informe o primeiro n�mero:");
        scanf("%d", &n1);
        printf("Informe o segundo n�mero:");
        scanf("%d", &n2);
        if(n1 == 0 || n2 == 0){
            printf("N�o existe divis�o por 0!\n");
        }
        else{
        n1/=n2;
        printf("O resultado �: %d\n", n1);
        break;
        }
                        }
                    case 4:{
        printf("Informe o primeiro n�mero:");
        scanf("%d", &n1);
        printf("Informe o segundo n�mero:");
        scanf("%d", &n2);
        n1*=n2;
        printf("O resultado �: %d\n", n1);
        break;
        }
        case 5:{
        break;
        }
        default:{
        printf("Opera��o inv�lida!\n");
        }
    }
     printf("Informe a opera��o que deseja:\n 1 = soma\n 2 = subitra��o\n 3 = divis�o\n 4 = multiplica��o\n");
    scanf("%d", &n);
    }
return 0;
}
