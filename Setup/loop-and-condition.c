#include <stdio.h>

int main(){
    int i;
    int input;
    scanf("%d", &input);
    for(i=1; i<=input; i++){
        if(i%2==0){
            printf("event number --%d\n", i);
        }else{
            printf("Odd number --%d\n", i);
        }
    }
    printf("%d", input);

    return 0;
}