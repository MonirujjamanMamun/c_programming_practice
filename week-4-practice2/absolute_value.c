#include <stdio.h>
#include <stdlib.h>

int my_abs(int a){  
    return abs(a);
}
int main (){

    int n;
    scanf("%d", &n);
    int ans= my_abs(n);
    printf("%d", ans);
    return 0;
}