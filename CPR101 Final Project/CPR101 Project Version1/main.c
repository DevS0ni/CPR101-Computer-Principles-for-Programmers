#include "fundamentals.h"  // Including fundamentals header files.
#include "manipulating.h"  // Including manipulating header files.
#include "converting.h"    // Including converting header files.
#include "tokenizing.h"    // Including tokenizing header files.

#define _CRT_SECURE_NO_WARNINGS
int main(void) // Invoking main function
{
    // Character declaration
    char buff[10];
    do{
        printf("1 - Fundamentals\n");  // Here, are the choices given to the user, for executing a particular function.
        printf("2 - Manipulation\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Exit\n");
        printf ("Which module to run?\n");
        fgets (buff, 10, stdin);  // Takes the input from the user, as 1,2,3...
        switch(buff[0]){  // Switch execution, it matches with the choice given by the user with the conditions being written below!
	    case '1' : fundamentals();  // Invoking the function fundamentals.
            break;
        case '2': manipulating();  // Invoking the function manipulating.
            break;
        case '3' : converting();    // Invoking the function converting.
            break;
        case '4' : tokenizing();    // Invoking the function tokenizing.
            break;
        }
    }while(buff[0]!='0'); // program loop will stop if buff[0] == 0.
    return 0;  // Return control to the OS !
}
