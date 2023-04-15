#include <stdio.h>
#include <math.h>
int main(){
    int num,a=1;
    scanf("%d",&num);

    while(a<=num){
       if(a%2==0){
        printf("%d^2 = %.0f\n",a,pow(a,2));
       }
        a=a+1;
    }
    return 0;
}

