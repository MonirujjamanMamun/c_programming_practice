#include <stdio.h>

int main (){

    int a;
    scanf("%d", &a);
    int firstNumber= a/10;
    printf("%d\n", firstNumber);
    int secondNumber = a%10;
    printf("%d\n", secondNumber);
    if(secondNumber!=0&& firstNumber%secondNumber==0 ){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}