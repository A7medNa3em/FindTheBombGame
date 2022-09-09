#ifndef GRAPH_C
#define GRAPH_C

/* arena is dynamic 2D array */
typedef char **arena_t;

/* Create arena of size n*n */
void CreateArena(arena_t arena, int size);

/* Function to move object to postion x, y at arena of size size*/
void MoveObject(int x, int y, arena_t arena, int size);

/*Print arean of size */
void PrintArena(arena_t arena, int size);

#endif
