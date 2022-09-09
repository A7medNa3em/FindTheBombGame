/*
    Auther: Ahmed Naeem
    Date:   7/9/2022
    ***************************Graph File***********************

    Include functions
           1- MoveObject(x, y, char, arena, size): function to place an object
                                                at position (x , y) in the arena.
           2- PrintArena(arena, size): function to print the arena on console.
           3- CreateArena(arena,size): function to Create 2D dynamic array.
*/
#include "graph.h"
#include <stdlib.h>
#include <stdio.h>

void MoveObject(int x, int y, arena_t arena, int size)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arena[i][j] == '*')
            {
                arena[i][j] = '.';
                break;
            }
        }
    }
    arena[x][y] = '*';
}

/* Create arena of size n*n */
void CreateArena(arena_t arena, int size)
{

    /*create dynamic 2d array  with Policeman at (0,0) */

    for (int j = 0; j < size; j++)
    {
        arena[j] = (char *)calloc(size, sizeof(char));
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arena[i][j] = '.';
        }
    }
}

void PrintArena(arena_t arena, int size)
{

    /* print areana with bomb 'o' and policeman '*' at (x,y) at start */

    printf("\n Find The Bomb Game\n\n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("\t");

        for (int j = 0; j < size; j++)
        {
            printf("%c ", arena[i][j]);
        }

        printf("\n");
    }
}
