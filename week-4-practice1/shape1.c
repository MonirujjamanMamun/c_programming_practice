#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int space=0, star=n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=star; j++){
            printf("*");
        }
        // for(int j=0; j<=space; j++){
        //     printf(" ");
        // }
        star--;
        // space++;
        printf("\n");
    }
    return 0;
}