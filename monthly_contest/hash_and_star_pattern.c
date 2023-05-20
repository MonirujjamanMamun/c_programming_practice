#include <stdio.h>
#include <math.h>

int main (){

    int row, col;
    scanf("%d", &row);
    col=row;
    float divid= row/2;
    int ans= ceil(divid);   
    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(row==1){
                printf("#");
            }else{
                
            }
        }
        printf("\n");
    }
    return 0;
}

// Problem Statement

// Write a C program that will take an positive Odd integer N and create this pattern for the corresponding inputs. See the sample input output for understanding the pattern.

// Input Format

// You will be given a positive Odd integer N as input.
// Constraints

// 1 <= N <= 21
// Output Format

// Output the pattern
// Sample Input 0

// 7
// Sample Output 0

// ***#***
// ***#***
// ***#***
// #######
// ***#***
// ***#***
// ***#***
// Sample Input 1

// 1
// Sample Output 1

// #
// Sample Input 2

// 3
// Sample Output 2

// *#*
// ###
// *#*
