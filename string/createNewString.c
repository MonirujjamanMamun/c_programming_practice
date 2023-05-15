#include <stdio.h>
#include <string.h>

int main (){

    char a[1001], b[1001];
    scanf("%s", a);
    scanf("%s", b);
    int aCount= strlen(a);
    int bCount= strlen(b);
    printf("%d %d\n", aCount, bCount);
    printf("%s %s", a, b);
    return 0;
}