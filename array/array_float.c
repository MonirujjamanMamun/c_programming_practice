#include <stdio.h>

int main (){

    float myFloat[5]= {10.1, 20.2, 30.3, 40.4, 50.5};
    for(int i=4; i>=0; i--){
        printf("%0.1f\n", myFloat[i]);
    }
    return 0;
}