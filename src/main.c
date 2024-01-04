/**
 * @file main.c
 * @brief Main file for the application "dividend-tracker"
 * @author Tuur Mellaerts
 * @version v0.1
 * @date 03/01/2023
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
    // Print starting application message
    CLI_PrintStartApplicationMessage();

    // Initialise database
    database_Init();

    // Print message that database is opened succesfully
    CLI_PrintDatabaseCreatedMessage();

    // Write header to database
    database_WriteDatabaseHeader();

    // Define a dividend entry
    dividendEntry_t entry = dividend_MakeEntry();

    // Enter in database
    database_DividendEntry(entry);

    // Print closing application message
    CLI_PrintCloseApplicationMessage();

    return 0;
}
