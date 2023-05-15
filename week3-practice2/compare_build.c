#include <stdio.h>
#include <string.h>

int main (){

    char a[20], b[20];
    scanf("%s %s", a, b);
    int result = strcmp(a, b);
    if (result == 0) {
        printf("%s\n", a);
    } else if (result < 0) {
        printf("%s\n", a);
    } else {
        printf("%s\n", b);
    }
    
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// #define MAX_SIZE 20

// int main() {
//     char X[MAX_SIZE], Y[MAX_SIZE];
    
//     // Read the input strings
//     scanf("%s%s", X, Y);
    
//     // Compare the strings lexicographically
//     int cmp = strcmp(X, Y);
    
//     // Print the smallest string
//     if (cmp <= 0) {
//         printf("%s\n", X);
//     } else {
//         printf("%s\n", Y);
//     }
    
//     return 0;
// }
