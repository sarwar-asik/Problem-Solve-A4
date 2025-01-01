// Online C compiler to run C program online
#include <stdio.h>
// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
int f[10000005];
int main() {
    // Write C code here
    // printf("Try programiz.pro");
    int N, M;
   
    scanf("%d %d",&N, &M);

    int A[N+5];
     for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
        f[A[i]]+=1;

    }
    for(int i = 1; i <= M; i++) {
        printf("%d\n",f[i]);
    }

//    printf("M=%d\n",M);


    
    // for(long long i=1;i<=M;i++){

    //     // printf("%lld\n",i);
    //     long long count=0;
    //  for(long long j=1;j<=N;j++){
    //     printf("\ni=%lld  j=%lld A[j]=%lld\n",i,j,A[j]);
    //     if(A[j]==i){
    //         count++;
    //     }
    //   }
    // //   printf("%lld \n",count);
    // //   printf("\n %lld for %lld and M=\n",count,i,M);
    // }
    
    

    return 0;
}