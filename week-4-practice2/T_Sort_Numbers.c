#include <stdio.h>

int main (){

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int myArr[3];
    myArr[0]=a, myArr[1]=b, myArr[2]=c;
    for(int i=0; i<3; i++){
        scanf("%d ", &myArr[i]);
    }
    
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2-i; j++) {
         if (myArr[j] > myArr[j+1]) {
            int temp = myArr[j];
            myArr[j] = myArr[j+1];
            myArr[j+1] = temp;
         }
      }
   }
    for(int i=0; i<3; i++){
        printf("%d\n", myArr[i]);
    }
    printf("\n");
    printf("%d\n%d\n%d", a, b, c);


    return 0;
}