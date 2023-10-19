 #include <stdio.h>

 void imprimeCaracteres();

 int main(){
     imprimeCaracteres();
     printf("Eu gosto da linguagem C\n");
     imprimeCaracteres();
     printf("Curso de Analise e Desenvolvimento de Sistemas\n");
     imprimeCaracteres();

    return 0;
 }
 void imprimeCaracteres(){
   int i;
   for(i=1; i <= 60; i++){
    printf("%c", '*');
   }
   printf("\n");
 }
