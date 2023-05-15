#include <stdio.h>
void fun(int arr[], int n, int i){
    if(i>=n)return;
    fun(arr, n, i+2);
    if(i%2==0){
        printf("%d ", arr[i]);
    }
}
int main (){

    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    fun(a, n, 0);
    return 0;
}
