#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    printf("Soma: %d\n",num1+num2);
    printf("Subtracao: %d\n",num1-num2);
    printf("Multiplicacao: %d\n",num1*num2);
    printf("Divisao: %.2f", (float)num1/num2);
    return 0;
}
