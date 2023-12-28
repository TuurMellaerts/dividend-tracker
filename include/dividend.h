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
