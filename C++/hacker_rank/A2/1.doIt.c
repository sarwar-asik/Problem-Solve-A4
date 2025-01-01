#include <stdio.h>
#include<string.h>
// https://www.hackerrank.com/contests/mid-term-1729629486/challenges

int main() {


long long int N;
long long int K;
scanf("%lld",&N);
scanf("%lld",&K);

for (int i=1;i<=N;i++){
    for (long long int j=1;j<=K;j++){
        printf("%lld ",j);
    }
    printf("\n");
}

    return 0;
}