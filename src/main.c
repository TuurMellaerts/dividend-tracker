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
    printf("Creation of database!\n");

    database_createDatabase();

    return 0;
}
