#include<stdio.h>
// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/count-in-matrix

int main(){

int N,M,X;

scanf("%d %d %d",&N,&M,&X);
int arr[N][M];

for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
        scanf("%d",&arr[i][j]);
    }
}


  int input;
for(int i=0;i<X;i++){
     scanf("%d", &input);
    int count=0;
    for(int j=0;j<N;j++){
        for(int k=0;k<M;k++){
            if(arr[j][k]==input){
                count++;
            }
        }
    }
    printf("%d\n",count);
}



return 0;
}