#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArr[i]);
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += myArr[i];
    }
    
    printf("%d\n", sum);
    
    
    return 0;
}