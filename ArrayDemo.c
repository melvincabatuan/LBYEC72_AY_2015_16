#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 3
#define MAX_COLS 3
 

int main(){

  int matrix[MAX_ROWS][MAX_COLS];

  int rows, cols;  


  
  for (rows=0; rows < MAX_ROWS; rows++){  
     for(cols=0; cols < MAX_COLS; cols++){
       printf("%d ", matrix[rows][cols]);
     }
     printf("\n");
  }

  matrix[0][0] = 8;
  matrix[0][1] = 9;
  matrix[0][2] = 10;
  
  
  puts("");

  for (rows=0; rows < MAX_ROWS; rows++){  
     for(cols=0; cols < MAX_COLS; cols++){
       printf("%d ", matrix[rows][cols]);
     }
     printf("\n");
  }

  
  
  return EXIT_SUCCESS;
 }
