//10.Write a program in C to extract a substring from a given string
#include<stdio.h>
#include<string.h>

int main() 
{
    char str[100],sub[100];
    int S,L;

    //Getting the string from user
    printf("\n\n\t Enter any String: ");
    gets(str);

    //Getting the start position and length for the substring
    printf("\n\n\t Enter Your Start position: ");
    scanf("%d",&S);
    printf("\n\n\t Enter the Length of the Substring: ");
    scanf("%d",&L);

    //Make sure that start position and length are within bounds
    if (S < 0 || S >= strlen(str) || S + L > strlen(str) || L < 0) {
        printf("\n\n\t Invalid start position or length");
        return 1;
    }

    //Remove the substring
    strncpy(sub, str + S, L);
    sub[L] = '\0'; //null-terminate the substring

    //Print the Removed substring
    printf("\n\n\t Extracted substring: %s\n", sub);

    return 0;
}

