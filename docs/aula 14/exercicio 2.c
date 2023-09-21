#include <stdio.h>

int main(){

    int n, n1, n2;

    printf("Informe a operação que deseja:\n 1 = soma\n 2 = subitração\n 3 = divisão\n 4 = multiplicação\n");
    scanf("%d", &n);

    while(n != 5){
        switch(n){
        case 1:{
        printf("Informe o primeiro número:");
        scanf("%d", &n1);
        printf("Informe o segundo número:");
        scanf("%d", &n2);
        n1+=n2;
        printf("O resultado é: %d\n", n1);
        break;
        }
                case 2:{
        printf("Informe o primeiro número:");
        scanf("%d", &n1);
        printf("Informe o segundo número:");
        scanf("%d", &n2);
        n1-=n2;
        printf("O resultado é: %d\n", n1);
        break;
                }
                        case 3:{
        printf("Informe o primeiro número:");
        scanf("%d", &n1);
        printf("Informe o segundo número:");
        scanf("%d", &n2);
        if(n1 == 0 || n2 == 0){
            printf("Não existe divisão por 0!\n");
        }
        else{
        n1/=n2;
        printf("O resultado é: %d\n", n1);
        break;
        }
                        }
                    case 4:{
        printf("Informe o primeiro número:");
        scanf("%d", &n1);
        printf("Informe o segundo número:");
        scanf("%d", &n2);
        n1*=n2;
        printf("O resultado é: %d\n", n1);
        break;
        }
        case 5:{
        break;
        }
        default:{
        printf("Operação inválida!\n");
        }
    }
     printf("Informe a operação que deseja:\n 1 = soma\n 2 = subitração\n 3 = divisão\n 4 = multiplicação\n");
    scanf("%d", &n);
    }
return 0;
}
