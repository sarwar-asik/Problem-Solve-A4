#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A
int sumFunc(int x){
 
 if(x==0){
     return 0;
 }
 printf("I love Recursion\n");
 x--;

}
 
int main(){
    int x,;
    scanf("%d",&x);
    sumFunc(x);
   
    return 0;
}