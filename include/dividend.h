/**
 * @file
 * @brief Dividend interface header.
*/
#pragma once

// General includes
#include <cstdint>

typedef struct dividendEntry
{
    float dividendAmount;
    char *dividendTickerSymbol;
    char *dividendISIN;
    char *dividendStockName;
    char *dividendCurrency;
    uint16_t day;
    uint16_t month;
    uint16_t year;
} dividendEntry;
