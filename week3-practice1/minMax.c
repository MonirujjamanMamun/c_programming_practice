#include <stdio.h>
#include <limits.h>

int main (){

    int n;
    scanf("%d", &n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &myArr[i]);
     }
    
    int min=INT_MAX, max=INT_MIN;
    int minIndex, maxIndex;
    for(int i=0; i<n; i++){
        if(myArr[i] < min){
            min=myArr[i];
            minIndex=i;
        }
        if(myArr[i] > max){
            max=myArr[i];
            maxIndex= i;
        }
    }
    // for(int i=0; i<n; i++){
        int tem= myArr[minIndex];
        myArr[minIndex]= myArr[maxIndex];
        myArr[maxIndex]=tem;
    // }

    for(int i=0; i<n; i++){
        printf("%d ", myArr[i]);
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     int a[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     // Find the minimum and maximum values
//     int min = a[0];
//     int max = a[0];
//     int min_index = 0;
//     int max_index = 0;
//     for (int i = 1; i < n; i++) {
//         if (a[i] < min) {
//             min = a[i];
//             min_index = i;
//         }
//         if (a[i] > max) {
//             max = a[i];
//             max_index = i;
//         }
//     }

//     // Swap the minimum and maximum values
//     int temp = a[min_index];
//     a[min_index] = a[max_index];
//     a[max_index] = temp;

//     // Print the modified array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

//     return 0;
// }
