#include <stdio.h>

int main (){

    int a;
    scanf("%d", &a);
    int even=0, odd=0, posi=0,nega=0;
    for(int i=1; i<=a; i++){
        int n;
        scanf("%d", &n);
        if(n%2==0){
            even++;
        }else{
            odd++;
        }

        if(n>0){
            posi++;
        }else if(n<0){
            nega++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even, odd, posi, nega);
    return 0;
}