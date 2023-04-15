#include <stdio.h>
int main(){
    int quantidade,num1,num2,contador=0;
    scanf("%d",&quantidade);

    for(contador=0;contador<quantidade;contador++){
        scanf("%d %d",&num1,&num2);

        if(num1==num2){
            printf("Iguais\n");
            continue;
        }
        else if(num1>num2)
              printf("Maior entre %d e %d : %d\n",num1,num2,num1);
        else
            printf("Maior entre %d e %d : %d\n",num1,num2,num2);
    }
    return 0;
}


