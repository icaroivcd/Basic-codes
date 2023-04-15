#include <stdio.h>
#include <string.h>
int main(){
    char palavra[100];
    int i,tamanho,numero=0,letras=0;

    scanf("%s",palavra);
    tamanho=strlen(palavra);

   for(i=0;i<tamanho;i++){

    if((palavra[i] >= 'a' && palavra[i] <= 'z')||(palavra[i]>='A' && palavra[i]<='Z'))
        numero++;
    if(palavra[i]>= 48 && palavra[i]<=57)
        letras++;
   }



        printf("Total de letras: %d\nLetras: %d\nNumeros: %d",tamanho,numero,letras);



    return 0;
}


