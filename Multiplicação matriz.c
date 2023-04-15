#include <stdio.h>
int main(){
    int matrizA[3][3],matrizX[3][3];
    int x,i=0,j=0;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&matrizA[i][j]);
        }
    }

    scanf("%d",&x);

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                matrizX[i][j]=matrizA[i][j]*x;

        }
    }
     printf("%d %d %d\n",matrizX[0][0],matrizX[0][1],matrizX[0][2]);
          printf("%d %d %d\n",matrizX[1][0],matrizX[1][1],matrizX[1][2]);
               printf("%d %d %d\n",matrizX[2][0],matrizX[2][1],matrizX[2][2]);

     return 0;
}

