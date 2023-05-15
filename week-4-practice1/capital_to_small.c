#include <stdio.h>

char conveter(char a){
    return a+32;
}
int main (){

    char a;
    scanf("%c", &a);
    char ans= conveter(a);
    printf("%c", ans);
    return 0;
}