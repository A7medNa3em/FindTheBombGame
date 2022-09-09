#ifndef CONTROL_H
#define CONTROL_H

/* MoveUp(x, y): to move an object up. only y direction incrmented */

void MoveUp(int size, int *pos);

/*MoveDown(x, y): to move an object down. only y direction idecrmented */

void MoveDown(int size, int *pos);

/*MoveLeft(x, y): to move an object left. only x direction decrmented */

void MoveLeft(int size, int *pos);

/*MoveRight(x, y): to move an object right. only x direction incrmented */

void MoveRight(int size, int *pos);

#endif