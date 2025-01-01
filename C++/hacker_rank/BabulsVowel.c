// Online C compiler to run C program online
#include <stdio.h>

// https://www.hackerrank.com/contests/c-week-1-a-assignment-2/challenges/vowels-27

int main() {
    // Write C code here
    char Ch;
    scanf("%c",&Ch);
    if(Ch == 'a' || Ch == 'e' || Ch == 'i' || Ch == 'o' || Ch == 'u' ||Ch == 'A' || Ch == 'E' || Ch == 'I' || Ch == 'O' || Ch == 'U'){
        printf("Vowel");
    }
    else{
             printf("Consonant");
    }
    

    return 0;
}