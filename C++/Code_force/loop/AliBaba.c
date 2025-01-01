// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
// Online C compiler to run C program online
int main() {

 long long int a,b,c,d;
  scanf("%lld",&a);
  scanf("%lld",&b);
  scanf("%lld",&c);
  scanf("%lld",&d);
  if(
      a+(b*c)==d ||
      (a+b)-c==d || 
      (a-b)+c==d ||
      (a*b)+c==d ||
      (a*b)-c==d ||
      a-(b*c)==d
      )
      {
      printf("Yes\n");
  }

  else{
       printf("No\n");
  }

    return 0;
}