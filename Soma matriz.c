#include<stdio.h>
int main(){
    int matrizA[3][3],i=0,j=0,soma=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrizA[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            soma=soma+matrizA[i][j];
            printf("%d ",matrizA[i][j]);

        }
        printf("Soma da linha %d: %d \n",i+1,soma);
        soma=0;
    }



    return 0;
}

