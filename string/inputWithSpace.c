// #include <stdio.h>
// #include <string.h>

// int main (){

//     char name[10];
//     gets(name);
//     printf("%s", name);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main (){

    char name[16];
    fgets(name, 18, stdin);
    printf("%s", name);
    return 0;
}