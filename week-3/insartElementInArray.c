#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n+1];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    int position, value;
    scanf("%d %d", &position, &value);
    for(int i= n; i> position; i--){
        myArr[i]= myArr[i-1];
    }
    myArr[position]= value;
    for(int i=0; i<n; i++){
        printf("%d ", myArr[i]);
    }
    return 0;
}