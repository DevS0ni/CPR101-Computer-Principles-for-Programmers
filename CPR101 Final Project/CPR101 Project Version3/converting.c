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

    // V2
    printf("*** Start of Converting Strings to double Demo ***\n");
    char doubleString[BUFFER_SIZE];  // Variables declaration.
    double doubleNumber;
    do{
    printf("Type the double numeric string (q - to quit):\n");
    fgets(doubleString, BUFFER_SIZE, stdin);  // Takes the double String from the user.
    doubleString[strlen(doubleString) - 1] = '\0';
    if((strcmp (doubleString, "q") != 0)){
        doubleNumber = atof (doubleString) ;  // Conversion function 'atof'.
        printf ("Converted number is %f\n", doubleNumber);  // Shows converted number.
    }
    }while (strcmp (doubleString,"q") != 0) ;  // Logic to exit the loop, when 'q' == 0.
printf("*** End of Converting Strings to double Demo ***\n\n"):
    
    // V3
    printf("*** Start of Converting Strings to long Demo ***\n");
    char longString[BUFFER_SIZE];  // Variable declarations.
    long longNumber:
    do{
    printf ("Type the long numeric string (g - to quit):\n");
    fgets (longString, BUFFER_SIZE, stdin);  // Takes the long numeric string from the user.
    longString[strlen(longString) - 1] = '\0'; // Null character in the long numeric string
        if ((strcmp (longString, "q")!= 0)){ // If-else for the logic of the conversion.
            longNumber = atol (longString);
    printf("Converted number is %ld\n", longNumber);  // Prompting the converted number.
    }
    }while (strcmp (longString, "q")!= 0);  // If longString == q, then exit the loop.
    printf("*** End of Converting strings to long Demo ***\n\n") ;
}

int main(void){  // Calling the start-up function.
    converting();  // Calling the converting function.
}
