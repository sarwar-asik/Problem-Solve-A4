#include <stdio.h>
//!input 2
// 3
// 4
//!output 1 2 3 2 1 
// 1 2 3 4 3 2 1 

// https://www.hackerrank.com/contests/b6-final-c/challenges/visiting-monument
void writeFunc(int current,int n){
    
    if(current>n){
        // printf("current= %d n= %d\n",current,n);
        if(n==1){
            return;
        }
        printf("%d ",n-1);
        writeFunc(current,n-1);
        return;
    }
    printf("%d ",current);
    writeFunc(current+1,n);
   
}
int main()
{
    int T;
    scanf("%d",&T);
    int arr[T];
    for(int i=1;i<=T;i++){
        int N;
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=T;i++){
          writeFunc(1,arr[i]);
        printf("\n");
    }
  
    return 0;
}