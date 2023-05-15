#include <stdio.h>
#include <string.h>

int main (){

    char a[100];
    scanf("%s", a);
    int capital=0, small=0;
    for(int i =0; i<strlen(a); i++){
        if(a[i]>='a' && a[i]<='z'){
            small++;
        }else{
            capital++;
        }
    }
        printf("%d %d", capital, small);
    return 0;
}