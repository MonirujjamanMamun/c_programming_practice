// #include <stdio.h>
// int sum(int a, int b){
//     return a+b;
// }
// int main (){

//     int n, m;
//     scanf("%d %d", &n, &m);
//     int ans= sum(n,m);
//     printf("%d", ans);
//     return 0;
// }

// #include <stdio.h>

// int printNumber(){
//     char n[101];
//     scanf("%s", &n);
//     int count=0;
//     for(int i=0; n[i]!='\0'; i++){
//         count++;
//     }
//     return count;
// }

// int main (){

//     int ans= printNumber();
//     printf("%d", ans);
//     return 0;
// }

// #include <stdio.h>
// void printLetter(int a){
//     for(int i=0; i<a; i++){
//         printf("%d ", i);
//     }
// }

// int main (){

//     int n;
//     scanf("%d", &n);
//     printLetter(n);
//     return 0;
// }

#include <stdio.h>
void squar(){
    int n;
    scanf("%d", &n);
    int ans= n*2;
    printf("%d", ans);
}
int main (){

    squar();
    return 0;
}