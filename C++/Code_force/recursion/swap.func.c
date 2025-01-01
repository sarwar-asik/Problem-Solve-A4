#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
int sumFunc(int x,int y){
  int temp =y;
  y= x;
  x= temp;
  printf("%d %d\n",x,y);
}

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
   sumFunc(x,y);
  k
    return 0;
}