#include <stdio.h>
#include <string.h>

int main (){

    char a[1001], b[1001];
    scanf("%s %s", a, b);
    int len= strlen(a);
    printf("%d ", len);
    int len2= strlen(b);
    printf("%d\n", len2);
    printf("%s %s", a, b);
    return 0;
}