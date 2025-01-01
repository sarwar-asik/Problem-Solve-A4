#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

int main() {
    // Write C code here
   
    long long int N;
     scanf("%lld",&N);
     long long int j =N;
    //  printf("%d\n",j);
     for(long long int i =1; i<=N;i++){
         if(i%2==0){
             printf("%lld\n",i);
             j++;
         }
     }
     
      if(j==N){
          printf("%d",-1);
      }
    

    return 0;
}