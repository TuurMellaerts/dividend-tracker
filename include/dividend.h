/**
 * @file dividend.h
 * @brief The dividend interface header.
 * @author Tuur Mellaerts
 * @version v0.1
 * @date 03/01/2023
*/
#pragma once

typedef struct dividendEntry_s
{
    float dividendAmount;
    char* dividendTickerSymbol;
    char* dividendISIN;
    char* dividendStockName;
    char* dividendCurrency;
    unsigned int day;
    unsigned int month;
    unsigned int year;
} dividendEntry_t;

/**
 * @brief Function to make a dividend transaction entry.
 * @return a dividendEntry struct
*/
dividendEntry_t dividend_MakeEntry(void);
