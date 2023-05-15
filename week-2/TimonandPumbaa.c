#include <stdio.h>

int main (){

    int a, b;
    scanf("%d%d", &a, &b);
    if((a-b)>0){
        int sum= a-b;
        printf("%d", sum);
    }else{
        printf("0");
    }
    return 0;
}