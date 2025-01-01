#include<stdio.h>

//!  https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
int main(){
    printf("Started the programme \n");

    char input;
    scanf("%c",&input);
    printf("%c",input);
    if(input>="0" && input <= "9"){
        printf("This is Digit");
    }
    else{
        printf("This is ALphabet\n");

        if(input >= "A" && input <= "z"){
            printf("Capital");
        }
        else{
            printf("Small");
        }
    }
    return 0;
}