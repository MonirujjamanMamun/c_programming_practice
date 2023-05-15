#include <stdio.h>
#include <limits.h>

void findMaxAndMin(int arr[], int b){
    int min= INT_MAX, max= INT_MIN;
    for(int i=0; i<b; i++){
        if(arr[i]<min){
            min= arr[i];
        }
        if(arr[i]>max){
            max= arr[i];
        }
    }
    printf("%d %d", min, max);
}

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d ", &myArr[i]);
    }
    
    findMaxAndMin(myArr, n);
   
    return 0;
}