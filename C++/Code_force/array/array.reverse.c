// Online C compiler to run C program online
#include <stdio.h>
// Type the length 5;
// 1 2 3 4 5;
// 5 4 3 2 1; 
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
int main() {
 
   long long  int length;
    scanf("%lld",&length);
    long long int arr[length];
    for(int i =0; i<length;i++){
        scanf("%lld",&arr[i]);
    }
    for (int i =length-1;i>=0;i--){
        printf("%lld ",arr[i]);
    }
    return 0;
}