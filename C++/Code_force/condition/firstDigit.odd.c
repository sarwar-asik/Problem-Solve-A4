#include<stdio.h>

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
int main(){
    printf("Enter 4 digit number\n");
    int X;
    scanf("%d",&X);
    int firstNumber = X/1000;
    if(firstNumber%2==0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
    
    
  
    return 0;
}