#include <stdio.h>

int main (){

    int n, space, star;
    scanf("%d", &n);
    star=n;
    space=0;
    for(int i=1; i<=n; i++){
        for(int j=star; j>=1; j-- ){
            printf("*");
        }
        for(int j =space; j>=1; j--){
            printf(" ");
        }
        star--;
        space +=2;
        printf("\n");
    }
    return 0;
}