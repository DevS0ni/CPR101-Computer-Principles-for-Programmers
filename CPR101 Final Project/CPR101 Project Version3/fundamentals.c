// FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#include "fundamentals.h"

void fundamentals (void){

// V1
    printf("*** Start of Indexing Strings Demo ***\n");

    //variable initializations 
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    //do while loop made for getting a string input and to search for a character at the desired position
    do{
        printf("Type not empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);  // Getting the string input from the user; lenght below 80 letters.
        buffer1[strlen(buffer1) - 1] = '\0'; 
        if(strcmp(buffer1, "q") != 0){  // checking the condition for string at buffer1 is "q".
        printf("Type the character position within the string:\n");
        fgets(numInput, NUM_INPUT_SIZE, stdin); //getting string input from the user; length below 10 letters.
        numInput[strlen(numInput) - 1] = '\0';
        position = atoi (numInput) ;  // converting string input to integer.
        if (position >= strlen (buffer1)) {  // Checking the length of the letters.
            position = strlen(buffer1) - 1;
            printf ("Too big... Position reduced to max. availbale\n");
        }
    printf("The character found at %d position is \'c\'\n",
                    (int)position, buffer1[position]);
    }
    }while (strcmp(buffer1, "q") != 0);  // if the condition for string at buffer1 is 0, then stop the program.
    printf("*** End of Indexing Strings Demo ***\n\n");

    // V2
    printf ("*** Start of Measuring Strings Demo ***\n") ;
    char buffer2[BUFFER_SIZE];  // Variable declarations.
    do{
    printf("Type a string (q - to quit) : \n");
    fgets (buffer2, BUFFER_SIZE, stdin);  // Inputing the string entered.
    buffer2[strlen(buffer2) - 1] = '\0';
    if (strcmp (buffer2,"q") != 0)  
        printf ("The length of \'%s\' is %d characters\n"buffer2, (int)strlen (buffer2));
    }while(strcmp (buffer2,"q")!= 0);
    printf("*** End of Measuring Strings Demo ***\n\n");
    
    // V3
    printf("*** Start of Copying strings Demo ***\n");
    char destination[BUFFER_SIZE]:
    char source[BUFFER_SIZEl:
    do
    {
     destination[0] = '\0';  //Destination initialisation
     printf("Destination string is reset to empty\n");  //
     printf(("Type the source string (q - to quit):\n");
     fgets(source, BUFFER_SIZE, stdin);  // Takes the input from the user.
     source[strlen(source) - 1] = '\0';  // Source variable null character position.
     if (strcmp (source, "q") != 0) {  // If logic, to swap the strings!
        strcpy (destination, source);
        printf ("New destination string is \'%s\'\n", destination);
    }
            }while (strcmp(source, "q") != 0);  //Logic to exit the loop - if source == q, then exit the loop.
            printf ("*** End of Copying Strings Demo ***\n\n");
}

int main (){ // Starting point of the program.
    fundamentals();  // Invoking fundamentals function.
    return 0; //returning control to the OS.
}  // END of the program...
