#include <stdio.h>

int main (){

    int n, star, space;
    scanf("%d", &n);
    star=1;
    space= n-1;
    for(int i=1; i<= n*2-1; i++){
        for(int j=1; j<=space; j++){
            printf(" ");
        }
        for(int j=1; j<=star; j++){
            printf("*");
        }
        if(n-1>=i){
            space--;
            star +=2;
        }else{
            space++;
            star -=2;
        }
        printf("\n");
    }
    return 0;
}