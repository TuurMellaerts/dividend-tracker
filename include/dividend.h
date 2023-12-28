/**
 * @file
 * @brief Dividend interface header.
*/
#pragma once

typedef struct dividendEntry
{
    float dividendAmount;
    char *dividendTickerSymbol;
    char *dividendISIN;
    char *dividendStockName;
    char *dividendCurrency;
    unsigned int day;
    unsigned int month;
    unsigned int year;
} dividendEntry;

/**
 * @brief Function to make a dividend transaction entry.
 * @param enter The address of a dividendEntry struct.
*/
void dividend_makeEntry(dividendEntry *enter);
