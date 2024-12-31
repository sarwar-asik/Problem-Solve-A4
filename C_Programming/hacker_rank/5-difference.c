#include<stdio.h>
// Print a single integer representing the absolute difference between A and B.
// Note: Use pointers to solve this Problem.
int main(){

int A,B;

scanf("%d %d ",&A,&B);

int *num1 = &A, *num2 = &B;
// printf("num1=%d, num2=%d\n",num1,num2);
int tempValue= *num1;

if(tempValue<*num2){
    *num1 = *num2;
    *num2 = tempValue;
}
printf("%d",*num1-*num2);

return 0;
}