#include <stdio.h>

int main (){
    int n;
    int ans = -1;
    scanf("%d", &n);
    long long myArr[n], index;
    for(int i =0; i<n; i++){
        scanf("%lld", &myArr[i]);
    }
    scanf("%lld", &index);
    for(int i =0; i<n; i++){
        if(myArr[i]==index){
            ans= i;
            break;
        }
    }
    printf("%d", ans);
    return 0;
}