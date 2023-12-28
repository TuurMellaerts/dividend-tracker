/**
 * @file
 * @brief Database interface.
*/

// General includes
#include <stdio.h>

// Specific includes
#include "../include/database.h"

bool database_createDatabase()
{
    FILE *fptr;

    // Create a file
    fptr = fopen("build/dividend-database.db", "w");

    // Close the file
    fclose(fptr);

    return true;
}

/**
 * @brief Function to enter a dividend transaction into the database file.
 * @return true if entry succeeded, false otherwise
*/
bool database_dividendEntry()
{
    return false;
}
