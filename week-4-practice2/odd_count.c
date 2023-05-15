#include <stdio.h>
int count_odd(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 !=0){
            count++;
        }
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
    int ans= count_odd(myArr, n);
    printf("%d", ans);
    return 0;
}