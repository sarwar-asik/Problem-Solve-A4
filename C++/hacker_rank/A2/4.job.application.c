#include <stdio.h>
int main() {
// 4
// 4
// 0
// 3
// 8
// Sample Output 0

// Mid-level candidate
// Entry-level candidate
// Junior candidate
// Senior candidate
long long N;
scanf("%lld",&N);

long long  arr[N];

for(long long int i=0;i<N;i++){
    scanf("%lld\n",&arr[i]);
    if(arr[i]<1){
        printf("Entry-level candidate\n");
    }
    else if(arr[i]>=1 && arr[i]<=3){
        printf("Junior candidate\n");
        
    }
    else if(arr[i]>=4 && arr[i]<=7){
        printf("Mid-level candidate\n");
    }
    else{
        printf("Senior candidate\n");
    }
}


return 0;
}