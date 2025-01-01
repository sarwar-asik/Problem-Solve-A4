#include<stdio.h>
// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/unit-matrix
int main() {
   long long int n;
    scanf("%lld",&n);
    int matrix[n][n];
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int flag =1;

for (int i=0;i<n;i++){
   for(int j=0;j<n;j++){
     if(i==j ){
        if(matrix[i][j]!=matrix[0][0]){
            
            flag=0;
            break;
          }
          else{
         if(matrix[i][j]==0){
             flag=0;
             break;
         }
          }
            }
     else{
        
         if(matrix[i][j]!=0){
             flag=0;
             break;
         }
     }
         if(flag==0){
             break;
         }
        }
    }
    
    if (flag==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    

    return 0;
}