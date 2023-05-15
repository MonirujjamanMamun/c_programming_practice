#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<=n; j++){
            if(myArr[i]>myArr[j]){
                int tem= myArr[i];
                myArr[i]=myArr[j];
                myArr[j]= tem;
            }
        }
    }
    for(int i=0; i<n; i++){
        printf("%d ", myArr[i]);
    }
    return 0;
}