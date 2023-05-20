#include <stdio.h>
#include <limits.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    int max= INT_MIN;
    for(int i=0; i<n; i++){
        if(myArr[i]>max){
            max= myArr[i];
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", max-myArr[i]);
    }
    return 0;
}