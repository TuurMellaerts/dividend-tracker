/**
 * @file CLI.h
 * @brief Interface used to print statements to the end-user.
 * @author Tuur Mellaerts
 * @version v0.1
 * @date 03/01/2023
*/

// General includes
#include <stdbool.h>
#include <stdio.h>

/**
 * @brief Print the starting application message to the end-user.
 * @return true is succeeded, false otherwise
*/
bool CLI_PrintStartApplicationMessage(void);

/**
 * @brief Print the closing application message to the end-user.
 * @return true is succeeded, false otherwise
*/
bool CLI_PrintCloseApplicationMessage(void);

/**
 * @brief Print that the database was created succesfully.
 * @return true is succeeded, false otherwise
*/
bool CLI_PrintDatabaseCreatedMessage(void);
