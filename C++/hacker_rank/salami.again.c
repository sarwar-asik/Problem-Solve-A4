// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
// https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/salami-again
int main() {
 
 long long int N;
 scanf("%lld",&N);

 int arr[N];
 for(long long int i=1; i<=N;i++){
     scanf("%d",&arr[i]);
 }
long long int max=INT_MIN;
 for(long long int i=1; i<=N;i++){
     if(arr[i]>max){
         max = arr[i];
     }
 }

 for(long long int i=1; i<=N;i++){
     
     long long value =max-arr[i];
         printf("%lld ",value);
     
 }

    return 0;
}