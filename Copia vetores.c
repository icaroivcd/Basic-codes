#include <stdio.h>
int main(){
    int vetorA[10],i,x,a=0,vetorS[10];

    scanf("%d",&x);

    for(i=0;i<10;i++){
        scanf("%d",&vetorA[i]);

        if(vetorA[i]>x){
            vetorS[a]=vetorA[i];
            a++;
    }
    }

    for(i=0; i<a;i++){
        printf("%d ",vetorS[i]);
    }





    return 0;
}
