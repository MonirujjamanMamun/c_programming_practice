#include <stdio.h>

int main(){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum, biyog, multi;
    float divid;
    sum=a+b;
    biyog=a-b;
    multi=a*b;
    divid=a*1.0/b;
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, biyog);
    printf("%d * %d = %d\n", a, b, multi);
    printf("%d / %d = %0.2f", a, b, divid);


    return 0;
}