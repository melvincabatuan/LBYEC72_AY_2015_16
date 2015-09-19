/*============================================================*/
//
//    Author: Melvin Cabatuan
//    Date Modified: September 18, 2015
//    Brief Description: A simple implementation file for basic matrix ops
//                       using arrays
//
/*============================================================*/

#include "mymatrix.h"


/*       FUNCTION IMPLEMENTATION    */

// Acquire the matrix dimension, row, col <= MAX_ROWS, MAX_COLS
void getDimension(int *prow, int *pcol){
  for(;;){
    printf("Give the number of rows for the matrix, (n <= %d) :  \n", MAX_ROWS);
    printf(">> ");
    scanf(" %d", prow);
    printf("Give the number of columns for the matrix, (n <= %d) :  \n", MAX_COLS);
    printf(">> ");
    scanf(" %d", pcol);
    if((*prow <= MAX_ROWS && *prow > 0) && (*pcol <= MAX_COLS && *pcol > 0))
      break;
    else
      puts("Invalid Input! Please try again...\n");
  }
}

// Acquire the matrix data
void inputMatrix(double src[MAX_ROWS][MAX_COLS], int rows, int cols){
  puts("Enter the matrix elements:");
  int i, j;
  for(i = 0; i < rows; ++i){
    for(j = 0; j < cols; ++j){
      printf(">> Element[%d][%d]: ", i, j);
      scanf("%lf", &src[i][j]);
    }
  }
}

// Display menu and get selection
int getMatOperation(){
  int option;
  puts("\n");
  puts("=====================================================");
  puts(" Matrix Menu:");
  puts("=====================================================");
  puts(" 1: Add");
  puts(" 2: Subtract");
  puts(" 3: Transpose");
  puts(" 4: Multiply");
  puts(" 5: Modify Matrix Elements");
  puts(" 6: Display Matrix");
  puts(" 99: Return to Main Menu\n");
  printf(">> ");
  scanf("%d", &option);
  return option;
}

// Check whether dimension is equal
// Used before addition and subtraction
bool isDimEqual(int rows1, int cols1, int rows2, int cols2){
  return ((rows1 == rows2) && (cols1 == cols2));
}

// Add two matrices
void addMatrix(double first[][MAX_COLS], double second[][MAX_COLS], double result[][MAX_COLS], int rows, int cols){
  int i, j;
  for(i = 0; i < rows; ++i){
    for(j = 0; j < cols; ++j){
      result[i][j] = first[i][j] + second[i][j];
    }
  }
}

// Subtract two matrices
void subtractMatrix(double first[][MAX_COLS], double second[][MAX_COLS], double result[][MAX_COLS], int rows, int cols){
  int i, j;
  for(i = 0; i < rows; ++i){
    for(j = 0; j < cols; ++j){
      result[i][j] = first[i][j] - second[i][j];
    }
  }
}


// Check whether multiplication is valid
bool isMultValid(int cols1, int rows2){
  return (cols1 == rows2);
}

// Multiply two matrices;   // cols1 =  rows2 = rowcol
void multiplyMatrix(double first[][MAX_COLS], double second[][MAX_COLS], double result[][MAX_COLS], int rows1, int cols2, int rowcol){
 
  int i, j, k;
  for(i = 0; i < rows1; ++i){
    for(j = 0; j < cols2; ++j){
      result[i][j] = 0;
      for(k = 0; k < rowcol; ++k){
        result[i][j] = result[i][j] + first[i][k]*second[k][j];
      }
    }
  }
}

// Transpose Matrix
void transposeMatrix(double source[][MAX_COLS], int *prows, int *pcols){
  double tempElem;
  int tempDim;
  int max = (*prows > *pcols)? *prows : *pcols;

  // Swap elements
  int i,j;
  for(i = 0; i < max; ++i ){
    for(j = i+1; j < max; ++j){
      tempElem = source[i][j];
      source[i][j] = source[j][i];
      source[j][i] = tempElem;
    }
  }

  // Swap rows and cols
  tempDim = *prows;
  *prows = *pcols;
  *pcols = tempDim;
}

// Modify Matrix
void modifyMatrix(double source[][MAX_COLS], int rows, int cols){
  int i,j;
  for(i = 0; i < rows; ++i){
    for(j = 0; j < cols; ++j){
      printf(">> Element[%d][%d]: ", i, j);
      scanf("%lf", &source[i][j]);
    }
  }
}


// Print Matrix
void printMatrix(double source[][MAX_COLS], int rows, int cols){
  int i,j;
  for(i = 0; i < rows; ++i){
    for(j = 0; j < cols; ++j){
      printf(" %0.2lf ", source[i][j]);
    }
    printf("\n");
  }
}
