#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    for(int i=0; i<n; i++){
        if(myArr[i]>0){
            printf("1 ");
        }else if(myArr[i]<0){
            printf("2 ");
        }else{
            printf("0 ");
        }
    }
    return 0;
}