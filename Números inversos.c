#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    printf("De %d a 1:",num);

    while(num>0){
        printf(" %d",num);
    num=num-1;
}
return 0;
}
