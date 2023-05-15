#include <stdio.h>
#include <string.h>

int main (){

    char a[101];
    scanf("%s", &a);
    int letArr[26]={0};
    for(int i=0; i<strlen(a); i++){
        letArr[a[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(letArr[i] !=0){
            printf("%c : %d\n", i+'a', letArr[i]);
        }
    }
    return 0;
}