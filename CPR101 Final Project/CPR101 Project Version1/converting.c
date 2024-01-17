// CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS  // It does not permit the compiler, to actually suggest the user about the secure versions of the library functions. For an instance, scanf to scanf_s
#define BUFFER_SIZE 80  // Declaring the buffer size value to 80 for the character.
#include "converting.h"  // Including the header file - "converting.h".
// V1
void converting (void){  // function converting with, void datatype.
    printf("*** Start of Converting Strings to int Demo ***\n") ; // Header Output for the following program.
    char intString[BUFFER_SIZE];  // Declaration of the String variable with the size equal to BUFFER_SIZE.
    int intNumber;  // Declaration of the integer number variable.
    do{  // Executing the loop, for the conversion of Strings to Integer.
    printf("Type an int numeric string (q - to quit) : \n") ;  // Prompts the user to enter an integer numeric String or 'q' to quit the program.
    fgets(intString, BUFFER_SIZE, stdin);  // Taking the input from the user, it reads a number of limited characters.
    intString[strlen(intString) - 1] = '\0';  // 
        if(strcmp(intString, "q") != 0){  // Here, if intString is not equal to 'q' then the block of the code within is executed.
            intNumber = atoi(intString); // Converting a String to a Number using a library function.
            printf("Converted number is %d\n", intNumber); // Prompting the converted number.
            }  
    }while(strcmp(intString, "q") != 0);    // Checking the condition, if intString == 'q' then it get us out of the loop. LOOP TERMINATION.
    printf("*** End of Converting Strings to int Demo ***\n\n");
}

int main(void){  // Calling the start-up function.
    converting();  // Calling the converting function.
}