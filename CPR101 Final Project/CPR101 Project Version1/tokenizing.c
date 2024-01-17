// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"
// V1
void tokenizing(void){  // creating tokenizing function.
    printf("*** Start of Tokenizing Words Demo ***\n");
    char words[BUFFER_SIZE];  // char array initialization.
    char* nextWord = NULL;  // decalring character variable and decalring NULL value to it.
    int wordsCounter;  // integer variable initialization (Word Counter).
    do  // Checking the condition with the loop.
    {
        printf("Type a few words separated by space (q - to quit):\n") ;
        fgets(words, BUFFER_SIZE, stdin);  // reads the entire line, being written before and store it into the words!
        words[strlen(words) - 1] = '\0';  
        if(strcmp(words, "q") ! = 0){  //Checking the condition with the if-statement.
            nextWord = strtok(words, " ");  // getting a token from string to find delimiters.
            wordsCounter = 1;  // Assigning the value to the variable.
            while(nextWord){  // checking word condition using while loop.
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);  // print the given statement.
                nextWord = strtok(NULL, " ");  // Returns a pointer to the next token found in str and Returns NULL when no more tokens are found.
            } 
        }
    }while(strcmp(words, "q") != 0) ;
    printf("*** End of Tokenizing Words Demo ***\n\n") ;
}

int main(void){  // calling the main function.
    tokenizing();  // calling tokenizing function.
}