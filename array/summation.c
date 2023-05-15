#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i =0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    long long sum=0;
    for(int i =0; i<n; i++){
        sum +=myArr[i];    
    }
    if(sum<0){
        sum= sum* -1;
    }
        printf("%lld\n", sum);
    return 0;
}