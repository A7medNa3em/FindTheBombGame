/*
    Auther: Ahmed Naeem
    Date:   7/9/2022
    ***************************logging File***********************

    Include functions
            LogData(string):  function to write the log message to log.txt file
*/

#include <stdio.h>
#include <string.h>
#include "logging.h"
void LogData(char *str)
{

    FILE *LogFile = NULL;
    char *filename = "log.txt";

    LogFile = fopen(filename, "a+");
    fwrite(str, 1, strlen(str), LogFile);

    fclose(LogFile);
}
