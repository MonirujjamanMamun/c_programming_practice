#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int star=(n*2)-1, space=0;
    for(int i=1; i<=n; i++){
        for(int j= 1; j<=star; j++){
            printf("*");
        }
        for(int j=0; j<=space; j++){
            printf(" ");
        }
        star -=2;
        space --;
        printf("\n");
    }
    return 0;
}