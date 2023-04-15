#include <stdio.h>
int main(){
    int fatorial,contador=1,a;

    scanf("%d",&fatorial);
    a=fatorial;


    for( ;fatorial>=1;fatorial=fatorial-1){
        contador=contador*fatorial;

    }
     printf("%d! = %d",a,contador);
    return 0;
}



