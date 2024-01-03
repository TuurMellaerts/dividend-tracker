/**
 * @file dividend.c
 * @brief Dividend transaction interface.
 * @author Tuur Mellaerts
 * @version v0.1
 * @date 03/01/2023
*/

// Specific includes
#include "../include/dividend.h"

dividendEntry_t dividend_MakeEntry(void)
{
    dividendEntry_t entry = {
        .dividendAmount = 0.12,
        .dividendTickerSymbol = "TSLA",
        .dividendISIN = "US88160R1014",
        .dividendStockName = "Tesla Inc.",
        .dividendCurrency = "EUR",
        .day = 3,
        .month = 1,
        .year = 2023
    };

    return entry;
}
