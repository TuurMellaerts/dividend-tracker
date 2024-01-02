/**
 * @file
 * @brief Main file for the application "dividend-tracker"
 * @author Tuur Mellaerts
*/

// General includes
#include <stdio.h>

// Specific includes
#include "../include/database.h"
#include "../include/dividend.h"

/**
 * @brief Main function of application. 
 * @return -1 if failure, 0 otherwise
*/
int main(int argc, char *argv[])
{
    printf("\n====================\n");
    printf("STARTING APPLICATION\n");
    printf("====================\n\n");

    // Create database
    database_createDatabase();
    printf("Creation of database succeeded!\n");

    int userInput = 0;
    printf("Enter -1 to exit application. Enter 1 to make dividend entry: ");
    scanf("%d", &userInput);
    if(userInput == -1)
    {
        printf("\n===================\n");
        printf("CLOSING APPLICATION\n");
        printf("===================\n\n");
        return 0;
    }

    printf("\n===================\n");
    printf("CLOSING APPLICATION\n");
    printf("===================\n\n");

    return 0;
}
