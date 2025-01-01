# include<stdio.h>

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D
void digitFunc(int n){
 
 if(n==0){

     return;
 }
    int digit = n%10;
    digitFunc(n/10);
    printf("%d ",digit);

}


int main(){

    int length;

    scanf("%d",&length);

  

  for (int i = 0; i < length; i++) {
    int input;
    scanf("%d",&input);
        digitFunc(input);
        if(input==0){
            printf("0");
        }
        printf("\n");
  }


    return 0;
}