#include<stdio.h>

// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/no-repeatation

int main(){
   int N;
   scanf("%d",&N);
   int arr[N];
   for(int i=0;i<N;i++){
       scanf("%d",&arr[i]);
   }

   int f[100005]={0};
   for(int i=0;i<N;i++){
        f[arr[i]]++;
         printf("%d %d \n",i,f[i]);
    }
//  printf("Now =>\n");
   int count=0;
   for(int i=0;i<N;i++){
    //   printf("%d %d \n",i,f[arr[i]]);
      if(f[arr[i]]==1){
         count++;
      }
   }
   printf("%d\n",count);
    return 0;
}
