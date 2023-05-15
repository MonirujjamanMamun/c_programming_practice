// #include <stdio.h>

// void func(int *arr, int n){
//     for(int i=0; i<n; i++){
//         printf("%d ", arr[i]);
//     }
// }

// int main (){

//     int arr[6]={10, 20, 30, 40, 50, 60};
//     func(arr, 6);
//     return 0;
// }

#include <stdio.h>
int main()
    {
        int ary[4] = {1, 2, 3, 4};
        int *p;
        p = ary + 3;
        *p = 5;
        printf("%d\n", ary[3]);
    }