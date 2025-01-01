// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
int main() {
    // Write C code here
    // printf("Try programiz.pro");
    long int A,B;
    char S;
    scanf("%ld",&A);
    
    scanf(" %c",&S);
    scanf("%ld",&B);
    // printf("\n %ld and  %c and  %ld",A,S,B);
    
    if(S="<" && A<B){
       printf("Right");
    }
    else if(S=">"&&A>B){
        printf("Right");
    }
     else if(S="="&&A==B){
        printf("Right");
    }
    else {
        printf("Wrong");
    }
    


    return 0;
}