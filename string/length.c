// #include <stdio.h>
// #include <string.h>

// int main (){

//     char name[20];
//     scanf("%s", name);
//     int count=0;
//     for(int i =0; name[i] !='\0'; i++){
//         count++;
//     }
//     printf("%d", count);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main (){

//     char name[20];
//     scanf("%s", name);
//     int i=0, count=0;
//     while (name[i] != '\0' )
//     {
//         count++;
//         i++;
//     }
//     printf("%d", count);
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main (){

    char name[20];
    scanf("%s", name);
    int count= strlen(name);
    printf("%d", count);
    return 0;
}