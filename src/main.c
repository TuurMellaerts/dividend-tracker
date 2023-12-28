/**
 * @file
 * @brief Main file for the application "dividend-tracker"
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

    // Create database test entry
    dividendEntry enter;
    dividend_makeEntry(&enter);

    // Create database
    database_createDatabase();
    printf("Creation of database succeeded!\n");

    // Make database entry
    database_dividendEntry();
    printf("Writing to the database succeeded!\n");

    printf("\n===================\n");
    printf("CLOSING APPLICATION\n");
    printf("===================\n\n");

    return 0;
}
