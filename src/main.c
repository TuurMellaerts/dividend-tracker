/**
 * @file
 * @brief Main file for the application "dividend-tracker"
*/

// General includes
#include <stdio.h>

// Specific includes
#include "../include/database.h"

/**
 * @brief Main function of application. 
 * @return -1 if failure, 0 otherwise
*/
int main(int argc, char *argv[])
{
    printf("\nSTARTING APPLICATION\n");

    database_createDatabase();
    printf("Creation of database succeeded!\n");

    database_dividendEntry();
    printf("Writing to the database succeeded!\n");

    printf("\nCLOSING APPLICATION\n");

    return 0;
}
