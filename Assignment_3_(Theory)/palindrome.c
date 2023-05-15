#include <stdio.h>
#include <string.h>


int is_palindrome(char a[]){
    int len= strlen(a);
    int palindrome=1;
    for(int i=0; i<len/2; i++){
        if(a[i] != a[len-i-1]){
            palindrome=0;
            break;
        }
    }
    return palindrome;
}


int main (){


     char word[10];
    scanf("%s", &word);
    int ans= is_palindrome(word);
    if(ans){
        printf("Palindrome\n");
    }else{
        printf("Not Palindrome\n");
    }
    return 0;
}
