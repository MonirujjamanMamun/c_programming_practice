#include <stdio.h>

int main (){

    int m, n, d;
    scanf("%d %d %d", &m, &n,&d);
    int total_day= (m*d)/n;
    printf("%d", total_day);
    return 0;
}