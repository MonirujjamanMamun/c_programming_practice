#include <stdio.h>

int main (){

    int myArr[5]={10, 20, 30, 40, 55};
    for(int i= 0; i<5; i++){
        if(myArr[i]%2==0){
            printf("%d -is an event number.\n", myArr[i]);
        }else{
            printf("%d is a odd Number\n", myArr[i]);
        }
    }
    return 0;
}