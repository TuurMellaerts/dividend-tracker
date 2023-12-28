/**
 * @file
 * @brief Database interface header.
*/
#pragma once

// General includes
#include <stdbool.h>

// Specific includes
#include "dividend.h"

/**
 * @brief Function to create the database file.
 * @return true if creation succeeded, false otherwise
*/
bool database_createDatabase();

/**
 * @brief Function to enter a dividend transaction into the database file.
 * @return true if entry succeeded, false otherwise
*/
bool database_dividendEntry(dividendEntry);
