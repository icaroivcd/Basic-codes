#include <stdio.h>
int main() {
    char letra[30];
    int i;

    scanf("%[^\n]s",letra);

    for(i=0;letra[i] != '\0'; i++){
        if (letra[i] == 32)
            continue;
        if (letra[i]== '$')
            break;
        if((letra[i]>= 'A' && letra[i]<='Z') || (letra[i]>='a' && letra[i]<='z'))
            if (letra[i]=='A' || letra[i]=='E'||letra[i]=='I'||letra[i]=='O'||letra[i]=='U'||letra[i]=='a'||letra[i]=='e'||letra[i]=='i'||letra[i]=='o'||letra[i]=='u')
               printf("Vogal.\n");
            else
                printf("Consoante.\n");
            else
                printf("Nao e uma letra do alfabeto.\n");
    }
    return 0;
}




