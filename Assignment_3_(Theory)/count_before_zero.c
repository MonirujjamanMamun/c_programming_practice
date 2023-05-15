#include <stdio.h>


int count_before_zero(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            break;
        }
        count++;
    }
    return count;
}
int main (){


    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    int ans= count_before_zero(myArr, n);
    printf("%d\n", ans);
    return 0;
}
