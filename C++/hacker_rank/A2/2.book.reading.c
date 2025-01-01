#include <stdio.h>
int main() {
// 10 33
// 1 3 4 6 8 10 12 15 23 36
long long N,T;
scanf("%lld %lld",&N,&T);

long long int arr[N];

long sum=0;
long count=0;
for(long long int i=0;i<N;i++){
    scanf("%lld",&arr[i]);
    sum= sum+arr[i];
    if(sum<=T){
        count++;
    }
    
}
printf("%ld",count);
return 0;
}