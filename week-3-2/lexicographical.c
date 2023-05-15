#include <stdio.h>
#include <string.h>

int main (){

    char a[100], b[100];
    scanf("%s %s", a,b);
    int result= strcmp(a,b);
    if(result>0){
        printf("A is Big");
    }else if(result<0){
        printf("B is Big");
    }else{
        printf("A and B are same");
    }
    return 0;
}