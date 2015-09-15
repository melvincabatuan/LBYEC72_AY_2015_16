/************************************************/

//   Author: Melvin Cabatuan
//   Date modified: September 15, 2015
//   Description: A simple array refresher for LBYEC72
//                Multiplying a matrix by a constant

/************************************************/


#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 3
#define MAX_COLS 3
 

void multiplyByConstant(int src[][MAX_COLS], int multiplier){
  
  int rows, cols;  
  
  for (rows=0; rows < MAX_ROWS; rows++){  
     for(cols=0; cols < MAX_COLS; cols++){
       src[rows][cols] = multiplier * src[rows][cols];
     }
  }
}


int main(){

  int matrix[MAX_ROWS][MAX_COLS] = {{1,1,1},{1,1,1},{1,1,1}};

  int rows, cols;  
  
  for (rows=0; rows < MAX_ROWS; rows++){  
     for(cols=0; cols < MAX_COLS; cols++){
       printf("%d ", matrix[rows][cols]);
     }
     printf("\n");
  }


  multiplyByConstant(matrix, 2);
  
  
  puts("");
  puts("The result is ");

  for (rows=0; rows < MAX_ROWS; rows++){  
     for(cols=0; cols < MAX_COLS; cols++){
       printf("%d ", matrix[rows][cols]);
     }
     printf("\n");
  }
  
  return EXIT_SUCCESS;
 }
