/****************************************/
// Author: Melvin Cabatuan
// Date modified: September 16, 2015
// Description: One dimensional array refresher
/***************************************/


#include <stdio.h>
#include <stdlib.h>

#define MAX 12

int main(){
  int c[MAX] = {-45, 6, 0, 72, 1543, -89, 0, 62,-3, 1, 6453, 78};

  int i;
  for(i = 0; i < MAX; i++)
    printf("%d ", c[i]);

  puts("");
  
  for(i = 0; i < MAX; i++)
    printf("%d ", 2*c[i]);

  puts("");
  
  return EXIT_SUCCESS;
}
