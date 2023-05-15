#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n], x, v;
    for(int i =0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    scanf("%d %d", &x, &v);
    myArr[x]= v;
    for(int i =n -1; i>=0; i--){
        printf("%d ", myArr[i]);      
    }
    return 0;
}