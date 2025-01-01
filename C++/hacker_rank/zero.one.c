// Online C compiler to run C program online
#include <stdio.h>
// https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/zeroes-and-ones-1-1
int main() {
    // Write C code here
 
 long long int N;
 scanf("%lld",&N);
 long long int sumZero=0;
 long long int sumOne=0;
 for(long long int i=0; i<N;i++){
    long long int Ni;
     scanf("%lld",&Ni);
     if(Ni==0){
         sumZero++;
     }
     else{
         sumOne++;
     }
 }
 
 printf("%lld %lld",sumZero,sumOne);
    

    return 0;
}