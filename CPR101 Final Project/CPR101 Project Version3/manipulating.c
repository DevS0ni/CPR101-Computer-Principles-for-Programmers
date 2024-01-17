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

    // V2
    printf("*** Start of Comparing Strings Demo ***\n") ;
    char compare1[BUFFER_SIZE];  // Variable Declarations
    char compare2[BUFFER_SIZE];
    int result;
    do
    {
    printf ("Type the 1st string to compare (q - to quit) :\n") ;
    fgets (comparel, BUFFER_SIZE, stdin);  // Takes the input from the user.
    compare1[strlen (compare1)- 1]= '\0';  // Compare the strings entered.
    if(strcmp (compare1,"q")!= 0){      // Compare the string.
    printf ("Type the 2nd string to compare:\n");
    fgets (compare2, BUFFER_SIZE, stdin);  // Inputing the string entered by the user.
    compare2 [strlen (compare2)- 1] = '\0';  // Comparing two strings.
    result = strcmp (compare1, compare2) ;  // Comparing two strings and store it into result.
    if (result<0)  // block executes when the result is less than zero.
        printf("\'%s\' string is less than \'%s\'\n", compare1, compare2) ;
    else if (result==0)  // block executes when the result is equal to zero.
        printf("\'%s\" string is equal to \'%s\'\n", compare1, compare2) ;
    else
        printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2) ;
}
}while (strcmp (compare1,"q")!= 0);  
printf("*** End of Comparing Strings Demo ***\n\n");
    
    // V3
    printf("*** Start of Searching Strings Demo ***\n");
    char haystack[BUFFER_SIZEl;  // Variables declaration
    char needle[BUFFER_SIZE];
    char* occurrence = NULL;
    do{
        printf("Type the string (q - to quit):\n");
        fgets(haystack, BUFFER_SIZE,stdin);  // Inputing the user input (string).
        haystack[strlen(haystack) - 1] = '\0';  // Null character in the haystack.
        if(strcmp (haystack,"q") != 0){
                printf("Type the substring:\n");
                fgets (needle, BUFFER_SIZE, stdin);
                needle[strlen(needle) - 1] = '\0';
                occurrence = strstr(haystack, needle);
                if(occurrence)
                  printf("\'%s\' found at %d position\n",needle, (int) (occurrence - haystack));
                else
                  printf ("Not found\n");
                  }
    }while(strcmp (haystack,"q")!= 0);  // To exit the loop..
    printf ("*** End of searching Strings Demo ***\n\n") ;
}

int main(void){  // Invoking the main function.
    manipulating();  // Invoking the manipulating function!
}
