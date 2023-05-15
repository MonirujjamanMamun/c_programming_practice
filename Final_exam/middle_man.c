#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    int tem;
    for(int i=0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if(myArr[i]>myArr[j]){
                tem=myArr[i];
                myArr[i]=myArr[j];
                myArr[j]=tem;
            }
        }
    }
    int middle1, middle2;
    if (n % 2 == 0) {
        middle1 = n/2 - 1;
        middle2 = n/2;
        printf("%d %d\n", myArr[middle1], myArr[middle2]);
    } else {
        middle1 = (n+1)/2 - 1;
        printf("%d\n", myArr[middle1]);
    }
    return 0;
}