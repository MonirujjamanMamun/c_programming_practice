#include <stdio.h>
#include <string.h>

int main (){

    char s[100];
    scanf("%s", s);
    char count[26]={0};
    for(int i =0; i<strlen(s); i++){
        count[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(count[i] != 0){
            printf("%c - %d \n", i+'a', count[i]);
        }
    }
    return 0;
}