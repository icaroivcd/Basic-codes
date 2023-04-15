#include <stdio.h>
int main(){
    int vetorS[10],i=0,temp;

    for(i=0;i<10;i++){
        scanf("%d",&vetorS[i]);
    }
    temp=vetorS[9];
    vetorS[9]=vetorS[1];
    vetorS[1]=temp;
    temp=vetorS[8];
    vetorS[8]=vetorS[0];
    vetorS[0]=temp;



   for(i=0;i<10;i++){
       printf("%d ",vetorS[i]);


   }
return 0;
}
