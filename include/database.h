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
 * @brief Function to create the database file.
 * @return true if creation succeeded, false otherwise
*/
bool database_CreateDatabase();

/**
 * @brief Function to enter a dividend transaction into the database file.
 * @return true if entry succeeded, false otherwise
*/
bool database_DividendEntry(dividendEntry_t);
