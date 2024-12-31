#include <stdio.h>
// https://www.hackerrank.com/contests/b6-final-c/challenges/jadu-matrix/problem
int main()
{
  int N,M;
  scanf("%d %d",&N,&M);
  int matrix[N][M];
  for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
          scanf("%d",&matrix[i][j]);
      }
  }
 
  int flag = 1;
  if(N!=M){
      flag=0;
  }
  for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
        //   printf("%d ",matrix[i][j]);
        if(i==j){
            // printf("%d ",matrix[i][j]);
            if(matrix[i][j]!=matrix[0][0]){
                flag=0;
                break;
            }else{
                if(matrix[i][j]==0){
                    flag=0;
                    break;
                }
            }
        }
        else if (i+j==N-1){
            // printf("%d ",matrix[i][j]);
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
        else {
            if(matrix[i][j]!=0){
                flag=0;
                break;
            }
        }


           if(flag==0){
             break;
         }
      }

           if(flag==0){
             break;
         }
    //   printf("\n");
  }

      
    if (flag==1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
}