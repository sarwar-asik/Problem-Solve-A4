#include <stdio.h>

int main()
{
    // printf("Hello, World!\n");
    long long T;
    scanf("%lld", &T);
    long long matrix[T][4];
    for (long long i = 0; i < T; i++)
    {
    
        for (int j = 0; j < 4; j++){
            scanf("%lld", &matrix[i][j]);
        }
       
    }

    for(long long i=0;i<T;i++){
        long long count=1;
        for(int j=1;j<4;j++){
            // printf("%d ",matrix[i][j]);
            count =count *matrix[i][j];
        }

        if(count <= matrix[i][0] && matrix[i][0]%count==0){
           long long need = matrix[i][0]/count;
           printf("%lld",need);
        }
        else if(matrix[i][0]==0){
            printf("%lld ",matrix[i][0]);
        }
        else{
            printf("%d",-1);
        }
        // printf("%d",count);
        printf("\n");
    }

    return 0;
}