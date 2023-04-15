#include <stdio.h>
int main(){
    int x,y,contador,menor,maior,soma=0;
    scanf("%d%d",&x,&y);

    if(x>y){
        maior= x;
        menor= y;
    }
    else{
        maior=y;
        menor=x;
    }

    for(contador=menor+1;contador<maior;contador++){
        if(contador%2 != 0){
            printf("%d ",contador);
          soma=contador+soma;
        }
    }
    printf("\n%d",soma);


    return 0;
}








