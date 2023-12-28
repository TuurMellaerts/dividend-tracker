/**
 * @file
 * @brief Database interface.
*/

// General includes
#include <stdio.h>
#include <stdbool.h>

/**
 * @brief Function to create the database file.
 * @return true if creation succeeded, false otherwise
*/
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
