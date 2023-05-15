#include <stdio.h>
#include <string.h>

int main (){

    char word[100001];
    scanf("%s", word);
    int len= strlen(word);
     for(int i=0; i<len; i++){
        if(word[i] >='a' && word[i] <='z'){
            word[i]= word[i]-32;
        }else if(word[i] >='A' && word[i] <='Z'){
            word[i]= word[i]+32;
        }
        if(word[i]==','){
            word[i]= ' ';
        }
    }
    printf("%s\n", word);
    return 0;
}