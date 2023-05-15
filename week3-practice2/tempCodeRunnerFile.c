#include <stdio.h>
#include <string.h>

int main (){

    char a[20], b[20];
    scanf("%s %s", a, b);
    int result = strcmp(a, b);
    if(result<=0){
        printf("%s\n", a);
    }else{
        printf("%s\n", b);
    }
    return 0;
}
