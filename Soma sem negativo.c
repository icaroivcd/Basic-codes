#include <stdio.h>
int main(){
    double num,contador=0,soma=0;

    for(contador=0;contador<10;contador++){
         scanf("%lf",&num);
        if(num==0){
            break;
        }else{
        if(num>0){
            soma=soma+num;
        }

    }
    }
    printf("Soma = %.2lf",soma);

    return 0;
}


