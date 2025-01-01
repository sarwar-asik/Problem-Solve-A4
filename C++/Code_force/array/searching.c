// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
// Online C compiler to run C program online

int main() {
    // Write C code here
   
    long long int N;
    scanf("%lld",&N);
    long long int arr[N];
  
    for(long int i=0; i<N;i++){
       
        scanf("%lld",&arr[i]);
    }
    long long int X;
   
    scanf("%lld",&X);
  int isExist = 0;
    for(long long int i=0; i<N;i++){
        if(arr[i]==X && isExist<1){
            printf("%lld\n",i);
            isExist++;
        }
    }
    
    
     
    if(isExist<1){
        printf("%d",-1);
    }

    return 0;
}