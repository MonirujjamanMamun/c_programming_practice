#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int sp=n-1, star=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<sp; j++){
            printf(" ");
        }
        for(int j=0; j<star; j++){
            if(i % 2 == 0){
                printf("^");
            }else{
                printf("*");
            }
        }
        sp--;
        star+=2;
        printf("\n");
    }
    return 0;
}