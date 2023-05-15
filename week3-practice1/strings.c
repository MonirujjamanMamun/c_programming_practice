#include <stdio.h>
#include <string.h>

int main (){

    char a[11], b[11];
    scanf("%s %s", a, b);
    printf("%d %d\n", strlen(a), strlen(b));
    strcat(a, b);
    int len= strlen(a);
    printf("%d\n", len);

    // for(int i=0; i<len; i++){
    //     char tem;
    //     tem= a[0];
    //     a[0]=b
    // }
    int i=0, j=len-1;
    while(i<j){
        printf("%c%c", a[i],a[j]);
        i++;
        j--;
    }
    printf("\n%s", a);
    // printf("%s %c%c", a, a[2, len-2]);
    return 0;
}
