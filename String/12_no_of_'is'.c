//12. Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_STRING_LENGTH 1000

int countWordOccurrences(char *str, const char *w) 
{
    int count = 0;
    char *pos = str;

    int wLen = strlen(w);
    while ((pos = strstr(pos,w)) != NULL) 
    {

        if ((pos == str || !isalpha(*(pos - 1))) &&  (!isalpha(*(pos + wLen)))) 
        {
            count++;
        }
        pos += wLen;
    }

    return count;
}

int main() {
    char str[MAX_STRING_LENGTH];
    const char *w = "is";

    printf("\n\n\t Enter Your String: ");
    fgets(str, MAX_STRING_LENGTH, stdin);

    size_t length = strlen(str);
    if (str[length-1]=='\n') 
    {
        str[length-1]='\0';
    }

    int o = countWordOccurrences(str, w);

    printf("\n\n\t The Word '%s' appears %d times in the given string.",w,o);

    return 0;
}

