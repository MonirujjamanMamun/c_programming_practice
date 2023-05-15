#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    int position;
    scanf("%d", &position);
    for(int i= position; i<n; i++){
        myArr[i]= myArr[i+1];
    }
    for(int i= 0; i<n-1; i++){
        printf("%d ", myArr[i]);
    }
    return 0;
}