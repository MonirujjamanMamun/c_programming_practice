#include <stdio.h>

// void change_it(int *a, int n){
//     a[n-1]=100;
//     for(int i=0; i<n; i++){
//         printf("%d ", a[i]);
//     }
// }
int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    int *p = &myArr;
    printf("%d", p);
    // change_it(p, n);
    return 0;
}