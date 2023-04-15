#include <stdio.h>
int main(){
    int quantidade1,quantidade2,desconto;
    float valor1,valor2,total;

    scanf("%d%f%d%f%d",&quantidade1,&valor1,&quantidade2,&valor2,&desconto);
    total= (quantidade1*valor1)+(quantidade2*valor2);
    printf("Total sem desconto: %.2f\n",total);
    printf("Total com desconto: %.2f",total-(desconto*total/100));
    return 0;
}

