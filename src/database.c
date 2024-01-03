/**
 * @file database.c
 * @brief The database interface.
 * @author Tuur Mellaerts
 * @version v0.1
 * @date 03/01/2023
*/

// Specific includes
#include "../include/database.h"
#include "../include/dividend.h"

bool database_CreateDatabase()
{
    FILE *fptr;

    // Create a file
    fptr = fopen("build/dividend-database.db", "w");

    // Close the file
    fclose(fptr);

    return true;
}

void database_WriteDatabaseHeader(void)
{
    FILE *fptr;

    // Open database file
    fptr = fopen("build/dividend-database.db", "a");

    // Write header to the database file
    fprintf(fptr, "TS, ISIN, SN, CUR, AM, D, M, Y\n");

    // Close the file
    fclose(fptr);
}

bool database_DividendEntry(dividendEntry_t enter)
{
    FILE *fptr;

    // Open database file
    fptr = fopen("build/dividend-database.db", "a");

    // Write to the database file
    fprintf(fptr, "%s, %s, %s, %s, %f, %d, %d, %d\n", enter.dividendTickerSymbol, enter.dividendISIN, enter.dividendStockName, enter.dividendCurrency, enter.dividendAmount, enter.day, enter.month, enter.year);

    // Close the file
    fclose(fptr);

    return false;
}
