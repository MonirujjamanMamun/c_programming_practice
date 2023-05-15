#include <stdio.h>

int main (){

    int n;
    scanf("%d", &n);
    int tiger_count=0, pathan_count=0;
    for(int i=0; i<n; i++){
        int tiger, pathan;  
        scanf("%d %d", &tiger, &pathan);
        if(tiger > pathan){
            tiger_count++;
        }else if(tiger==pathan){
            pathan_count++;
            tiger_count++;
        }else{
            pathan_count++;
        }
    }
    if(tiger_count > pathan_count){
        printf("Tiger\n");
    } else if(tiger_count == pathan_count){
        printf("Draw");
    }else{
        printf("Pathan");
    }



    return 0;
}