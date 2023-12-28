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

bool database_dividendEntry()
{
    FILE *fptr;

    // Open database file
    fptr = fopen("build/dividend-database.db", "w");

    // Write to the database file
    fprintf(fptr, "This is a first try to write to the database");

    // Close the file
    fclose(fptr);

    return false;
}
