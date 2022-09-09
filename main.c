/*
    Auther: Ahmed Naeem
    Date:   7/9/2022
    ***************************Main File***********************
    I
*/
//#include "graph.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "control.h"
#include "graph.h"
#include "logging.h"

void main(void)
{
    int ArenaSize, flag = 0, BombRandPos, GameStatus = 0;
    char Action, Temptake;
    arena_t Arena;
    time_t t;
    int ObiectPostion[2];

    /* Scan size of Aena*/
    printf("Enter Size of Arena with maximum 10 and minumum 3 \n");

    do
    {
        scanf("%d", &ArenaSize);
        if ((ArenaSize < 3) || (ArenaSize > 10))
        {
            printf("Maximum size is 10 and Minumum size is 3 \n");
            printf("Enter Size of Arena \t");
        }
        else
        {
            flag = 1;
        }
    } while (flag == 0);

    LogData("- Game Started \n");
    /*Create Arena */
    Arena = (arena_t)calloc(ArenaSize, sizeof(char *));

    CreateArena(Arena, ArenaSize);
    LogData("- Arena Created\n");

    /* put bomb in rondom place within Arena */
    srand(time(&t));
    BombRandPos = rand();

    while (BombRandPos >= ArenaSize)
    {
        BombRandPos /= 2;
    }
    Arena[0][0] = '*';
    Arena[BombRandPos][BombRandPos / 2] = 'o';
    ObiectPostion[0] = 0;
    ObiectPostion[1] = 0;

    LogData("- Bomb placed \n");

    /* start game loop */
    while (GameStatus == 0)
    {

        system("cls");
        PrintArena(Arena, ArenaSize);

        /* Take action from user move up,down,right, left */

        fflush(stdin);
        scanf("%c", &Action);
        // scanf("%c", &Temptake);

        switch (Action)
        {
        case 'w':
            /*Move Up*/
            // printf("Action token\n");
            MoveUp(ArenaSize, ObiectPostion);
            MoveObject(ObiectPostion[0], ObiectPostion[1], Arena, ArenaSize);

            break;
        case 's':
            /*Move down*/
            MoveDown(ArenaSize, ObiectPostion);
            MoveObject(ObiectPostion[0], ObiectPostion[1], Arena, ArenaSize);

            // printf("Action token\n");

            break;
        case 'd':
            /*Move right*/
            MoveRight(ArenaSize, ObiectPostion);

            MoveObject(ObiectPostion[0], ObiectPostion[1], Arena, ArenaSize);
            // printf("Action token\n");
            break;
        case 'a':
            /*Move left*/

            // printf("Action token\n");
            MoveLeft(ArenaSize, ObiectPostion);
            MoveObject(ObiectPostion[0], ObiectPostion[1], Arena, ArenaSize);

            break;

        default:
            break;
        }

        /* check reach or not to print Game over or loop again*/

        if (Arena[BombRandPos][BombRandPos / 2] == '*')
        {
            LogData("- Game Over \n");
            PrintArena(Arena, ArenaSize);
            printf("-****************Game Over************** \n");
            GameStatus = 1;
        }
    }
}
