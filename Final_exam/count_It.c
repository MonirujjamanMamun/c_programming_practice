#include <stdio.h>
#include <string.h>

int main (){

    char s[1001];
    fgets(s, 1001, stdin);
    int cap=0, sm=0, sp=0;
    for(int i=0; i<strlen(s); i++){
        if(s[i]>='a' && s[i]<='z'){
            sm++;
        }else if(s[i]>='A' && s[i]<='Z'){
            cap++;
        }else if(s[i]==' '){
            sp++;
        }
    }
    printf("Capital - %d\nSmall - %d\nSpaces - %d", cap, sm, sp);
    return 0;
}