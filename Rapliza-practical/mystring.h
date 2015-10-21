/*============================================================*/
//
//    Author: Melvin Cabatuan
//    Date Modified: October 6, 2015
//    Brief Description: A header file for simple string operations 
//                       using char arrays
//
/*============================================================*/

/* DO NOT MODIFY THIS FILE FOR THE ACTIVITY */

#ifndef MY_STRING_H_
#define MY_STRING_H_

#include <stdio.h>
#include <string.h>

enum {NUM_OF_STRINGS = 16, BUFFER_SIZE = 128};

void getStrings(char datastorage[][BUFFER_SIZE], int length);

void removeString(char datastorage[][BUFFER_SIZE], int length, char query[BUFFER_SIZE]);

void viewStrings(char datastorage[][BUFFER_SIZE], int length);

int searchString(char datastorage[][BUFFER_SIZE], int length, char query[BUFFER_SIZE]);

#endif
