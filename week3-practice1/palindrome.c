#include <stdio.h>
#include <string.h>

int main (){

    char word[1001];
    scanf("%s", &word);
    int len= strlen(word);
    int is_palindrome=1;
    for(int i=0; i<len/2; i++){
        if(word[i] != word[len-i-1]){
            is_palindrome=0;
            break;
        }
    }
    if(is_palindrome){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}