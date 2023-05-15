#include <stdio.h>

void print_number(int a){ 
    for(int i=1; i<a; i++){
        printf("%d ",i);
    }
    printf("%d", a);
}
int main (){
    int n;
    scanf("%d", &n);
    print_number(n);

    return 0;
}

