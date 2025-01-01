// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K

int main() {
    // Write C code here
   
     long int N;
     scanf("%ld",&N);
    //  printf("%ld\n",N);
     long int first = N/10;
    //  printf("%ld\n",first);
     long int second = N%10;
    //  printf("first %ld second %ld",first,second);
    
     if(first ==0 || second==0){
             printf("No\n");
      }
      
    else if((first%second==0)|| (second%first==0)){
       
         printf("Yes\n");
     }else{
         printf("No\n");
     }
     
     

    return 0;
}