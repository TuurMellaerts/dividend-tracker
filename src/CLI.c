/**
 * @file CLI.c
 * @brief Interface used to print statements to the end-user.
 * @author Tuur Mellaerts
 * @version v0.1
 * @date 03/01/2023
*/

// Specific includes
#include "../include/CLI.h"

bool CLI_PrintStartApplicationMessage(void)
{
    printf("\n==============================\n");
    printf("-----STARTING APPLICATION-----\n");
    printf("==============================\n\n");

    return true;
}

bool CLI_PrintCloseApplicationMessage(void)
{
    printf("\n==============================\n");
    printf("-----CLOSING APPLICATION-----\n");
    printf("==============================\n\n");

    return true;
}

bool CLI_PrintDatabaseCreatedMessage(void)
{
    printf("Creation of database succeeded!\n");

    return true;
}
