// Online C compiler to run C program online
#include <stdio.h>
// https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/zeros-and-ones-02
int main() {
 
 long long int N;
 scanf("%lld",&N);

 int arr[N];
 for(long long int i=1; i<=N;i++){
     scanf("%d",&arr[i]);
 }

 long long int X;
 scanf("%lld",&X);
 if(arr[X]==0){
      arr[X] = 1;
 }
 else{
      arr[X] = 0;
 }

 for(long long int i=1; i<=N;i++){
    printf("%d ",arr[i]);
 }
 
    return 0;
}