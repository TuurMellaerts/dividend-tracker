/**
 * @file
 * @brief Main file for the application "dividend-tracker"
 * @author Tuur Mellaerts
*/

// General includes
#include <stdio.h>

// Specific includes
#include "../include/CLI.h"
#include "../include/database.h"
#include "../include/dividend.h"

/**
 * @brief Main function of application. 
 * @return -1 if failure, 0 otherwise
*/
int main(int argc, char *argv[])
{
    // Print starting applciation message
    CLI_PrintStartApplicationMessage();

    // Create database
    database_createDatabase();
    printf("Creation of database succeeded!\n");

    // Print closing application message
    CLI_PrintCloseApplicationMessage();

    return 0;
}
