// Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 1000

void findLargestAndSmallestWords(char *str, char *L, char *S) 
{
    int maxLen = 0, minLen = MAX_STRING_LENGTH;
    char *W;
    
    W = strtok(str, " ,n"); 
    while (W != NULL) 
    {
        int len = strlen(W);
        if (len > maxLen) 
        {
            maxLen = len;
            strcpy(L, W);
        }
        if (len < minLen)
         {
            minLen = len;
            strcpy(S, W);
        }
        W = strtok(NULL, " ,n");
    }
}

int main() 
{
    char str[MAX_STRING_LENGTH];
    char L[MAX_STRING_LENGTH];
    char S[MAX_STRING_LENGTH];

    printf("\n\n\t Enter any string: ");
    fgets(str, MAX_STRING_LENGTH, stdin);

    size_t length = strlen(str);
    if (str[length - 1] == '\n') 
	{
        str[length - 1] = '\0';
    }
    L[0] = '\0';
    S[0] = '\0';

    findLargestAndSmallestWords(str, L, S);

    printf("Largest word: %s\n", L);
    printf("Smallest word: %s\n", S);

    return 0;

}
