
#include<stdio.h>
int main(){
    printf("Started the programme \n");
    
   

    
    for (int main=1; main<=10;main++){

         // ! for 
    // 1 
    // 12
    // 123
    // 1234
    // for(int sub=1;sub<=main;sub++){
    //         printf("%d ",sub);
    // }
    //  printf("\n");
    // ! for
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1
        for(int sub=main;sub>=1;sub--){
            printf("%d ",sub);
        }
        printf("\n");
    }
    return 0;
}