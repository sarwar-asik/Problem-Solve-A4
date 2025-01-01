#include <stdio.h>
int main() {
// 1 <= N <= 10^5
// 1 <= pi, X, Y <= 10^9
long long N,X,Y;
scanf("%lld",&N);
scanf("%lld",&X);
scanf("%lld",&Y);
long long int phone[N];
int count = 0;
for(long long int i=0;i<N;i++){
    scanf("%lld",&phone[i]);

    if(phone[i]>=X && phone[i]<=Y){
        count++;
    }
}

printf("%d",count);

return 0;
}