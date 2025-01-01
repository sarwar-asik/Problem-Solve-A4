
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
int main() {

    long long X,Y;
    scanf("%lld %lld",&X,&Y);
     long long *num1= &X;
     long long *num2= &Y;
    long long sum =*num1+*num2;
  printf("%lld\n",sum);
    return 0;
}