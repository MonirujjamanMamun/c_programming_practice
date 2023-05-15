#include <stdio.h>

int main (){

    int n, k;
    scanf("%d %d", &n, &k);
    int i=0;
    while(i<k){
        for(int i=1; i<=n; i++){
            printf("%d ", i);
        }
        printf("\n");
        i++;
    }
    return 0;
}