// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// V1
void manipulating(void){
    /*
    this code concatenates 2 user defined/ input strings.
    and combines them into one string.
    */
    printf("*** Start of Concatenating Strings Demo ***\n");
    char string1 [BUFFER_SIZE];
    char string2 [BUFFER_SIZE];
    do{ // beginning of the do..while loop asking for the user input, at the beginning.
    printf("Type the 1st string (q - to quit):\n");
    fgets(stringl, BUFFER_SIZE, stdin);
    string1[strlen (string1) - 1] = '\0';
    if((strcmp(string1, "q") != 0)){  // If the string is "q" = 0, then stop the program, if not then continue.
        printf("Type the 2nd string:\n");
        fgets(string2, BUFFER_SIZE, stdin);  // Getting the second user string input.
        string2[strlen(string2) - 1] = '\0';
        strcat(string1, string2);  // Concatenate the 2 strings.
        printf("Concatenated string is \'%s\'\n", string1);  // Printing the final result statement.
    }
    }while(strcmp(string1, "q") != 0);
    printf("*** End of Concatenating Strings Demo ***\n\n");
}

int main(void){  // Invoking the main function.
    manipulating();  // Invoking the manipulating function!
}