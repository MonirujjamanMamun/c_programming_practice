#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    char word[101];
    for(int i=0; i<n; i++){
        fgets(word, 101, stdin);
    }
    printf("%s", word);
    return 0;
}