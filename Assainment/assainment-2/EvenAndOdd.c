#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n], eventSum=0, oddSum=0;
    for(int i = 0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    for(int i = 0; i<n; i++){
        if(myArr[i]%2==0){
            eventSum += myArr[i];
        }else if(myArr[i]%2 !=0){
            oddSum += myArr[i];
        }
    }
        printf("%d %d", eventSum, oddSum);
    return 0;
}