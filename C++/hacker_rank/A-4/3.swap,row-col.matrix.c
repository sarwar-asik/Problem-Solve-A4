
#include <stdio.h>
// https://www.hackerrank.com/contests/b6-final-c/challenges/swap-in-matrix/submissions/code/1385171018


// 3 4
// 1 2 3 4
// 5 6 7 8
// 6 5 4 2

// 2 5 4 6 
// 8 6 7 5 
// 4 2 3 1 
int main()
{
    // printf("Hello, World!\n");
  int N,M;
  scanf("%d %d",&N,&M);
  int matrix[N][M];
  for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
          scanf("%d",&matrix[i][j]);
      }
  }
  
//   printf("Before Swapping\n");

//   for(int i=0;i<N;i++){
//       for(int j=0;j<M;j++){
//           printf("%d ",matrix[i][j]);
//       }
//       printf("\n");
//   }

// printf("Swapping\n");
 
 //! Swapping the first and last column
   for(int i=0;i<N;i++){
   int temCol= matrix[i][0];   ///! first col
   matrix[i][0]= matrix[i][M-1];
   matrix[i][M-1]= temCol;   //! last column    
  }
  
//   ! Swapping the first and last row
// printf("N= %d\n",N);
for(int i=0;i<M;i++){
   int temRow= matrix[0][i];   ///! first row
   matrix[0][i]= matrix[N-1][i];
   matrix[N-1][i]= temRow;   //! last row
// printf("%d",matrix[0][i]);   ///first row
// printf("%d",matrix[N-1][i]);   /// last row
}


//   printf("\nAfter Swapping\n");
  for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
          printf("%d ",matrix[i][j]);
      }
      printf("\n");
  }
    return 0;
}