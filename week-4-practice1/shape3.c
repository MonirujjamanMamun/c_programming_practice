#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int star=1, space=n;
    for(int i=1; i<=n; i++){       
            for(int j=0; j<space; j++){
                printf(" ");
            }
            for(int j=0; j<star; j++){
                printf("*");
            }
            star +=2;
            space--;
        
        printf("\n");
    }
    star=n;
    space=0;
    for(int i=n; i<=1; i--){
            for(int j=0; j<space; j++){
                printf(" ");
            }
            for(int j=0; j<star; j++){
                printf("*");
            }
            star -=2;
            space++;
        printf("\n");
    }
    return 0;
}