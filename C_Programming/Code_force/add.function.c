#include <stdio.h>
//  https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A
int sumFunc(int x,int y){
    int sum = x+y;
    return sum;
}
 
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int sum = sumFunc(x,y);
    printf("%d",sum);
    return 0;
}