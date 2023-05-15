#include <stdio.h>
#include <string.h>

int main (){

    char S[1000001];
    fgets(S, 1000001, stdin);
    int count=0;
    for(int i=0; i<strlen(S); i++){
        count += (S[i]-48);
    }
    printf("%d", count);
    return 0;
}