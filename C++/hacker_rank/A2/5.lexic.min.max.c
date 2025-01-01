#include <stdio.h>
#include <string.h>

int main() {
    
    char string1[100], string2[100], string3[100];
    
    
    scanf("%s %s %s", string1, string2, string3);
    
    char maximumValue[100], minumumValue[100];
    strcpy(maximumValue, string1);
    strcpy(minumumValue, string1);

    
    if (strcmp(string2, maximumValue) > 0) {
        strcpy(maximumValue, string2);
    }



    
    if (strcmp(string3, maximumValue) > 0) {
        strcpy(maximumValue, string3);
    }

    
    if (strcmp(string2, minumumValue) < 0) {
        strcpy(minumumValue, string2);
    }
    if (strcmp(string3, minumumValue) < 0) {
        strcpy(minumumValue, string3);
    }

    
    printf("%s\n", minumumValue);
    printf("%s\n", maximumValue);

    return 0;
}
