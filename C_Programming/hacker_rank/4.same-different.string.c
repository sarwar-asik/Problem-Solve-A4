#include <stdio.h>
#include<string.h>
int main (){
    
//  take 3 input of any large length
    char a[100],b[100],c[100];
        scanf("%s",a);
        scanf("%s",b);
        scanf("%s",c);
        int count = 0;

         for(int i=0;i<strlen(a);i++){
        // printf("a is %c\n",a[i]);
            if(a[i]==b[i] && a[i]==c[i]){
                count = count+0;
            }
            else if(a[i]==b[i] || a[i]==c[i] || b[i]==c[i]){
                count = count+1;
            }else{
              count = count+2;
            //   print the a

            printf("%c\n",a[i]);

            }
            }
        
        printf("%d\n",count);


return 0;
}