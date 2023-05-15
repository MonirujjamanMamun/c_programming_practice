#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
    }
    int ans, flag=0;
    scanf("%d", &ans);
    for(int i=0; i<n-1; i++){
        for(int j=1; j<n; j++){
            if(myArr[i]+myArr[j]==ans){
                flag=1;
            }
        }
    }
    if(flag != 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}