#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
         int sum, a, b, c;
        scanf("%d %d %d %d", &sum, &a, &b, &c);
        int ans= sum-(a+b+c);
        printf("%d\n", ans);
    }
  
    return 0;
}

// #include <stdio.h>

// int main() {
//     int T;
//     scanf("%d", &T);

//     while (T--) {
//         unsigned int S, A, B, C;
//         scanf("%u %u %u %u", &S, &A, &B, &C);

//         unsigned int D = S - A - B - C;
//         printf("%u\n", D);
//     }

//     return 0;
// }
