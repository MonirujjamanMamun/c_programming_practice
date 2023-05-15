// #include <stdio.h>
// #include <string.h>

// int main (){

//     char s[1000001];
//     scanf("%s", &s);
//     int sum=0;
//     for(int i=0; i<strlen(s); i++){
//         sum +=(s[i]-'0');
//     }
//     printf("%d", sum);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main (){

    char a[100];
    scanf("%s", &a);
    // int size= sizeof(a);
    // printf(sizeof(a));
    int s= strlen(a);
    int count=0;
    for(int i=1; i<s-1; i++){
        count++;
    }
    printf("%c%d%c", a[0], count, a[s-1]);
    return 0;
}
