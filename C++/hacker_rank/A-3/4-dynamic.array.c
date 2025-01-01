#include<stdio.h>
#include<stdlib.h>

int main(){
   int N;
   scanf("%d",&N);
//    int arr[N];

 int * array=(int *)malloc(N* sizeof(int));
   for(int i=0;i<N;i++){
       scanf("%d",&array[i]);
   }

int *temp=array;
array = (int*)realloc(array,N*sizeof(int));
if(array==NULL){
    array = temp;
}


for(int i=0;i<N;i++){
    printf("%d ",array[i]);
}

free(array);

return 0;
}