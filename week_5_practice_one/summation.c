// #include <stdio.h>
// int fun(int arr[], int n, int i){
//     long long count=0;
//     if(i==n) return 0;
//     count += arr[i];
//     fun(arr, n, i+1);
//     return count;
// }
// int main (){

//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int ans= fun(arr, n, 0);
//     printf("%d\n", ans);
//     return 0;
// }

#include <stdio.h>

int fun(long long int arr[], int n) {
    if (n == 0) return 0;
    return arr[n-1] + fun(arr, n-1);
}

int main() {
    int n;
    scanf("%d", &n);
    long long int arr[1003];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d", fun(arr, n));
    return 0;
}
