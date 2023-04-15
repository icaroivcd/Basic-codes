#include <stdio.h>
int main(){
    int i,a,num;
    scanf("%d",&num);
    int vetorA[num];

     for(i=0;i<num;i++){
        scanf("%d",&vetorA[i]);
     }


    printf("Valores armazenados no vetor:\n");
    for(i=0;i<num;i++){
        printf("%d ",vetorA[i]);
    }
    printf("\nValores armazenados no vetor em ordem reversa:\n");

    for(a=i-1;a>=0;a--){
            printf("%d ",vetorA[a]);

    }
    return 0;
}
