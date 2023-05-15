#include <stdio.h>
#include <string.h>

int main (){

    char S[1001];
    scanf("%s", S);
    int count[27]={0};
    for(int i=0; i<strlen(S); i++){
        count[S[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        printf("%c - %d\n", i+'a', count[i]);
    }
    return 0;
}