#include <stdio.h>
#include <math.h>

int main(){

    int cont;
    for(cont = 1; cont <= 20; cont++){
        printf("%d - %.1lf\n", cont, pow(cont, 2));
    }

return 0;
}
