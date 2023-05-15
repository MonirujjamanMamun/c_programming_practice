#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArra[n];
    for(int i= 0; i<n; i++){
        scanf("%d", &myArra[i]);
    }
    int m;
    scanf("%d", &m);
    int myArrb[m];
    for(int i=0; i<m; i++){
        scanf("%d", &myArrb[i]);
    }

    int newArr[n+m];

    for(int i= 0; i<n; i++){
        newArr[i]=myArra[i];
    }
    int b=n;
    for(int i=0; i<m; i++){
        newArr[b]=myArrb[i];
        b++;
    }
    for(int i=0; i<n+m; i++){
        printf("%d ", newArr[i]);
    }
    return 0;
}