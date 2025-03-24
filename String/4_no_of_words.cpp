//Write a program in C to count the total number of words in a string
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int words = 0;
    int inWord = 0; 

    printf("\n\n\t Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if current character is part of a word
        if (isalpha(str[i]) || isdigit(str[i])) {
            // If not already in a word, count it as a new word
            if (!inWord) {
                words++;
                inWord = 1; 
            }
        } else {
            // If current character is not part of a word
            inWord = 0; 
        }
    }

    printf("\n\n\t Total number of words: %d", words);

    return 0;
}

