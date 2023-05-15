#include <stdio.h>

int carConv(int a){
    return a;
}

int main (){

    char car;
    scanf("%c", &car);
    int ans= carConv(car);
    printf("%d", ans);
    return 0;
}