// Given a number N. Print the digits of that number from right to left separated by space.
// Input
// Output
// For each test case print a single line contains the digits of the number separated by space.


#include <stdio.h>
// 543
int main() {
    // Write C code here
    // printf("Try programiz.pro\n");
    
    // printf("Input a number\n");
    int N;
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        int T;
        // printf("type your digits\n");
       scanf("%d",&T);
       if(T==0){
           printf("0");
       }
       while(T>0){
           int Digit= T%10;
           printf("%d ",Digit);
           T=T/10;
       }
       printf("\n");
    }
    

    return 0;
} 