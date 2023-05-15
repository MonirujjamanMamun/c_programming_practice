#include <stdio.h>
int sum(int x, int y){
    int ans= x+y;
    return ans;
}
int mul(int x, int y){
    return x*y;
}
int div(int a, int b){
    return a/b;
}
int minus(int a, int b){
    return a-b;
}
int main (){

    printf("%d\n", sum(10, 20));
    printf("%d\n", mul(10, 20));
    printf("%d\n", div(10, 2));
    printf("%d\n", minus(100, 20));
    return 0;
}
