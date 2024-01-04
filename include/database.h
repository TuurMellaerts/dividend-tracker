/**
 * @file database.h
 * @brief The database interface header.
 * @author Tuur Mellaerts
 * @version v0.1
 * @date 03/01/2023
*/
#pragma once

// General includes
#include <stdbool.h>
#include <stdio.h>

// Specific includes
#include "dividend.h"

/**
 * @brief Initialise the database interface.
*/
void database_Init(void);

/**
 * @brief Function to write a header to the database.
*/
void database_WriteDatabaseHeader(void);

/**
 * @brief Function to enter a dividend transaction into the database file.
 * @return true if entry succeeded, false otherwise
*/
bool database_DividendEntry(dividendEntry_t);
