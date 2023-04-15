#include <stdio.h>
int main(){
    int num,contador=1;
    scanf("%d",&num);

    while(contador<=num){
            if(contador%2 != 0)
        printf("%d\n",contador);
        contador=contador+1;

    }
    return 0;
}
