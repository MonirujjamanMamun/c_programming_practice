#include <stdio.h>

int main (){

    int n, m, o;
    scanf("%d", &n);
    m=n-1;
    o=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            printf(" ");
        }
        for(int j=1; j<=o; j++){
            printf("*");
        }
        o +=2;
        m--;
        printf("\n");
    }
    return 0;
}