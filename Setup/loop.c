#include <stdio.h>

// int main (){
//     int i;
//     int n;
//     int sum = 0;
//     scanf("%d", &n);
//     // int sum= n*(n+1)/2;
//     for(i=0;i<=n;i++){
//         sum += i;
//         };
//     printf("%d\n", sum);
//     return 0;
// }

int main() {
    int N, i;
    scanf("%d", &N);
    for(i=1;i<=N;i++){
        if(i%5==0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
