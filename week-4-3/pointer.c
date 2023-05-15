#include <stdio.h>

int main (){

    int i=10;
    printf("%p", &i);
    int *j= &i;
    printf("\n%p", j);
    return 0;
}