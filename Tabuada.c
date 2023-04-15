#include <stdio.h>
int main(){
    int num,a=1;
    scanf("%d",&num);

    while(a<=10){
        printf("%d * %d = %d\n",num,a,num*a);

        a=a+1;
    }
        return 0;
}
