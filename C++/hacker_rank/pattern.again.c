
#include <stdio.h>
// https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/n-kites
int main() {
   long int N;
 scanf("%ld",&N);
// 1
// 12
// 123
// 1234
// 12345
//  1234
//   123
//    12
//     1

 for(long  int i=1;i<=N;i++){
    for(long  int j=1;j<=i;j++){
        printf("%ld",j);   
    }
    printf("\n");
 }

// printf("and \n");
for(long  int i=N;i>=1;i--){
    for (long int z = 0; z <= N - i; z++) {
           printf(" ");  
       }
//    printf(" ");
    for(long  int j=1;j<i;j++){
        printf("%ld",j);
    }
    printf("\n");
}


 return 0;
}