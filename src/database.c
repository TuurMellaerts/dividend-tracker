/**
 * @file
 * @brief Database interface.
*/

// General includes
#include <stdio.h>

// Specific includes
#include "../include/database.h"
#include "../include/dividend.h"

bool database_createDatabase()
{
    FILE *fptr;

    // Create a file
    fptr = fopen("build/dividend-database.db", "w");

    // Close the file
    fclose(fptr);

    return true;
}

bool database_dividendEntry(dividendEntry enter)
{
    FILE *fptr;

    // Open database file
    fptr = fopen("build/dividend-database.db", "w");

    // Write to the database file
    fprintf(fptr, "This is a first try to write to the database\n");

    fprintf(fptr, "TS, ISIN, SN, CUR, AM, D, M, Y\n");
    fprintf(fptr, "%s, %s, %s, %s, %f, %d, %d, %d\n", enter.dividendTickerSymbol, enter.dividendISIN, enter.dividendStockName, enter.dividendCurrency, enter.dividendAmount, enter.day, enter.month, enter.year);

    // Close the file
    fclose(fptr);

    return false;
}
