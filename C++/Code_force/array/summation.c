// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A
int main() {
    // Write C code here
  long long  int N;
  
    scanf("%lld",&N);
    long long int arr[N];
    long long int sum=0;
    for (long long int i =0;i<N;i++){
        scanf("%lld",&arr[i]);
        // printf("%lld\n",arr[i]);
        sum =sum+arr[i];
    }
    if(sum<0){
        long long int absolute =sum+(sum*(-2));
        printf("%lld\n",absolute);
    }else{
        printf("%lld\n",sum);
    }
    
    

    return 0;
}