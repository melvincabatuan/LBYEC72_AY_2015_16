/*========================================*/

// Author:
// Description:
// Date Modified:

/*========================================*/

#ifndef MY_STRING_H
#define MY_STRING_H


#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define NUM_STRINGS 16
#define BUFFER_SIZE 128


void getStrings(char stringstorage[][BUFFER_SIZE], int length);

void removeString(char stringstorage[][BUFFER_SIZE], char query[BUFFER_SIZE]);

void removeString(char stringstorage[][BUFFER_SIZE], int index);

void viewStrings(char stringstorage[][BUFFER_SIZE], int length);

int searchString(char stringstorage[][BUFFER_SIZE], int length, char query[BUFFER_SIZE]);

#endif
