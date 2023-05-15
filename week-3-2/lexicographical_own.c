// #include <stdio.h>

// int main (){

//     char a[101], b[101];
//     scanf("%s %s", a, b);
//     int i=0;

//     while(1){
//         if(a[i] == '\0' && b[i]=='\0'){
//             printf("A and B are Same");
//             break;
//         }else if(a[i]=='\0'){
//             printf("A is small than B");
//             break;
//         } else if(b[i]=='\0'){
//             printf("B is small than A");
//             break;
//         }

//         if(a[i]==b[i]){
//             i++;
//         }else if(a[i]<b[i]){
//             printf("B is Big than A");
//             break;
//         }else{
//             printf("A is Big than B");
//             break;
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main (){

    char a[101], b[101];
    scanf("%s %s", a,b);
    int i=0;
    while(1){
        if(a[i]=='\0' && b[i]=='\0'){
            printf("A and B are equal");
            break;
        }else if(a[i]=='\0'){
            printf("A is small than B");
            break;
        }else if(b[i]=='\0'){
            printf("B is small than A");
            break;
        }

        if(a[i]==b[i]){
            i++;
        }else if(a[i]<b[i]){
            printf("A is small");
            break;
        }else{
            printf("B is small");
            break;
        }
    }
    return 0;
}