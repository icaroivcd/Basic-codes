#include <stdio.h>
int main(){
    int i=0,vetor[10],maior,menor,posicao=0;

    for(i=0;i<10;i++){
        scanf("%d",&vetor[i]);
    }

    maior=vetor[0];


    for(i=0;i<10;i++){
        if(vetor[i]>maior){
            maior=vetor[i];
            posicao=i;
        }
    }
    if(posicao==0)
        menor=vetor[1];

    for(i=0;i<10;i++){
        if(i==posicao)
            continue;

        if(vetor[i]>menor)
            menor=vetor[i];
    }

    if(maior == menor)
        printf("Maior: %d",maior);
    else
        printf("Maior: %d\nSegundo maior: %d",maior,menor);

    return 0;
}




