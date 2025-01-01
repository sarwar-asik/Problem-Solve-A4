#include <stdio.h>
# include <stdlib.h>
int main(){
  int n;
  scanf("%d",&n);

  int matrix[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&matrix[i][j]);
    }
  }

  int main_diagonal=0; int secondary_diagonal=0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       if(i==j){       //! test primary diagonal
        main_diagonal+=matrix[i][j];
       }
       if(i+j==n-1){  // ! test secondary diagonal
       printf("i=%d j=%d\n",i,j);
        secondary_diagonal+=matrix[i][j];
       }
    }
  }

  int difference = abs(main_diagonal+secondary_diagonal);
  printf("%d",difference);
  
//   printf("%d %d",main_diagonal,secondary_diagonal);
return 0;

}