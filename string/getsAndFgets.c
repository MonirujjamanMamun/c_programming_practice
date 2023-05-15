#include <stdio.h>
#include <string.h>

int main (){

    char a[100];
    fgets(a, 100, stdin);
    int sz= strlen(a);
    printf("%s", a);
    printf("%d", sz);
    return 0;
}