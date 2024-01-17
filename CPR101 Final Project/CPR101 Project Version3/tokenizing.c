// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"
// V1
void tokenizing(void){  // creating tokenizing function.
    printf("* Start of Tokenizing Words Demo *\n");
    char words[BUFFER_SIZE];  // char array initialization.
    char* nextWord = NULL;  // decalring character variable and decalring NULL value to it.
    int wordsCounter;  // integer variable initialization (Word Counter).
    do  // Checking the condition with the loop.
    {
        printf("Type a few words separated by space (q - to quit):\n") ;
        fgets(words, BUFFER_SIZE, stdin);  // reads the entire line, being written before and store it into the words!
        words[strlen(words) - 1] = '\0';
        if(strcmp(words, "q") )//Checking the condition with the if-statement.
            nextWord = strtok(words, " ");  // getting a token from string to find delimiters.
            wordsCounter = 1;  // Assigning the value to the variable.
            while(nextWord){  // checking word condition using while loop.
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);  // print the given statement.
                nextWord = strtok(NULL, " ");  // Returns a pointer to the next token found in str and Returns NULL when no more tokens are found.
            }
        }
    while(strcmp(words, "q") != 0) ;
    printf("* End of Tokenizing Words Demo *\n\n") ;

    // V2
    printf("* Start of Tokenizing Phrases Demo *\n") ;
    char phrases [BUFFER_SIZE];  // Variable Declarations
    char* nextPhrase = NULL;    // Variable Declarations
    int phrasesCounter; // Variable Declarations
    do{
        printf ("Type a few phrases separated by comma (q - to quit):\n");
        fgets (phrases, BUFFER_SIZE,stdin);  // takes the input from the user.
        phrases[strlen(phrases) - 1] = '\0';
        if ((strcmp (phrases,"q") != 0))  // if the condition is not equal to zero then the block executes
            nextPhrase = strtok (phrases,",");
        phrasesCounter = 1;  // Variable counts the phrase each time the loop is initiated
            while (nextPhrase){  // While loop for the next phrase
                printf ("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok (NULL,",");
            }
        }
while(strcmp (phrases,"q"));
printf("* End of Tokenizing Phrases Demo *\n\n");
    
// V3

    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[BUFFER_SIZE];  // Variable declarations.
    char* nextSentence = NULL;
    int sentencesCounter;
    do{
        printf("Type a few sentences separated by dot (q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);  // Taking a sentence input from the user.
        sentences[strlen(sentences) - 1] = '\0';  // Defining null character in the input (at the end of the sentence).
        if((strcmp(sentences, "q") != 0)){   // string comparision (it compares the two strings mentioned).
            nextSentence = strtok(sentences, ".");
            sentencesCounter = 1;   // sentences Counter (it counts the number of characters in a String)
            while(nextSentence){   //  While loop for the nextSentence variable.
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ".");
            }
        }
    }while(strcmp(sentences, "q") !=0);  // Logic to exit the do____while loop!
    printf("*** End of Tokenizing Sentences Demo ***\n\n") ;
}

int main(void){  // calling the main function.
    tokenizing();  // calling tokenizing function.
}
