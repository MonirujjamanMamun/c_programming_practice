#include <stdio.h>
#include <limits.h>

int main (){

    int n;
    scanf("%d", &n);
    // int myArr[n];
    int a, min= INT_MAX, max= INT_MIN;
    int maxInd, minInd;
    for(int i=0; i<n; i++){
        scanf("%d", &a);
        if(a>max){
            max=a;
            maxInd=i;
        }
        if(a<min){
            min=a;
            minInd= i;
        }
        int tem;
        tem= minInd;
        minInd= maxInd;
        maxInd=tem;
    }
    // for(int i=0; i<n; i++){
    //     int tem;
    //     tem= minInd;
    //     minInd= maxInd;
    //     maxInd=tem;

    // }


    printf("%d %d\n", min, max);
    printf("%d %d \n", minInd, maxInd);
    for(int i=0; i<n; i++){
        printf("%d ", a);
    }
    return 0;
}