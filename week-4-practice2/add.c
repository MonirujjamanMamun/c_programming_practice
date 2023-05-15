#include <stdio.h>
int sum(int a, int b){
    return a+b;
}

int main (){

    int x, y;
    scanf("%d %d", &x, &y);
    int ans= sum(x,y);
    printf("%d", ans);
    return 0;
}