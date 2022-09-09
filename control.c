/*
    Auther: Ahmed Naeem
    Date:   7/9/2022
    ***************************Graph File***********************

    Include functions
           1- MoveUp(x, y): to move an object up.
           2- MoveDown(x, y): to move an object down.
           3- MoveLeft(x, y): to move an object left.
           4- MoveRight(x, y): to move an object right.
*/

#include "control.h"
#include "graph.h"
#include "logging.h"

/* MoveUp(x, y): to move an object up. only y direction incrmented */

void MoveRight(int size, int *pos)
{
    if (pos[1] < size - 1)
    {
        LogData("- Moved Right\n");
        pos[1]++;
    }
}

/*MoveDown(x, y): to move an object down. only y direction idecrmented */

void MoveLeft(int size, int *pos)
{
    if (pos[1] > 0)
    {
        LogData("- Moved Left\n");
        pos[1]--;
    }
}

/*MoveLeft(x, y): to move an object left. only x direction decrmented */

void MoveDown(int size, int *pos)
{
    if (pos[0] > 0)
    {
        LogData("- Moved Down \n");
        pos[0]--;
    }
}

/*MoveRight(x, y): to move an object right. only x direction incrmented */

void MoveUp(int size, int *pos)
{
    if (pos[0] < size - 1)
    {
        LogData("- Moved up\n");
        pos[0]++;
    }
}
