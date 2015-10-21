/*============================================================*/
//
//    Author: Melvin Cabatuan
//    Date Modified: September 18, 2015
//    Brief Description: A header file for simple matrix operations 
//                       using arrays
//
/*============================================================*/

/* DO NOT MODIFY THIS FILE FOR THE ACTIVITY */

#ifndef MY_MATRIX_H_
#define MY_MATRIX_H_

#include <stdio.h>

#define MAX_ROWS 3
#define MAX_COLS 3

typedef enum { false = 0, true = !false } bool;

/*       FUNCTION PROTOTYPES    */

// Acquire the matrix dimension
void getDimension(int *prow, int *pcol);

// Acquire the matrix data
void inputMatrix(double src[MAX_ROWS][MAX_COLS], int rows, int cols);

// Display menu and get selection
int getMatOperation();

// Check whether dimension is equal
// Used before addition and subtraction
bool isDimEqual(int rows1, int cols1, int rows2, int cols2);

// Add two matrices
void addMatrix(double first[][MAX_COLS], double second[][MAX_COLS], double result[][MAX_COLS], int rows, int cols);

// Subtract two matrices
void subtractMatrix(double first[][MAX_COLS], double second[][MAX_COLS], double result[][MAX_COLS], int rows, int cols);

// Check whether multiplication is valid
bool isMultValid(int rows1, int cols2);

// Multiply two matrices
void multiplyMatrix(double first[][MAX_COLS], double second[][MAX_COLS], double result[][MAX_COLS], int rows1, int cols2, int rowcol);

// Transpose Matrix
void transposeMatrix(double source[][MAX_COLS], int *prows, int *pcols);

// Modify Matrix
void modifyMatrix(double source[][MAX_COLS], int rows, int cols);

// Print Matrix
void printMatrix(double source[][MAX_COLS], int rows, int cols);

#endif
